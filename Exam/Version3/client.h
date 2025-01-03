#include<iostream>
#include<vector>
#include "classe_meuble_3.h";
#include "classe_chaise_3.h";
#include "classe_table_rectangle_bureau_3.h";
using namespace std;

//----------------------------------------------------------------------------------
// Classe Client
//----------------------------------------------------------------------------------
class client {
public:
    //----attributs----
    vector <meuble*> m_meubles;

    //----methodes----
public:
    client();
    void ajouter_meuble();
    void supprimer_meuble();
    virtual void afficher();
    virtual ~client();
    void nb_type_meuble(int);
    void nb_total_meuble(int);
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------

client::client(){}

client::~client(){
    for(int i=0; i<m_meubles.size(); ++i)
        {
        delete m_meubles[i];
        m_meubles[i] = 0;
        }
}

//----------------------
void client::afficher(){
    system("cls");

    for(int i=0; i<m_meubles.size(); i++){
        m_meubles[i]->afficher();
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
    }
    system("pause");
}

//----------------------
void client :: ajouter_meuble() {
    int nb;
    system("cls");
    do{
        cout<<"Combien de meuble(s) ? Votre choix : ";
        cin>>nb;
    }while(nb<=0);

    for(int i; i<nb; i++){
        int choix;
        system("cls");
        do{
            cout<<"1:Chaise, 2:Table Ronde, 3:Table Rectangle, 4:Bureau \nVotre choix : ";
            cin>>choix;
        }while(choix!=1 && choix!=2 && choix!=3 && choix!=4);
    if(choix==1){
        m_meubles.push_back(new chaise());
    }
    if(choix==2){
        m_meubles.push_back(new table_ronde());
    }
    if(choix==3){
        m_meubles.push_back(new table_rectangle());
    }
    if(choix==4){
        m_meubles.push_back(new table_rectangle_bureau());
    }
    }
}

//----------------------
void client::supprimer_meuble(){
    int num;
    cout<<"Numero du meuble a supprimer : "<<endl;
    cin>>num;
    m_meubles.erase(m_meubles.begin()+num-1);
    cout<<"Meuble supprime avec succes"<<endl;
}

void client :: nb_type_meuble(int a)
{
    /// pas eu le temps
}

void client :: nb_total_meuble(int a)
{
    /// pas eu le temps
}

