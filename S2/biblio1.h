#include<iostream>
#include<cmath>
using namespace std;

//----------------------------------------------------------------------------------
// Classe Complexe
//----------------------------------------------------------------------------------

class complexe{
    //----attributs----
private:
    double x;
    double y;
    static int nb;


    //----methodes----
public:
    complexe(); // constructeur par defaut
    complexe(double); // constructeur à 1 paramètre
    complexe(double,double);  // constructeur à 2 paramètres
    complexe(const complexe &); // constructeur par recopie
    ~complexe (); // destructeur

    void set_x(double); // changer valeur de x
    void set_y(double); // changer valeur de y
    double get_x(); // prendre la valeur de x
    double get_y(); // prendre la valeur de y


    complexe operator+(const complexe &); // surcharge de l'opérateur +
    complexe operator-(const complexe &); // surcharge de l'opérateur -
    complexe operator*(const complexe &); // surcharge de l'opérateur *
    complexe operator/(const complexe &); // surcharge de l'opérateur /

    void operator+=(const complexe &); // surcharge de l'opérateur +=
    void operator-=(const complexe &); // surcharge de l'opérateur -=
    void operator*=(const complexe &); // surcharge de l'opérateur *=
    void operator/=(const complexe &); // surcharge de l'opérateur /=

    bool operator==(const complexe &); //surcharge de l'opérateur ==
    bool operator!=(const complexe &); //surcharge de l'opérateur !=

    complexe operator+(double); // surcharge de l'opérateur + avec un double
    complexe operator-(double); // surcharge de l'opérateur - avec un double
    complexe operator*(double); // surcharge de l'opérateur * avec un double
    complexe operator/(double); // surcharge de l'opérateur / avec un double

    void operator+=(double); // surcharge de l'opérateur += avec un double
    void operator-=(double); // surcharge de l'opérateur -= avec un double
    void operator*=(double); // surcharge de l'opérateur *= avec un double
    void operator/=(double); // surcharge de l'opérateur /= avec un double

    friend ostream& operator<<(ostream&,const complexe &);
    friend istream& operator>>(istream&,complexe &);

    void afficher();
    friend double distance(const complexe&, const complexe &);
    complexe conjugues();
    double module();
    double argument();

    static void afficher_nb();
};

//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
      complexe :: complexe()
      {
          x=0;
          y=0;
          nb++;
          afficher_nb();
      }

      complexe :: complexe(double a)
      {
          x=a;
          y=0;
          nb++;
          afficher_nb();
      }

      complexe :: complexe(double a,double b)
      {
          x=a;
          y=b;
          nb++;
          afficher_nb();
      }

      complexe :: complexe(const complexe & p)
      {
          x=p.x;
          y=p.y;
          nb++;
          afficher_nb();
      }

      complexe :: ~complexe()
      {
          cout<<"Appel du destructeur !"<<endl;
          nb--;
          afficher_nb();
      }

//----------------------------------------------------------------------------------

void complexe :: set_x(double d)
{
    x=d;
}

void complexe :: set_y(double d)
{
    y=d;
}
double complexe :: get_x()
{
    return(x);
}

double complexe :: get_y()
{
    return(y);
}

void complexe :: afficher()
{
    cout<<"======================================================"<<endl;
    cout<<"  NOMBRE COMPLEXE : "<<x<<" + ("<<y<<"i)"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Partie reelle : "<<x<<endl;
    cout<<"  Partie imaginaire : "<<y<<endl;
    cout<<"======================================================"<<endl;
}

complexe complexe :: operator+(const complexe & other)
{
    complexe R;
    R.x = x + other.x;
    R.y = y + other.y;
    return(R);
}

complexe complexe :: operator-(const complexe & other)
{
    complexe R;
    R.x = x - other.x;
    R.y = y - other.y;
    return(R);
}

complexe complexe :: operator*(const complexe & other)
{
    complexe R;
    R.x = x * other.x;
    R.y = y * other.y;
    return(R);
}

complexe complexe :: operator/(const complexe & other)
{
    complexe R;
    R.x = x / other.x;
    R.y = y / other.y;
    return(R);
}

void complexe :: operator+=(const complexe & other)
{
    x += other.x;
    y += other.y;
}

void complexe :: operator-=(const complexe & other)
{
    x -= other.x;
    y -= other.y;
}

void complexe :: operator*=(const complexe & other)
{
    x *= other.x;
    y *= other.y;
}

void complexe :: operator/=(const complexe & other)
{
    x /= other.x;
    y /= other.y;
}

bool complexe :: operator==(const complexe & other)
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

bool complexe :: operator!=(const complexe & other)
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

complexe complexe :: operator+(double d)
{
    complexe R;
    R.x = x + d;
    R.y = y;
    return(R);
}

complexe complexe :: operator-(double d)
{
    complexe R;
    R.x = x - d;
    R.y = y;
    return(R);
}

complexe complexe :: operator*(double d)
{
    complexe R;
    R.x = x * d;
    R.y = y * d;
    return(R);
}

complexe complexe :: operator/(double d)
{
    complexe R;
    R.x = x / d;
    R.y = y / d;
    return(R);
}

void complexe :: operator+=(double d)
{
    x += d;
    y += 0;
}

void complexe :: operator-=(double d)
{
    x -= d;
    y += 0;
}

void complexe :: operator*=(double d)
{
    x *= d;
    y *= d;
}

void complexe :: operator/=(double d)
{
    x /= d;
    y /= d;
}

ostream& operator<<(ostream& os, const complexe & c)
{
    os<<endl<<"Partie reelle : "<<c.x<<endl<<"Partie imaginaire = "<<c.y<<endl;
}

istream& operator>>(istream& is,complexe & c)
{
    cout<<"Donner la partie reelle : "<<endl;
    is>>c.x;
    cout<<"Donner la partie imaginaire : "<<endl;
    is>>c.y;
    return(is);
}

double distance(const complexe & ici, const complexe & la)
{
    return(sqrt(pow(ici.x-la.x,2)+pow(ici.y-la.y,2)));
}

complexe complexe :: conjugues()
{
    complexe R;
    R.x = x;
    R.y = -y;
    return(R);
}

double complexe :: module()
{
    return(sqrt(pow(x,2)+pow(y,2)));
}

double complexe :: argument()
{
    return(atan(y/x));
}

int complexe::nb = 0;

void complexe :: afficher_nb()
{
    cout<<"Nombre d'elements dans la page : "<<complexe::nb<<endl;
}
