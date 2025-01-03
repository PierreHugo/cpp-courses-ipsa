#include<cmath>
#include<iostream>

using namespace std;

//-------------------------------------------------
class carre : public forme
//-------------------------------------------------
{
public:
    carre(double);
    void afficher();
    double perimetre();
    double aire();
    int type();
};
//-------------------------------------------------
carre :: carre(double a=0):forme(a){}
//-------------------------------------------------

double carre :: perimetre(){return(m_cote*4);}

double carre :: aire(){return(pow(m_cote,2));}

int carre :: type(){return(2);}

void carre :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    forme :: afficher();
    cout<<"     C'est un carre"<<endl;
    cout<<"     Cote = "<<m_cote<<endl;
    cout<<"     Perimetre = "<<perimetre()<<endl;
    cout<<"     Aire = "<<aire()<<endl;
    cout<<"     Type = "<<type()<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------
