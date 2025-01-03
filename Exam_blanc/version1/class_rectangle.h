#include<cmath>
#include<iostream>

using namespace std;
//-------------------------------------------------
class rectangle : public carre
//-------------------------------------------------
{
protected:
    double longueur;

public:
    rectangle(double,double);
    void afficher();
    double perimetre();
    double aire();
    int type();
};
//-------------------------------------------------
rectangle :: rectangle(double a=0, double b=0):carre(a),longueur(b){}
//-------------------------------------------------

double rectangle :: perimetre(){return(m_cote*2 + longueur*2);}

double rectangle :: aire(){return(m_cote*longueur);}

int rectangle :: type(){return(3);}

void rectangle :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    forme :: afficher();
    cout<<"     C'est un rectangle"<<endl;
    cout<<"     Largeur = "<<m_cote<<endl;
    cout<<"     Longueur = "<<longueur<<endl;
    cout<<"     Perimetre = "<<perimetre()<<endl;
    cout<<"     Aire = "<<aire()<<endl;
    cout<<"     Type = "<<type()<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------
