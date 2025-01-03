#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Carre
//----------------------------------------------------------------------------------
class Carre : public Forme{
    //----methodes----
public:
    Carre();
    virtual void afficher();
    double calcul_perimetre_carre();
    double calcul_aire_carre();
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
Carre::Carre() : Forme(0, "Carre") {
    double cote;
    do {
        cout << "Cote : ";
        cin >> cote;
    } while (cote <= 0);
    var = cote;
}

//----------------------
void Carre::afficher() {
    Forme::afficher();
    cout<<"Perimetre = "<<calcul_perimetre_carre()<<endl;
    cout<<"Aire = "<<calcul_aire_carre()<<endl;
    cout<<"------------------------------"<<endl;
}

//----------------------
double Carre::calcul_perimetre_carre() {
    return(4*var);
}

//----------------------
double Carre::calcul_aire_carre() {
    return(pow(var,2));
}
