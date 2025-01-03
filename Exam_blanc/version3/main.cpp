#include<iostream>
#include"class_mes_formes.h"

//----------------------------------------------------------------------------------
// Programme principal
//----------------------------------------------------------------------------------
main()
{
    mes_formes f;
    int choix;
    do{
        do{
            system("cls");
            cout<<"------------------------------"<<endl;
            cout<<" Menu Formes"<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"1- Ajouter"<<endl;
            cout<<"2- Afficher"<<endl;
            cout<<"3- Supprimer"<<endl;
            cout<<"4- Sortir"<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"Choix : "<<endl;
            cin>>choix;
        }while(choix<1 || choix>4);

    if(choix==1) {
        system("cls");
        f.ajouter();
    }

    if(choix==2) {
        system("cls");
        f.afficher();
        system("pause");
    }

    if(choix==3) {
        system("cls");
        f.supprimer();
    }

    }while(choix!=4);
    return(0);
}
