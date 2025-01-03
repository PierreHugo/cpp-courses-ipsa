#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Rectangle
//----------------------------------------------------------------------------------
class Rectangle : public Forme{
    //----attributs----
public:
    double largeur;
    //----methodes----
public:
    Rectangle();
    virtual void afficher();
    double calcul_perimetre_rectangle();
    double calcul_aire_rectangle();
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
Rectangle::Rectangle() : Forme(0, "Rectangle") {
    double longu;
    double large;
    do {
        cout << "Longeur : ";
        cin >> longu;
    } while (longu <= 0);
    do {
        cout << "Largeur : ";
        cin >> large;
    } while (large <= 0);
    var = longu;
    largeur = large;
}

//----------------------
void Rectangle::afficher() {
    Forme::afficher();
    cout<<"Largeur = "<<largeur<<endl;
    cout<<"Perimetre = "<<calcul_perimetre_rectangle()<<endl;
    cout<<"Aire = "<<calcul_aire_rectangle()<<endl;
    cout<<"------------------------------"<<endl;
}

//----------------------
double Rectangle::calcul_perimetre_rectangle() {
    return((var+largeur)*2);
}

//----------------------
double Rectangle::calcul_aire_rectangle() {
    return(var*largeur);
}
