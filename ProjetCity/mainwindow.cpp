#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Maison.h"
#include "Usine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Initialiser la ville
    ville = new Ville("VirtualCity", 100000, 5000);

    afficherDetails();


    // Connecter les boutons aux slots
    connect(ui->boutonAjouterBatiment, &QPushButton::clicked, this, &MainWindow::ajouterBatiment);
    connect(ui->boutonAjouterBatiment, &QPushButton::clicked, this, &MainWindow::ajouterBatiment);
    connect(ui->boutonAjouterBatiment, &QPushButton::clicked, this, &MainWindow::ajouterBatiment);
    connect(ui->boutonSupprimerBatiment, &QPushButton::clicked, this, &MainWindow::supprimerBatiment);
    connect(ui->boutonDemarrerCycle, &QPushButton::clicked, this, &MainWindow::demarrerCycle);
    connect(ui->boutonAfficherDetails, &QPushButton::clicked, this, &MainWindow::afficherDetails);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ville;

}

void MainWindow::on_Ajoutermaison_clicked()
{
    ui->spinBoxEau->setMaximum(ville->ressourcesEau);
    ui->spinBoxElectricite->setMaximum(ville->ressourcesElectricité);

    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom->text(); // Nom de la maison
    int eau = ui->spinBoxEau->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite->value(); // Consommation d'électricité
    int Habitant = ui->spinBoxHabitant->value(); // Consommation d'électricité
    int capaciteHabitants = ui->spinBoxCapaciteHabitants->value(); // Consommation d'électricité



    // Créer une nouvelle maison avec les données récupérées
    Maison* maison = new Maison(1, nom.toStdString(), "Maison", eau, electricite,100 ,capaciteHabitants, Habitant);

    // Ajouter la maison à la ville (supposons que tu as une instance de Ville)
    ville->ajouterBatiment(maison);

    ville->ressourcesEau= ville->ressourcesEau-eau ;
    ville->ressourcesElectricité= ville->ressourcesElectricité-electricite ;


    // Ajouter le nom de la maison à la liste des bâtiments
    ui->listeBatiments->addItem(nom);

    afficherDetails();

    // Effacer les champs après l'ajout
    ui->lineEditNom->clear();
    ui->spinBoxEau->setValue(0);
    ui->spinBoxElectricite->setValue(0);
    ui->spinBoxHabitant->setValue(0);
    ui->spinBoxCapaciteHabitants->setValue(0);

}


void MainWindow::ajouterBatiment() {
    // Exemple : Ajouter une maison
    Usine *maison = new Usine(1, "Usine 1", "Usine", 500 , 1000 ,100 ,12, 12);
    ville->ajouterBatiment(maison);
    ui->listeBatiments->addItem(QString::fromStdString(maison->getnom()));
}

void MainWindow::supprimerBatiment() {
    // Exemple : Supprimer le bâtiment sélectionné
    QListWidgetItem *item = ui->listeBatiments->currentItem();
    if (item) {
        QString nomBatiment = item->text();
        ville->supprimerBatiment(nomBatiment.toInt()); // Supposons que l'ID est stocké dans le texte
        delete item;
    }
}

void MainWindow::demarrerCycle() {
    ville->calculerConsommationTotale();
    ville->calculerSatisfaction();
    ui->progressEau->setValue(ville->ressourcesEau);
    ui->progressElectricite->setValue(ville->getElectricite());
    ui->progressSatisfaction->setValue(ville->calculerSatisfaction());
}




void MainWindow::afficherDetails() {


    ui->nomville->setText(QString::fromStdString(ville->nom));

    ui->progressEau->setValue(ville->ressourcesEau);

    ui->progressElectricite->setValue(ville->ressourcesElectricité);

    ui->progressSatisfaction->setValue(ville->satisfaction);

    QString detailsville = "Détails de la ville :\n";
    detailsville += "population : " + QString::number(ville->population) + "\n";
    detailsville += "ressources Eau : " + QString::number(ville->ressourcesEau) + "\n";
    detailsville += "ressources Electricité : " + QString::number(ville->ressourcesElectricité) + "\n";
    detailsville += "satisfaction : " + QString::number(ville->satisfaction) + "\n";
    ui->villedetails->setText(detailsville);


}





void MainWindow::on_Buttonbatiment_clicked()
{
    QListWidgetItem *item = ui->listeBatiments->currentItem();

    // if (item) {
        QString nomBatiment = item->text();

        for (auto it = ville->batiments.begin(); it != ville->batiments.end(); ++it) {

            /*if ((*it)->getnom() == item->text()) {
                if((*it)->gettype()== "maison"){
                    QString detailsville = "Détails de la ville :\n";
                    detailsville += "Habitant : " + QString::number((*it)->gethabitantsActuels() ) + "\n";
                    detailsville += "ressources Eau : " + QString::number((*it)->getconsommationEau()) + "\n";
                    detailsville += "ressources Electricité : " + QString::number((*it)->getconsommationElectricite()) + "\n";
                    detailsville += "satisfaction : " + QString::number((*it)->getEffetSatisfaction()) + "\n";
                    ui->Buttonbatiment->setText(nomBatiment);
                }


           } */

            ui->textEditDetails->setText(QString::fromStdString((*it)->getnom()));
    //}

}
}
