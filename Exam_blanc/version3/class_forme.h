#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Forme
//----------------------------------------------------------------------------------
class Forme{
public:
    //----attributs----
    double var;
    string type;

    //----methodes----
public:
    Forme(double,string);
    virtual void afficher();
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
    Forme::Forme(double a=0, string b="None") {var=a; type=b;}
//----------------------
void Forme::afficher() {
    cout<<"------------------------------"<<endl;
    cout<<"C'est un "<<type<<endl;
    cout<<"------------------------------"<<endl;
    if(type=="Cercle"){
        cout<<"Rayon = "<<var<<endl;
    }
    else if(type=="Carre"){
        cout<<"Cote = "<<var<<endl;
    }
    else if(type=="Rectangle"){
        cout<<"Longueur = "<<var<<endl;
    }
    else {
        cout<<"... = "<<var<<endl;
    }
}
