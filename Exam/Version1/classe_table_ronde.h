#include<iostream>
#include "classe_table_rectangle.h";

using namespace std;
//-------------------------------------------------
class table_ronde : public table
//-------------------------------------------------
{
protected:
    double prix;

public:
    table_ronde();
    void afficher();
    double get_prix();
};
//-------------------------------------------------
table_ronde :: table_ronde()
{
    if (type == 1)
    {
        prix = 210;
    }
    else if (type == 2)
    {
        prix = 240;
    }
    else
    {
        prix = 180;
    }
}
//-------------------------------------------------

double table_ronde :: get_prix()
{
    return(prix);
}

void table_ronde :: afficher()
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
    cout<<"     Modele : Ronde"<<endl;
    cout<<"     Prix : "<<get_prix()<<" euros"<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------




