#include<iostream>

using namespace std;
//-------------------------------------------------
class meuble
//-------------------------------------------------
{
public:
    meuble();
    virtual void afficher();
};

meuble :: meuble()
{

}

void  meuble :: afficher()
{
    cout<<"     C'est un meuble"<<endl;
    cout<<"========================"<<endl;
}
//-------------------------------------------------


