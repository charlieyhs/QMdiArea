#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointer>
#include "agregarform.h"
#include "explorarform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

class AgregarForm;
class ExplorarForm;

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExplorar_triggered();
    void on_actionAgregar_triggered();
    void on_actionQuitar_triggered();

private:
    Ui::MainWindow *ui;
    QPointer<AgregarForm> mAgregarForm;
    QPointer<ExplorarForm> mExplorarForm;

    void loadSubWindow(QWidget *widget);

};
#endif // MAINWINDOW_H
