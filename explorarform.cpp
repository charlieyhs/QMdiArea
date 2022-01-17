#include "explorarform.h"
#include "ui_explorarform.h"

ExplorarForm::ExplorarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorarForm)
{
    ui->setupUi(this);

}

ExplorarForm::~ExplorarForm()
{
    delete ui;
}

void ExplorarForm::addFile(const QModelIndex &idx){
    ui->listWidget->addItem(idx.data().toString());
}

void ExplorarForm::on_EliminarpushButton_clicked(){
    delete ui->listWidget->currentItem();

}
