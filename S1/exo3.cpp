#include <iostream>

using namespace std;

class point
{
public:
    // attributs
    double x;
    double y;

    // m�thodes
    point(){x=0;y=0;}; //constructeur par d�faut

    void afficher(){cout<<"x = "<<x<<endl;
                    cout<<"y = "<<y<<endl;};
};

main()
{
    point p1; // p1 est un objet de type point
    p1.afficher();
}
