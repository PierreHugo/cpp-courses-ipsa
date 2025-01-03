#include<cmath>
#include<iostream>
using namespace std;
//-------------------------------------------------
class forme
//-------------------------------------------------
{
protected :
    double m_cote;

public:
    forme(double);
    void afficher();
};

forme :: forme(double a=0):m_cote(a){}

void  forme :: afficher()
{
    cout<<"     C'est une forme"<<endl;
    cout<<"========================"<<endl;
}
//-------------------------------------------------
