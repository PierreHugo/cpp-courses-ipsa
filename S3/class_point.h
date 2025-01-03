#include<iostream>
#include<cmath>
using namespace std;

class point
{
protected:
    double x;
    double y;
public:
    point(double,double);
    void afficher();
    double la_distance(const point &);
};

point :: point(double a,double b)
{
    x=a;
    y=b;
}

void  point :: afficher()
{
    cout<<"[======== Le point ========]"<<endl;
    cout<<"     x = "<<x<< endl;
    cout<<"     y = "<<y<< endl;
}

double point :: la_distance(const point &p)
{
    return(sqrt(pow(x-p.x,2)+pow(y-p.y,2)));
}
