#include<iostream>

using namespace std;
//-------------------------------------------------
class table : public meuble
//-------------------------------------------------
{
protected:
    double type;


public:
    table();
    void afficher();
    double get_type();

};
//-------------------------------------------------
table :: table()
{
    do{
        cout<<"Donnez votre taille de table :"<<endl;
        cout<<"========================"<<endl;
        cout<<"1 - Moyenne"<<endl;
        cout<<"2 - Haute"<<endl;
        cout<<"3 - Basse"<<endl;
        cout<<"========================"<<endl;
        cout<<"Choix : ";
        cin>>type;
    }while (type != 1 && type != 2 && type != 3);

}
//-------------------------------------------------

double table :: get_type()
{
    return(type);
}



void table :: afficher()
{
    cout<<"\n\n\n========================"<<endl;
    meuble :: afficher();


}
//-------------------------------------------------


