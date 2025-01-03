#include<iostream>
#include "class_forme.h";
#include "class_cercle.h";
#include "class_carre.h";
#include "class_rectangle.h";

using namespace std;

main()

{
    cout<<"========================"<<endl;
    forme f1(2);
    f1.afficher();

    cercle f2(17);
    f2.afficher();

    carre f3(18);
    f3.afficher();

    rectangle f4(19,20);
    f4.afficher();
}
