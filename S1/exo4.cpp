#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Point
//----------------------------------------------------------------------------------

class point{
    //----attributs----
private:
    double x;
    double y;

    //----methodes----
public:
    point() ; // constructeur par defaut
    void afficher(string) ; // methode afficher
};
//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
      point :: point(){x=0;y=0;}
//----------------------------------------------------------------------------------
void  point :: afficher(string s ){cout <<"-------le point " << s <<"-------"<<endl;
                                   cout<<"x = "<<x<< endl;
                                   cout<<"y = "<<y<< endl;}
//----------------------------------------------------------------------------------

main()
{
    point p1; // p1 est un objet de la classe point
    p1.afficher("p1");
    //p1.x=6;
    //p1.afficher("p1");
}
