#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Simulation.h"
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
    void ajouterBatiment();
    void supprimerBatiment();
    void demarrerCycle();
    void afficherDetails();


    void on_Ajoutermaison_clicked();

    void on_Buttonbatiment_clicked();

    void on_terminerCycle_clicked();

    void on_modifiermaison_clicked();

    void on_Ajouterusine_clicked();

    void on_Modifierusine_clicked();

    void on_Ajouterparc_clicked();

    void on_ModifierParc_clicked();

private:
    Ui::MainWindow *ui;
    Ville *ville; // Instance de la classe Ville
    Simulation* simulation;
};
#endif // MAINWINDOW_H
