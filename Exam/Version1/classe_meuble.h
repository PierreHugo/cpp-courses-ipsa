#include<iostream>

using namespace std;
//-------------------------------------------------
class meuble
//-------------------------------------------------
{
public:
    meuble();
    void afficher();
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

