#include "class_point.h";

class point_3D : public point
{
protected:
    double z;
public:
    point_3D(double,double,double);
    void afficher();
    double la_distance(const point_3D &);
};

point_3D :: point_3D(double a, double b, double c):point(a,b),z(c){}

void point_3D :: afficher()
{
    point :: afficher();
    cout<<"     z = "<<z<< endl;
}

double point_3D :: la_distance(const point_3D &p)
{
    return(sqrt(pow(x-p.x,2)+pow(y-p.y,2)+pow(z-p.z,2)));
}
