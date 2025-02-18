#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Ville.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void ajouterBatiment();
    void supprimerBatiment();
    void demarrerCycle();
    void afficherDetails();

    void on_test_clicked();

    void on_Ajoutermaison_clicked();

    void on_Buttonbatiment_clicked();

private:
    Ui::MainWindow *ui;
    Ville *ville; // Instance de la classe Ville

};
#endif // MAINWINDOW_H
