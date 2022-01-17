#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <agregarform.h>
#include <explorarform.h>
#include <QMdiSubWindow>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExplorar_triggered(){
    mExplorarForm = new ExplorarForm(this);
    loadSubWindow(mExplorarForm);

    if(mAgregarForm){
        connect(mAgregarForm, &AgregarForm::SelectedFile, mExplorarForm, &ExplorarForm::addFile);
    }

}

void MainWindow::on_actionAgregar_triggered(){
    mAgregarForm = new AgregarForm(this);
    loadSubWindow(mAgregarForm);
    if(mExplorarForm){
        connect(mAgregarForm, &AgregarForm::SelectedFile, mExplorarForm, &ExplorarForm::addFile);
    }
}

void MainWindow::on_actionQuitar_triggered(){
    close();
}

void MainWindow::loadSubWindow(QWidget *widget){
    auto window = ui->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->show();
}
