
#include "point_3D_couleur.h";

using namespace std;

main()
{
    /*point p1(1,2);
    p1.afficher();

    point p2(2,3);
    p2.afficher();

    double d1 = p1.la_distance(p2);
    cout<<"La distance entre p1 et p2 : "<<d1<<endl;

    point_3D p3(1,2,3);
    p3.afficher();

    point_3D p4(1,3,4);
    p4.afficher();

    double d2 = p3.la_distance(p4);
    cout<<"La distance entre p3 et p4 : "<<d2<<endl;

    couleur c1;
    couleur c2("Rouge");
    c1.afficher();
    c2.afficher();*/

    /*point_couleur c3(1,2,"bleu");
    point_couleur c4(2,3,"jaune");

    c3.afficher();
    c4.afficher();

    double d3 = c3.la_distance(c4);
    cout<<"La distance entre c3 et c4 : "<<d3<<endl;*/

    point_3D_couleur c5(1,2,3,"vert");
    point_3D_couleur c6(1,3,4,"rouge");

    c5.afficher();
    c6.afficher();

    double d4 = c5.la_distance(c6);
    cout<<"La distance entre c5 et c6 : "<<d4<<endl;

}
