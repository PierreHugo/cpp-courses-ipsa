#include<iostream>
#include<cmath>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Cercle
//----------------------------------------------------------------------------------
class Cercle : public Forme{
    //----methodes----
public:
    Cercle();
    virtual void afficher();
    double calcul_perimetre_cercle();
    double calcul_aire_cercle();
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
Cercle::Cercle() : Forme(0, "Cercle") {
    double rayon;
    do {
        cout << "Rayon : ";
        cin >> rayon;
    } while (rayon <= 0);
    var = rayon;
}

//----------------------
void Cercle::afficher() {
    Forme::afficher();
    cout<<"Perimetre = "<<calcul_perimetre_cercle()<<endl;
    cout<<"Aire = "<<calcul_aire_cercle()<<endl;
    cout<<"------------------------------"<<endl;
}

//----------------------
double Cercle::calcul_perimetre_cercle() {
    return(2*var*M_PI);
}

//----------------------
double Cercle::calcul_aire_cercle() {
    return(M_PI*pow(var,2));
}
