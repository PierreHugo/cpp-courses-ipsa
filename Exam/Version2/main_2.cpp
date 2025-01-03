#include<iostream>
#include "classe_meuble_2.h";
#include "classe_chaise_2.h";
#include "classe_table_rectangle_bureau_2.h";

using namespace std;

main()

{
    cout<<"========================"<<endl;
    meuble * M1 = new chaise;
    meuble * M2 = new table_rectangle;
    meuble * M3 = new table_ronde;
    meuble * M4 = new table_rectangle_bureau;

    M1->afficher();
    M2->afficher();
    M3->afficher();
    M4->afficher();

    delete(M1);
    delete(M2);
    delete(M3);
    delete(M4);

}


