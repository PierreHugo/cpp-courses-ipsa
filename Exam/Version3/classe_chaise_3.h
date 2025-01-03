#include<iostream>

using namespace std;
//-------------------------------------------------
class chaise : public meuble
//-------------------------------------------------
{
protected:
    double type;
    double prix;

public:
    chaise();
    virtual void afficher();
    double get_type();
    double get_prix();
};
//-------------------------------------------------
chaise :: chaise()
{
    do{
        cout<<"Donnez votre modele de chaise :"<<endl;
        cout<<"========================"<<endl;
        cout<<"1 - Fixe"<<endl;
        cout<<"2 - Pliante"<<endl;
        cout<<"3 - Bureau"<<endl;
        cout<<"========================"<<endl;
        cout<<"Choix : ";
        cin>>type;
    }while (type != 1 && type != 2 && type != 3);

    if (type == 1)
    {
        prix = 20;
    }
    else if (type == 2)
    {
        prix = 30;
    }
    else
    {
        prix = 80;
    }
}
//-------------------------------------------------

double chaise :: get_type()
{
    return(type);
}

double chaise :: get_prix()
{
    return(prix);
}

void chaise :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    meuble :: afficher();
    cout<<"     C'est une chaise"<<endl;
    if (type == 1)
    {
        cout<<"     Type : Chaise fixe"<<endl;
    }
    else if (type == 2)
    {
        cout<<"     Type : Chaise pliante"<<endl;
    }
    else
    {
        cout<<"     Type : Chaise de bureau"<<endl;
    }
    cout<<"     Prix : "<<prix<<" euros"<<endl;
    cout<<"========================"<<endl;


}
//-------------------------------------------------



