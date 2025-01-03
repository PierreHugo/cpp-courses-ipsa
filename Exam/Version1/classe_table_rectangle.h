#include<iostream>
#include "classe_table.h";

using namespace std;
//-------------------------------------------------
class table_rectangle : public table
//-------------------------------------------------
{
protected:
    double prix;

public:
    table_rectangle();
    void afficher();
    double get_prix();
};
//-------------------------------------------------
table_rectangle :: table_rectangle()
{
    if (type == 1)
    {
        prix = 140;
    }
    else if (type == 2)
    {
        prix = 160;
    }
    else
    {
        prix = 120;
    }
}
//-------------------------------------------------

double table_rectangle :: get_prix()
{
    return(prix);
}

void table_rectangle :: afficher()
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
    cout<<"     Modele : Rectangulaire"<<endl;
    cout<<"     Prix : "<<get_prix()<<" euros"<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------



