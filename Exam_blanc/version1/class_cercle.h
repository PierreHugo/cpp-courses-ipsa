#include<cmath>
#include<iostream>
#define PI 3.14

using namespace std;
//-------------------------------------------------
class cercle : public forme
//-------------------------------------------------
{
public:
    cercle(double);
    void afficher();
    double perimetre();
    double aire();
    int type();
};
//-------------------------------------------------
cercle :: cercle(double a=0):forme(a){}
//-------------------------------------------------

double cercle :: perimetre(){return(m_cote*2*PI);}

double cercle :: aire(){return(PI*pow(m_cote,2));}

int cercle :: type(){return(1);}

void cercle :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    forme :: afficher();
    cout<<"     C'est un cercle"<<endl;
    cout<<"     Rayon = "<<m_cote<<endl;
    cout<<"     Perimetre = "<<perimetre()<<endl;
    cout<<"     Aire = "<<aire()<<endl;
    cout<<"     Type = "<<type()<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------
