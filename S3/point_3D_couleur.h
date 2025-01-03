#include "class_point_3D.h";
#include "couleur.h";

class point_3D_couleur : public point_3D, public couleur
{
public:
    point_3D_couleur(double,double,double,string);
    void afficher();
    double la_distance(const point_3D_couleur &);
};

point_3D_couleur :: point_3D_couleur(double a, double b, double c, string d):point_3D(a,b,c),couleur(d){}

void point_3D_couleur :: afficher()
{
    point_3D :: afficher();
    couleur :: afficher();

}

double point_3D_couleur :: la_distance(const point_3D_couleur &p)
{
    return(point_3D::la_distance(p));
}
