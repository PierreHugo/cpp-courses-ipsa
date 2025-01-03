#include<iostream>
#include<vector>
#include"class_forme.h"
#include"class_cercle.h"
#include"class_carre.h"
#include"class_rectangle.h"
using namespace std;

//----------------------------------------------------------------------------------
// Classe mes_formes
//----------------------------------------------------------------------------------
class mes_formes {
public:
    //----attributs----
    vector <Forme*> m_forme;

    //----methodes----
public:
    mes_formes();
    ajouter();
    void supprimer();
    virtual void afficher();
    virtual ~mes_formes();
};


//----------------------------------------------------------------------------------
// definitions des methodes
//----------------------------------------------------------------------------------
mes_formes::mes_formes(){}
mes_formes::~mes_formes(){
    for(int i=0; i<m_forme.size(); ++i)
        {
        delete m_forme[i];  //On libère la i-ème case mémoire allouée
        m_forme[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
        }
}

//----------------------
void mes_formes::afficher(){
    system("cls");
    for(int i=0; i<m_forme.size(); i++){
        m_forme[i]->afficher();
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
    }
    system("pause");
}

//----------------------
mes_formes::ajouter() {
    int nb;
    system("cls");
    do{
        cout<<"Combien de forme(s) ? Votre choix : ";
        cin>>nb;
    }while(nb<=0);

    for(int i; i<nb; i++){
        int choix;
        system("cls");
        do{
            cout<<"1:Cercle, 2:Carre, 3:Rectangle\nVotre choix : ";
            cin>>choix;
        }while(choix!=1 && choix!=2 && choix!=3);
    if(choix==1){
        m_forme.push_back(new Cercle());
    }
    if(choix==2){
        m_forme.push_back(new Carre());
    }
    if(choix==3){
        m_forme.push_back(new Rectangle());
    }
    }
}

//----------------------
void mes_formes::supprimer(){
    int num;
    cout<<"Numero de la forme a supprimer : "<<endl;
    cin>>num;
    m_forme.erase(m_forme.begin()+num-1);
    cout<<"Forme bien supprimer"<<endl;
}
