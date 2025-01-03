#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//-------------------------------------------------
class vehicule
//-------------------------------------------------

{
protected:
    int nb_roue;
    int vitesse;

public:
    vehicule();
    virtual ~vehicule();
    vehicule(int,double);
    virtual void afficher();
};
//-------------------------------------------------
class voiture : public vehicule
//-------------------------------------------------
{
protected:
    int nb_porte;

public:
    voiture();
    virtual ~voiture();
    voiture(int,double,int);
    virtual void afficher();
};
//-------------------------------------------------
class moto : public vehicule
//-------------------------------------------------

{
protected:
    int coffre;

public:
    moto();
    virtual ~moto();
    moto(int,double,int);
    virtual void afficher();
};

class garage
//-------------------------------------------------
{
protected:
    vector<vehicule*> liste_vehicule;

public:
    garage();
    virtual ~garage();
    void ajouter();
    virtual void afficher();
    void supprimer();

};
//-------------------------------------------------
// Definition des methodes
//-------------------------------------------------
vehicule :: vehicule()
{
    do{
        cout<<"Donner le nombre de roues :";
        cin>>nb_roue;
    }while (nb_roue != 2 && nb_roue !=4);

    do{
        cout<<"Donner la vitesse :";
        cin>>vitesse;
    }while (vitesse <= 0);
}

vehicule :: ~vehicule(){}

vehicule :: vehicule(int a,double b)
{
    nb_roue=a;
    vitesse=b;
}
//-------------------------------------------------

void  vehicule :: afficher()
{
    cout<<"=============================="<<endl;
    cout<<"     C'est un vehicule"<<endl;
    cout<<"=============================="<<endl;

    cout<<"     Nombre de roue(s) : "<<nb_roue<<" roue(s)"<< endl;
    cout<<"     Vitesse = "<<vitesse<<" km/h"<<endl;

}
//-------------------------------------------------
voiture :: voiture ()
{

    cout<<"Donner le nombre de portes :";
    cin>>nb_porte;
}

voiture :: ~voiture(){}


voiture :: voiture(int a,double b, int c):vehicule(a,b),nb_porte(c){}
//-------------------------------------------------

void voiture :: afficher()
{
    cout<<"\n\n\n\n=============================="<<endl;
    cout<<"     C'est une voiture"<<endl;
    vehicule :: afficher();
    cout<<"     Nombre de porte(s) = "<<nb_porte<<" porte(s)"<<endl;
    cout<<"=============================="<<endl;


}
//-------------------------------------------------
moto :: moto()
{
    cout<<"Donner le nombre de coffre :";
    cin>>coffre;
}

moto :: ~moto(){}

moto :: moto(int a,double b, int c):vehicule(a,b),coffre(c){}
//-------------------------------------------------

void moto :: afficher()
{
    cout<<"\n\n\n\n=============================="<<endl;
    cout<<"     C'est une moto"<<endl;
    vehicule :: afficher();
    cout<<"     Nombre de coffre(s) = "<<coffre<<" coffre(s)"<<endl;
    cout<<"=============================="<<endl;

}

     garage :: garage(){}

     garage :: ~garage()
{
    for (int i = 0;i<liste_vehicule.size();i++)
    {
        delete(liste_vehicule[i]);
    }
}

void garage :: ajouter()
{
    int nb_v;
    do{
        cout<<"=============================="<<endl;
        cout<<" Combien de vehicules voulez-vous ajouter ?"<<endl;
        cin>>nb_v;

    }while (nb_v <= 0);

    for (int i = 0;i<nb_v;i++)
    {
        int choix;
        do{
            cout<<"=============================="<<endl;
            cout<<" Quel type de vehicule voulez-vous ajouter ?"<<endl;
            cout<<" 1 : voiture /// 2 : moto"<<endl;
            cin>>choix;
        }while (choix != 1 && choix != 2);
        if (choix == 1)
        {
            liste_vehicule.push_back(new voiture());
        }
        else
        {
            liste_vehicule.push_back(new moto());
        }
    }
}

void garage :: afficher()
{
    for (int i=0;i>liste_vehicule.size();i++)
        cout<<liste_vehicule[i]<<endl;
}

void garage :: supprimer()
{
    int num;
    cout<<"Donner le num�ro du v�hicule � supprimer : ";
    cin>>num;
    liste_vehicule.erase(liste_vehicule.begin()+num);
    cout<<"Votre vehicule a bien ete supprime."<<endl;
}

int menu()
{
    garage G;
    int choix;
    do{
        cout<<"=============================="<<endl;
        cout<<" Que voulez-vous faire ?"<<endl;
        cout<<" 1 : ajouter vehicule"<<endl;
        cout<<" 2 : supprimer vehicule"<<endl;
        cout<<" 3 : afficher garage"<<endl;
        cout<<" 4 : quitter"<<endl;
        cin>>choix;
    }while (choix != 1 && choix != 2 && choix != 3 && choix != 4);
    return(choix);


}
//-------------------------------------------------
// Programme principal
//-------------------------------------------------

main()
{
    int choix;
    garage G;
    do
    {
        choix = menu();
        if (choix == 1)
            {
                G.ajouter();

            }
            else
                if (choix == 2)
                {
                    G.supprimer();
                }
            else
                if (choix == 3)
                {
                    G.afficher();
                }

    }while(choix != 4);

}
