#include<iostream>
using namespace std;

//-------------
// Classe Date
//-------------

class date{
private:
    //----attributs----
    int jour;
    int mois;
    int annee;

    //----methodes----
public:
    date(int,int,int); // constructeur à 3 paramètres
    date(const date &); // constructeur par recopie

    void set_jour(); //setter du jour
    void set_mois(); //setter du mois
    void set_annee(); //setter de l'annee

    int get_jour(); //getter du jour
    int get_mois(); //getter du mois
    int get_annee(); //getter de l'année

    friend ostream& operator<<(ostream&, const date &);    //surcharge de l'operateur <<
    friend istream& operator>>(istream&, date &);      //surcharge de l'operateur >>
};


//-------------------------
// Definitions
//-------------------------

    date::date(int a=0, int b=0, int c=0) {jour=a; mois=b; annee=c;}

    date::date(const date & d) {jour=d.jour; mois=d.mois; annee=d.annee;}


void date::set_jour() {
    do{
        cout<<"\nJour : ";
        cin>>jour;
    }while(jour<0 && jour>31);
};

void date::set_mois() {
    do{
        cout<<"\nMois : ";
        cin>>mois;
    }while(mois<0 && mois>12);
};

void date::set_annee() {
    do{
        cout<<"\nAnnee : ";
        cin>>annee;
    }while(annee>2023);
};


int date::get_jour() {return(jour);};

int date::get_mois() {return(mois);};

int date::get_annee() {return(annee);};


ostream& operator<<(ostream& os, const date & d)
{
    os <<"\nJJ/MM/AAAA : "<<d.jour<<"/"<<d.mois<<"/"<<d.annee<<endl;
    return(os);
}


istream& operator>>(istream& is, date& d)
{
    cout<<"\nJour : ";
    is>>d.jour;
    cout<<"Mois : ";
    is>>d.mois;
    cout<<"Annee : ";
    is>>d.annee;
    return(is);
}
