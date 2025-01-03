#include<iostream>
#include<cmath>
using namespace std;
//-------------------------------------------------
class vehicule
//-------------------------------------------------

{
protected:
    int nb_roue;
    int vitesse;

public:
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
    moto(int,double,int);
    virtual void afficher();
};
//-------------------------------------------------
// Definition des methodes
//-------------------------------------------------

vehicule :: vehicule(int a,double b)
{
    nb_roue=a;
    vitesse=b;
}
//-------------------------------------------------

void  vehicule :: afficher()
{
    cout<<"========================"<<endl;
    cout<<"     C'est un vehicule"<<endl;
    cout<<"========================"<<endl;

    cout<<"     Nombre de roue(s) : "<<nb_roue<<" roue(s)"<< endl;
    cout<<"     Vitesse = "<<vitesse<<" km/h"<<endl;

}
//-------------------------------------------------

voiture :: voiture(int a,double b, int c):vehicule(a,b),nb_porte(c){}
//-------------------------------------------------

void voiture :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    cout<<"     C'est une voiture"<<endl;
    vehicule :: afficher();
    cout<<"     Nombre de porte(s) = "<<nb_porte<<" porte(s)"<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------

moto :: moto(int a,double b, int c):vehicule(a,b),coffre(c){}
//-------------------------------------------------

void moto :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    cout<<"     C'est une moto"<<endl;
    vehicule :: afficher();
    cout<<"     Nombre de coffre(s) = "<<coffre<<" coffre(s)"<<endl;
    cout<<"========================"<<endl;

}

void informations_vehicule( vehicule * v){
    v->afficher();
}
//-------------------------------------------------
// Programme principal
//-------------------------------------------------

main()
{
    vehicule v1(2,120);
    v1.afficher();

    voiture vo1(4,250,2);
    vo1.afficher();

    moto mo1(2,90,1);
    mo1.afficher();

    cout<<"-------------------- voici vos informations -------------------------\n\n"<<endl;

    informations_vehicule(&vo1) ;
    informations_vehicule(&mo1);


}
