#include<iostream>
#include<cmath>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Point
//----------------------------------------------------------------------------------

class point{
    //----attributs----
private:
    double x;
    double y;
    static int nb;


    //----methodes----
public:


    point(); // constructeur par defaut
    point(double); // constructeur à 1 paramètre
    point(double,double);  // constructeur à 2 paramètres
    point(const point &); // constructeur par recopie
    ~point (); // destructeur

    void afficher(string) ; // methode afficher
    point operator+(const point &); // surcharge de l'opérateur +
    point operator-(const point &); // surcharge de l'opérateur -
    void operator+=(const point &); // surcharge de l'opérateur +=
    void operator-=(const point &); // surcharge de l'opérateur -=

    bool operator==(const point &); //surcharge de l'opérateur ==
    bool operator!=(const point &); //surcharge de l'opérateur !=

    void set_x(double); // changer valeur de x
    void set_y(double); // changer valeur de y

    void set_xy(double,double); // changer valeurs de x et y

    double get_x(); // prendre la valeur de x
    double get_y(); // prendre la valeur de y

    friend double la_distance(const point &, const point &); // distance entre 2 points

    static void afficher_nb();

    friend ostream& operator<<(ostream&,const point &);
    friend istream& operator>>(istream&,point &);

};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
      point :: point()
      {
          x=0;
          y=0;
          nb++;
          afficher_nb();
      }

      point :: point(double a)
      {
          x=a;
          y=0;
          nb++;
          afficher_nb();
      }

      point :: point(double a,double b)
      {
          x=a;
          y=b;
          nb++;
          afficher_nb();
      }

      point :: point(const point & p)
      {
          x=p.x;
          y=p.y;
          nb++;
          afficher_nb();
      }

      point :: ~point()
      {
          cout<<"Appel du destructeur !"<<endl;
          nb--;
          afficher_nb();
      }

//----------------------------------------------------------------------------------
void  point :: afficher(string s )
{
    cout <<"[======== Le point " << s <<" ========]"<<endl;
    cout<<"  x = "<<x<< endl;
    cout<<"  y = "<<y<< endl;
}

point point :: operator+(const point & other)
{
    point R;
    R.x = x + other.x;
    R.y = y + other.y;
    return(R);
}

point point :: operator-(const point & other)
{
    point R;
    R.x = x - other.x;
    R.y = y - other.y;
    return(R);
}

void point :: operator+=(const point & other)
{
    x += other.x;
    y += other.y;
}

void point :: operator-=(const point & other)
{
    x -= other.x;
    y -= other.y;
}

bool point :: operator==(const point & other)
{
    if (x == other.x && y == other.y)
    {
        return (true);
    }
    else
    {
        return (false);
    }

}

bool point :: operator!=(const point & other)
{
    if (x != other.x || y != other.y)
    {
        return (true);
    }
    else
    {
        return (false);
    }

}

void point :: set_x(double d)
{
    x=d;
}

void point :: set_y(double d)
{
    y=d;
}

void point :: set_xy(double d1, double d2)
{
    x=d1;
    y=d2;
}

double point :: get_x()
{
    return(x);
}

double point :: get_y()
{
    return(y);
}

double la_distance(const point & ici, const point & la)
{
    return(sqrt(pow(ici.x-la.x,2)+pow(ici.y-la.y,2)));
}

void point :: afficher_nb()
{
    cout<<"Nombre d'elements dans la page : "<<point::nb<<endl;
}

ostream& operator<<(ostream& os, const point & p)
{
    os<<endl<<"x = "<<p.x<<endl<<"y = "<<p.y<<endl;
}

istream& operator>>(istream& is,point & p)
{
    cout<<"donner x : "<<endl;
    is>>p.x;
    cout<<"donner y : "<<endl;
    is>>p.y;
    return(is);
}

//----------------------------------------------------------------------------------
int point::nb = 0;

main()
{

    point p1;
    p1.afficher("p1");

    point p2(2);
    p2.afficher("p2");

    point p3(3,5);
    p3.afficher("p3");

    point p4(p3);
    p4.afficher("p4");

    point p5;
    p5=p2+p3;
    p5.afficher("p5");

    point p6;
    p6=p5-p3;
    p6.afficher("p6");

    point p7;
    p7+=p5;
    p7.afficher("p7");

    point p8;
    p8-=p5;
    p8.afficher("p8");

    if (p7==p8)
    {
        cout<<"Oui, p7 et p8 sont egaux."<<endl;
    }
    else
    {
        cout<<"Non, p7 et p8 ne sont pas egaux."<<endl;
    }

    if (p7!=p8)
    {
        cout<<"Oui, p7 et p8 sont differents."<<endl;
    }
    else
    {
        cout<<"Non, p7 et p8 ne sont pas differents."<<endl;
    }

    point p11;
    p11.set_x(13);
    p11.afficher("p11");

    point p12;
    p12.set_y(-5);
    p12.afficher("p12");

    cout<<"p12.x = "<<p12.get_x()<<endl;
    cout<<"p12.y = "<<p12.get_y()<<endl;

    p1.set_xy(3,4);

    p2.set_xy(4,5);


    double d = la_distance(p1,p2);
    cout<<"La distance entre p1 et p2 : "<<d<<endl;

    cout<<"p6 : "<<p6;

    point p15;
    cout<<"donnez p15 : "<<endl;
    cin>>p15;
    cout<<"p15 = "<<p15<<endl;



}
