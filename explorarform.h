#ifndef EXPLORARFORM_H
#define EXPLORARFORM_H

#include <QWidget>

namespace Ui {
class ExplorarForm;
}



class ExplorarForm : public QWidget
{
    Q_OBJECT

public:
    explicit ExplorarForm(QWidget *parent = nullptr);
    ~ExplorarForm();
    void addFile(const QModelIndex &idx);
private slots:
    void on_EliminarpushButton_clicked();

private:
    Ui::ExplorarForm *ui;

};

#endif // EXPLORARFORM_H
