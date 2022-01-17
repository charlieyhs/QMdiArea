#include "agregarform.h"
#include "ui_agregarform.h"
#include <QFileSystemModel>


AgregarForm::AgregarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarForm)
{
    ui->setupUi(this);
    mModel = new QFileSystemModel(this);
    mModel->setRootPath(QDir::homePath());
    ui->columnView->setModel(mModel);
}

AgregarForm::~AgregarForm()
{
    delete ui;
}

void AgregarForm::on_AgregarpushButton_clicked(){
    emit SelectedFile(ui->columnView->currentIndex());
}
