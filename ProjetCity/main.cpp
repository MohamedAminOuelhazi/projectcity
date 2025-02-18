//#include "mainwindow.h"
#include "Maison.h"
#include "Parc.h"
#include "Simulation.h"
#include "Usine.h"
#include "Ville.h"
#include "mainwindow.h"
#include <string>
using namespace std;


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

   // Ville maVille("MaVille", 1000000, 500000,80, 10000, 5000);
   //  Simulation simulation(maVille);
    // int id;
    // string nom;
    // string type;
    // double consommationEau;
    // double consommationElectricite;
    // int effetSatisfaction;
    // Ajouter des bâtiments
   //  Maison* maison1 = new Maison(1, "Maison A","Maison", 5, 10, 5, 4,0);
   //  Usine* usine1 = new Usine(2, "Usine B","Usine", 20, 50, -10, 100, 200);
    // Parc* parc1 = new Parc(3, "Parc Central","Parc", 0, 0, 10, 500, 5);

    // maVille.ajouterBatiment(maison1);
   //  maVille.ajouterBatiment(usine1);
   //  maVille.ajouterBatiment(parc1);

       //  simulation.demarrerCycle();
       //  maVille.calculerSatisfaction();
       //  maVille.calculerConsommationTotale();
       //  simulation.terminerCycle();

   //  return 0;
}
