#include "client.h";

using namespace std;

int main()
{
    client c;
    int choix;

    do{
        do{
            system("cls");
            cout<<"===================================================================="<<endl;
            cout<<" Menu meubles "<<endl;
            cout<<"===================================================================="<<endl;
            cout<<" 1 - Ajouter "<<endl;
            cout<<" 2 - Afficher "<<endl;
            cout<<" 3 - Supprimer "<<endl;
            cout<<" 4 - Sortir "<<endl;
            cout<<"===================================================================="<<endl;
            cout<<" Choix : "<<endl;
            cin>>choix;
        }while (choix < 1 || choix > 4);

        if (choix == 1)
        {
            system("cls");
            c.ajouter_meuble();
        }

        if (choix == 2)
        {
            system("cls");
            c.afficher();
            system("pause");
        }

        if (choix == 3)
        {
            system("cls");
            c.supprimer_meuble();
        }

        if (choix == 4)
        {
            system("cls");
            cout<<"===================================================================="<<endl;
            cout<<" Merci, a bientot !"<<endl;
            cout<<"===================================================================="<<endl;
        }
    }while (choix != 4);
    return(0);

}



