#include<iostream>
#include "classe_table_ronde_3.h";

using namespace std;

//-------------------------------------------------
class table_rectangle_bureau : public table_rectangle
//-------------------------------------------------
{
protected:
    int nb_tiroir=1;
public:
    table_rectangle_bureau();
    virtual void afficher();
    double get_nb_tiroir();
    double get_prix_tiroir();
    double get_prix_total();
    void ajouter_tiroir(int);
    void supprimer_tiroir(int);
};
//-------------------------------------------------
table_rectangle_bureau :: table_rectangle_bureau()
{
    do{
        cout<<"Donnez votre nombre de tiroir :"<<endl;
        cout<<"========================"<<endl;
        cout<<"Choix : ";
        cin>>nb_tiroir;
    }while (nb_tiroir != 1 && nb_tiroir != 2 && nb_tiroir != 3 && nb_tiroir != 4 && nb_tiroir != 5 && nb_tiroir != 6);

}
//-------------------------------------------------
double table_rectangle_bureau :: get_nb_tiroir()
{
    return(nb_tiroir);
}

double table_rectangle_bureau :: get_prix_total()
{
    return(prix + 15*nb_tiroir);
}

double table_rectangle_bureau :: get_prix_tiroir()
{
    return(15*nb_tiroir);
}

void table_rectangle_bureau :: ajouter_tiroir(int a)
{
    int b;
    if (nb_tiroir + a < 1 || nb_tiroir + a > 6)
    {
        cout<<"\n\n\n========================"<<endl;
        cout<<"     Erreur dans l'ajout des tiroirs"<<endl;
        cout<<"\n\n\n========================"<<endl;
    }
    else
    {
        b=a;
        nb_tiroir+=b;
    }

}

void table_rectangle_bureau :: supprimer_tiroir(int a)
{
    int b;
    if (nb_tiroir - a < 1 || nb_tiroir - a > 6)
    {
        cout<<"\n\n\n========================"<<endl;
        cout<<"     Erreur dans la suppression des tiroirs"<<endl;
        cout<<"\n\n\n========================"<<endl;
    }
    else
    {
        b=a;
        nb_tiroir-=b;
    }

}

void table_rectangle_bureau :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    table :: afficher();
    cout<<"     C'est une table"<<endl;
    if (type == 1)
    {
        cout<<"     Type : Table moyenne"<<endl;
    }
    else if (type == 2)
    {
        cout<<"     Type : Table haute"<<endl;
    }
    else
    {
        cout<<"     Type : Table basse"<<endl;
    }
    cout<<"     Modele : Rectangulaire special Bureau"<<endl;
    cout<<"     Tiroirs : "<<get_nb_tiroir()<<endl;
    cout<<"     Prix table: "<<prix<<" euros"<<endl;
    cout<<"     Prix tiroirs: "<<get_prix_tiroir()<<" euros"<<endl;
    cout<<"========================"<<endl;
    cout<<"     Prix total: "<<get_prix_total()<<" euros"<<endl;

}
//-------------------------------------------------



