#include <iostream>

using namespace std;

main()
{
    int x=2;
    int &y=x; // y est une r�f�rence de x

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    x++;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    y++;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
