#include "Batiment.h"



// définition du constructeur
Batiment::Batiment(string n,string t,int CE, double CEL, int e)
{
    this->id = id++;
    nom = n;
    type = t;
    consommationEau = CE;
    consommationElectricite = CEL;
    effetSatisfaction = e;
}


// définition de la méthode afficherDetails
void Batiment::afficherDetails()
{
    cout << "le nom est " << nom << endl;
    cout << " le type est " << type << endl;
    cout << " la consommation de l'eau est " << consommationEau  << " unité par cycle."<< endl;
    cout << " la consommation de l'électricité est" << consommationElectricite << " unité par cycle."<< endl;
    cout << " l'effet de satisfaction des habitants est " << effetSatisfaction  << endl;
}



// définition de la méthode calculerImpactRessources
void Batiment::calculerImpactRessources(int& eauRestante, double& electriciteRestante) {
    eauRestante -= consommationEau;             // Réduit l'eau disponible
    electriciteRestante -= consommationElectricite; // Réduit l'électricité disponible
}

int Batiment::getId()const{
    return id;
}

string Batiment::gettype(){
    return type;
}

string Batiment::getnom(){
    return nom;
}

int Batiment::getEffetSatisfaction() const {
    return effetSatisfaction;
}

int Batiment::getconsommationEau() const {
    return consommationEau;
}

int Batiment::getconsommationElectricite() const {
    return consommationElectricite;
}

void Batiment::setEffetSatisfaction(int ES){
    effetSatisfaction=ES;
}
void Batiment::setconsommationEau(int CE){
    consommationEau =CE;
}
void Batiment::setconsommationElectricite(double CEL){
    consommationElectricite =CEL;
}


void Batiment::setnom(string nom){
    nom=nom;
}
