#include "class_point.h";
#include "couleur.h";

class point_couleur : public point, public couleur
{
public:
    point_couleur(double,double,string);
    void afficher();
    double la_distance(const point_couleur &);
};

point_couleur :: point_couleur(double a, double b, string c):point(a,b),couleur(c){}

void point_couleur :: afficher()
{
    point :: afficher();
    couleur :: afficher();

}

double point_couleur :: la_distance(const point_couleur &p)
{
    return(point::la_distance(p));
}
