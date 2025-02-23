#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Maison.h"
#include "Simulation.h"
#include "Usine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Initialiser la ville
    ville = new Ville("Tunisie", 100000, 5000);

    simulation = new Simulation(*ville);

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
    delete simulation; // Nettoyer simulation manuellement (pas de parent Qt)
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
    Maison* maison = new Maison(nom.toStdString(), "Maison", eau, electricite,20 ,capaciteHabitants, Habitant);

    // Ajouter la maison à la ville (supposons que tu as une instance de Ville)
    ville->ajouterBatiment(maison);


    ville->ressourcesEau= ville->ressourcesEau-eau ;
    ville->ressourcesElectricité= ville->ressourcesElectricité-electricite ;
    ville->satisfaction =  ville->satisfaction + 20;

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
    Usine *maison = new Usine("Usine 1", "Usine", 500 , 1000 ,100 ,12, 12);
    ville->ajouterBatiment(maison);
    ui->listeBatiments->addItem(QString::fromStdString(maison->getnom()));
}

void MainWindow::supprimerBatiment() {
    // Exemple : Supprimer le bâtiment sélectionné

    QListWidgetItem* item = ui->listeBatiments->currentItem();
    if (!item) {
        ui->textEditDetails->setText("Aucun bâtiment sélectionné.");
        return;
    }

    QString nomBatiment = item->text();
    Batiment* batimentSelectionne = nullptr;

    // Rechercher le bâtiment correspondant dans la liste des bâtiments de la ville
    for (Batiment* b : ville->getBatiments()) { // Assurez-vous que `getBatiments()` existe
        if (b->getnom() == nomBatiment) {
            batimentSelectionne = b;
            break;
        }
    }

    if (!batimentSelectionne) {
        ui->textEditDetails->setText("Bâtiment non trouvé.");
        return;
    } else {

        // Calculer l'impact des ressources avant de supprimer (libérer les ressources consommées)
        int eauLiberee = batimentSelectionne->getconsommationEau();
        int electriciteLiberee = batimentSelectionne->getconsommationElectricite();
        int effetSatisfaction = 20;

        // Mettre à jour les ressources de la ville
        ville->ressourcesElectricité = ville->ressourcesElectricité + electriciteLiberee;

        // Augmenter les ressources électriques
        ville->ressourcesEau= (ville->getEau() + eauLiberee);

        // Augmenter les ressources en eau
        ville->modifierSatisfaction(-effetSatisfaction); // Ajuster la satisfaction (supprimer l'effet du bâtiment)

        // Supprimer le bâtiment de la liste
        ville->supprimerBatiment(batimentSelectionne->getId());

        delete item;

        afficherDetails();

    }
}

void MainWindow::demarrerCycle() {
    simulation->demarrerCycle();
    afficherDetails();
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



    QListWidgetItem* item = ui->listeBatiments->currentItem();
    if (!item) {
        ui->textEditDetails->setText("Aucun bâtiment sélectionné.");
        return;
    }

    QString nomBatiment = item->text();
    Batiment* batimentSelectionne = nullptr;

    // Rechercher le bâtiment correspondant dans la liste des bâtiments de la ville
    for (Batiment* b : ville->getBatiments()) { // Assurez-vous que `getBatiments()` existe
        if (b->getnom() == nomBatiment) {
            batimentSelectionne = b;
            break;
        }
    }

    if (batimentSelectionne) {
        // Afficher les détails du bâtiment dans le QTextEdit
        string s=batimentSelectionne->chaine();
        ui->textEditDetails->setText(QString::fromStdString(s));

        if (QString::fromStdString(batimentSelectionne->gettype())=="Maison"){

            Maison* maison = dynamic_cast<Maison*>(batimentSelectionne);
            if (!maison) {
                ui->textEditDetails->setText("Erreur de conversion en Maison.");
                return;
            }

             ui->lineEditNom_2->setText(QString::fromStdString(batimentSelectionne->getnom())); // Nom de la maison
            ui->spinBoxEau_2->setValue(batimentSelectionne->getconsommationEau());
             ui->spinBoxElectricite_2->setValue(batimentSelectionne->getconsommationElectricite());
            ui->spinBoxHabitant_2->setValue(maison->gethabitantsActuels());
             ui->spinBoxCapaciteHabitants_2->setValue(maison->getcapaciteHabitants());

        }

        if (QString::fromStdString(batimentSelectionne->gettype())=="Usine"){

            Usine* usine = dynamic_cast<Usine*>(batimentSelectionne);
            if (!usine) {
                ui->textEditDetails->setText("Erreur de conversion en usine.");
                return;
            }

            ui->lineEditNom_6->setText(QString::fromStdString(batimentSelectionne->getnom())); // Nom de la maison
            ui->spinBoxEau_6->setValue(batimentSelectionne->getconsommationEau());
            ui->spinBoxElectricite_8->setValue(batimentSelectionne->getconsommationElectricite());
            ui->spinBoxPr_3->setValue(usine->productionRessources);
            ui->spinBoxP_2->setValue(usine->pollution);

        }

        if (QString::fromStdString(batimentSelectionne->gettype())=="Parc"){

            Parc* parc = dynamic_cast<Parc*>(batimentSelectionne);
            if (!parc) {
                ui->textEditDetails->setText("Erreur de conversion en parc.");
                return;
            }

            ui->lineEditNom_5->setText(QString::fromStdString(batimentSelectionne->getnom())); // Nom de la maison
            ui->spinBoxEau_5->setValue(batimentSelectionne->getconsommationEau());
            ui->spinBoxElectricite_7->setValue(batimentSelectionne->getconsommationElectricite());
            ui->spinBoxSurface_2->setValue(parc->surface);
            ui->spinBoxEbe_2->setValue(parc->effetBienEtre);

        }



    } else {

        ui->textEditDetails->setText("Bâtiment non trouvé.");
    }


}


void MainWindow::on_terminerCycle_clicked()
{   simulation->terminerCycle();
    afficherDetails();
}


void MainWindow::on_modifiermaison_clicked()
{


    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom_2->text(); // Nom de la maison
    int eau = ui->spinBoxEau_2->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite_2->value(); // Consommation d'électricité
    int Habitant = ui->spinBoxHabitant_2->value(); // Consommation d'électricité
    int capaciteHabitants = ui->spinBoxCapaciteHabitants_2->value(); // Consommation d'électricité


    QListWidgetItem* item = ui->listeBatiments->currentItem();
    if (!item) {
        ui->textEditDetails->setText("Aucun bâtiment sélectionné.");
        return;
    }

    QString nomBatiment = item->text();
    Batiment* batimentSelectionne = nullptr;

    // Rechercher le bâtiment correspondant dans la liste des bâtiments de la ville
    for (Batiment* b : ville->getBatiments()) { // Assurez-vous que `getBatiments()` existe
        if (b->getnom() == nomBatiment) {
            batimentSelectionne = b;
            break;
        }
    }


    if (batimentSelectionne) {

        if (QString::fromStdString(batimentSelectionne->gettype())=="Maison"){


            Maison* maison = dynamic_cast<Maison*>(batimentSelectionne);
            if (!maison) {
                ui->textEditDetails->setText("Erreur de conversion en Maison.");
                return;
            }


            batimentSelectionne->setnom(nom.toStdString());

            // modifier ressources Eau

            if (batimentSelectionne->getconsommationEau()>eau){
                ville->ressourcesEau = (ville->ressourcesEau)+ (batimentSelectionne->getconsommationEau()-eau);
                maison->setconsommationEau(eau);

            }else if ((batimentSelectionne->getconsommationEau())<eau) {
                ville->ressourcesEau = (ville->ressourcesEau) - (eau -batimentSelectionne->getconsommationEau());
                maison->setconsommationEau(eau);

            }

            // modifier ressources Electricité
            if (batimentSelectionne->getconsommationElectricite()>electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité + (batimentSelectionne->getconsommationElectricite()-electricite);
                batimentSelectionne->setconsommationElectricite(electricite);

            }else if (batimentSelectionne->getconsommationElectricite()<electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité - (electricite - batimentSelectionne->getconsommationElectricite());
                batimentSelectionne->setconsommationElectricite(electricite);
            }

            int anciensHabitants = maison->gethabitantsActuels(); // Supposons que getHabitantsActuels existe
            int ancienneCapacite = maison->getcapaciteHabitants();

            maison->setHabitantsActuels(Habitant); // Supposons que setHabitantsActuels existe
            maison->setCapaciteHabitants(capaciteHabitants);
            afficherDetails();


            string s=maison->chaine();
            ui->textEditDetails->setText(QString::fromStdString(s));
        }


    } else {

        ui->textEditDetails->setText("Bâtiment non trouvé.");
    }



}


void MainWindow::on_Ajouterusine_clicked()
{
    ui->spinBoxEau_3->setMaximum(ville->ressourcesEau);
    ui->spinBoxElectricite_3->setMaximum(ville->ressourcesElectricité);

    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom_3->text(); // Nom de la maison
    int eau = ui->spinBoxEau_3->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite_3->value(); // Consommation d'électricité
    double productionRessources = ui->spinBoxPr->value(); // Consommation d'électricité
    double pollution = ui->spinBoxP->value(); // Consommation d'électricité



    // Créer une nouvelle maison avec les données récupérées
    Usine* usine = new Usine(nom.toStdString(), "Usine", eau, electricite,0,productionRessources, pollution);

    // Ajouter la maison à la ville (supposons que tu as une instance de Ville)
    ville->ajouterBatiment(usine);


    ville->ressourcesEau= ville->ressourcesEau-eau ;
    ville->ressourcesElectricité= ville->ressourcesElectricité-electricite ;
    ville->satisfaction =  ville->satisfaction - 20;

    // Ajouter le nom de la maison à la liste des bâtiments
    ui->listeBatiments->addItem(nom);

    afficherDetails();

    // Effacer les champs après l'ajout
    ui->lineEditNom_3->clear();
    ui->spinBoxEau_3->setValue(0);
    ui->spinBoxElectricite_3->setValue(0);
    ui->spinBoxPr->setValue(0);
    ui->spinBoxP->setValue(0);
}


void MainWindow::on_Modifierusine_clicked()
{
    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom_6->text(); // Nom de la maison
    int eau = ui->spinBoxEau_6->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite_8->value(); // Consommation d'électricité
    double productionRessources = ui->spinBoxPr_3->value(); // Consommation d'électricité
    double pollution = ui->spinBoxP_2->value(); // Consommation d'électricité


    QListWidgetItem* item = ui->listeBatiments->currentItem();
    if (!item) {
        ui->textEditDetails->setText("Aucun bâtiment sélectionné.");
        return;
    }

    QString nomBatiment = item->text();
    Batiment* batimentSelectionne = nullptr;

    // Rechercher le bâtiment correspondant dans la liste des bâtiments de la ville
    for (Batiment* b : ville->getBatiments()) { // Assurez-vous que `getBatiments()` existe
        if (b->getnom() == nomBatiment) {
            batimentSelectionne = b;
            break;
        }
    }


    if (batimentSelectionne) {

        if (QString::fromStdString(batimentSelectionne->gettype())=="Usine"){


            Usine* usine = dynamic_cast<Usine*>(batimentSelectionne);
            if (!usine) {
                ui->textEditDetails->setText("Erreur de conversion en usine.");
                return;
            }


            batimentSelectionne->setnom(nom.toStdString());

            // modifier ressources Eau

            if (batimentSelectionne->getconsommationEau()>eau){
                ville->ressourcesEau = (ville->ressourcesEau)+ (batimentSelectionne->getconsommationEau()-eau);
                usine->setconsommationEau(eau);

            }else if ((batimentSelectionne->getconsommationEau())<eau) {
                ville->ressourcesEau = (ville->ressourcesEau) - (eau - batimentSelectionne->getconsommationEau());
                usine->setconsommationEau(eau);

            }

            // modifier ressources Electricité
            if (batimentSelectionne->getconsommationElectricite()>electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité + (batimentSelectionne->getconsommationElectricite()-electricite);
                batimentSelectionne->setconsommationElectricite(electricite);
            }else if (batimentSelectionne->getconsommationElectricite()<electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité - (electricite - batimentSelectionne->getconsommationElectricite());
                batimentSelectionne->setconsommationElectricite(electricite);
            }


            usine->productionRessources = productionRessources; // Supposons que setHabitantsActuels existe
            usine->pollution = pollution;

            afficherDetails();


            string s=usine->chaine();

            ui->textEditDetails->setText(QString::fromStdString(s));



        }


    } else {

        ui->textEditDetails->setText("Bâtiment non trouvé.");
    }


}


void MainWindow::on_Ajouterparc_clicked()
{
    ui->spinBoxEau_4->setMaximum(ville->ressourcesEau);
    ui->spinBoxElectricite_4->setMaximum(ville->ressourcesElectricité);

    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom_4->text(); // Nom de la maison
    int eau = ui->spinBoxEau_4->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite_4->value(); // Consommation d'électricité
    double Surface = ui->spinBoxSurface->value(); // Consommation d'électricité
    int effetBienétre = ui->spinBoxEbe->value(); // Consommation d'électricité



    // Créer une nouvelle maison avec les données récupérées
    Parc* parc = new Parc(nom.toStdString(), "Parc", eau, electricite,30,Surface, effetBienétre);

    // Ajouter la maison à la ville (supposons que tu as une instance de Ville)
    ville->ajouterBatiment(parc);


    ville->ressourcesEau= ville->ressourcesEau-eau ;
    ville->ressourcesElectricité= ville->ressourcesElectricité-electricite ;
    ville->satisfaction =  ville->satisfaction + 30;

    // Ajouter le nom de la maison à la liste des bâtiments
    ui->listeBatiments->addItem(nom);

    afficherDetails();

    // Effacer les champs après l'ajout
    ui->lineEditNom_4->clear();
    ui->spinBoxEau_4->setValue(0);
    ui->spinBoxElectricite_4->setValue(0);
    ui->spinBoxSurface->setValue(0);
    ui->spinBoxEbe->setValue(0);
}


void MainWindow::on_ModifierParc_clicked()
{
    // Récupérer les données saisies par l'utilisateur
    QString nom = ui->lineEditNom_5->text(); // Nom de la maison
    int eau = ui->spinBoxEau_5->value(); // Consommation d'eau
    int electricite = ui->spinBoxElectricite_7->value(); // Consommation d'électricité
    double Surface = ui->spinBoxSurface_2->value(); // Consommation d'électricité
    double effetBienétre = ui->spinBoxEbe_2->value(); // Consommation d'électricité


    QListWidgetItem* item = ui->listeBatiments->currentItem();
    if (!item) {
        ui->textEditDetails->setText("Aucun bâtiment sélectionné.");
        return;
    }

    QString nomBatiment = item->text();
    Batiment* batimentSelectionne = nullptr;

    // Rechercher le bâtiment correspondant dans la liste des bâtiments de la ville
    for (Batiment* b : ville->getBatiments()) { // Assurez-vous que `getBatiments()` existe
        if (b->getnom() == nomBatiment) {
            batimentSelectionne = b;
            break;
        }
    }


    if (batimentSelectionne) {

        if (QString::fromStdString(batimentSelectionne->gettype())=="Parc"){


            Parc* parc = dynamic_cast<Parc*>(batimentSelectionne);
            if (!parc) {
                ui->textEditDetails->setText("Erreur de conversion en parc.");
                return;
            }


            batimentSelectionne->setnom(nom.toStdString());

            // modifier ressources Eau

            if (batimentSelectionne->getconsommationEau()>eau){
                ville->ressourcesEau = (ville->ressourcesEau)+ (batimentSelectionne->getconsommationEau()-eau);
                parc->setconsommationEau(eau);

            }else if ((batimentSelectionne->getconsommationEau())<eau) {
                ville->ressourcesEau = (ville->ressourcesEau) - (eau - batimentSelectionne->getconsommationEau());
                parc->setconsommationEau(eau);

            }

            // modifier ressources Electricité
            if (batimentSelectionne->getconsommationElectricite()>electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité + (batimentSelectionne->getconsommationElectricite()-electricite);
                batimentSelectionne->setconsommationElectricite(electricite);

            }else if (batimentSelectionne->getconsommationElectricite()<electricite){
                ville->ressourcesElectricité = ville->ressourcesElectricité - (electricite - batimentSelectionne->getconsommationElectricite());
                batimentSelectionne->setconsommationElectricite(electricite);
            }


            parc->surface = Surface; // Supposons que setHabitantsActuels existe
            parc->effetBienEtre = effetBienétre;

            afficherDetails();


            string s=parc->chaine();

            ui->textEditDetails->setText(QString::fromStdString(s));



        }


    } else {

        ui->textEditDetails->setText("Bâtiment non trouvé.");
    }

}

