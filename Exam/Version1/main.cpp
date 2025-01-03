#include<iostream>
#include "classe_meuble.h";
#include "classe_chaise.h";
#include "classe_table_rectangle_bureau.h";

using namespace std;

main()

{
    cout<<"========================"<<endl;
    table_rectangle_bureau m2;
    m2.afficher();

    m2.ajouter_tiroir(2);
    m2.afficher();

    m2.supprimer_tiroir(7);
    m2.afficher();

}

