#include<iostream>
using namespace std;

//----------------
// Classe Etudiant
//----------------
class etudiant{
private:
    //----attributs----
    string nom;
    string prenom;
    date ddn;
    note n1,n2,n3;
    double moy;

    //----methodes----
public:
    etudiant(string,string,date,note,note,note); // constructeur à 6 paramètres

    void set_nom();     //setter du nom
    void set_prenom(); //setter du prenom
    void set_ddn(); //setter de ddn
    void set_n1(); //setter de note 1
    void set_n2(); //setter de note 2
    void set_n3(); //setter de note 3
    void set_moyenne(); //setter de moyenne

    string get_nom(); //getter de nom
    string get_prenom(); //getter de prenom
    date get_ddn(); //getter de ddn
    note get_n1(); //getter de n1
    note get_n2(); //getter de n2
    note get_n3(); //getter de n3
    double get_moyenne(); //getter de moyenne

    void calcul_moyenne();

    friend ostream& operator<<(ostream&, const etudiant &);    //surcharge de l'operateur <<
    friend istream& operator>>(istream&, etudiant &);      //surcharge de l'operateur >>
};


//------------
// Definitions
//------------
    etudiant::etudiant(string nomE="None", string prenomE="None", date da=date(0,0,0), note no1=note("None",0,0), note no2=note("None",0,0), note no3=note("None",0,0)) {nom=nomE; prenom=prenomE; ddn=da; n1=no1; n2=no2; n3=no3; moy=0;}

void etudiant::set_nom() {
    cout<<"Nom : ";
    cin>>nom;
};

void etudiant::set_prenom() {
    cout<<"Prenom : ";
    cin>>prenom;
};

void etudiant::set_ddn() {
    cout<<"Date de Naissance : ";
    cin>>ddn;
};

void etudiant::set_n1() {
    cout<<"Note 1 : ";
    cin>>n1;
};

void etudiant::set_n2() {
    cout<<"Note 2 : ";
    cin>>n2;
};

void etudiant::set_n3() {
    cout<<"Note 3 : ";
    cin>>n3;
};

void etudiant::set_moyenne() {
    double no1 = n1.get_n();
    double no2 = n2.get_n();
    double no3 = n3.get_n();
    int co1 = n1.get_coef();
    int co2 = n2.get_coef();
    int co3 = n3.get_coef();
    moy=(no1*co1+no2*co2+no3*co3)/(co1+co2+co3);
};


string etudiant::get_nom() {return(nom);}

string etudiant::get_prenom() {return(prenom);}

date etudiant::get_ddn() {return(ddn);}

note etudiant::get_n1() {return(n1);}

note etudiant::get_n2() {return(n2);}

note etudiant::get_n3() {return(n3);}

double etudiant::get_moyenne() {return(moy);}

void etudiant::calcul_moyenne() {
    double no1 = n1.get_n();
    double no2 = n2.get_n();
    double no3 = n3.get_n();
    int co1 = n1.get_coef();
    int co2 = n2.get_coef();
    int co3 = n3.get_coef();
    moy=(no1*co1+no2*co2+no3*co3)/(co1+co2+co3);
}

ostream& operator<<(ostream& os, const etudiant & etud)
{
    os <<"\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    os <<"\n####################\n      Etudiant\n####################";
    os <<"\nNom : "<<etud.nom;
    os <<"\nPrenom : "<<etud.prenom;
    cout<<etud.ddn;
    os <<"-----# Note 1 #-----";
    cout<<etud.n1;
    os <<"-----# Note 2 #-----";
    cout<<etud.n2;
    os <<"-----# Note 3 #-----";
    cout<<etud.n3;
    os <<"--------------------\nMoyenne : "<<etud.moy<<"/20\n####################";
    os <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    return(os);
}

istream& operator>>(istream& is, etudiant& etud)
{
    cout<<"\nNom : ";
    is>>etud.nom;
    cout<<"Prenom : ";
    is>>etud.prenom;
    cout<<"----------\n";
    cout<<"Date de naissance : ";
    cin>>etud.ddn;
    cout<<"----------\n";
    cout<<"Note 1 : ";
    cin>>etud.n1;
    cout<<"----------\n";
    cout<<"Note 2 : ";
    cin>>etud.n2;
    cout<<"----------\n";
    cout<<"Note 3 : ";
    cin>>etud.n3;
    return(is);
}
