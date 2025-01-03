#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//-------------
// Fonction tri
//-------------
bool tri(int* a, int* b) {
    return (*a < *b);
}

//--------------
// Classe Classe
//--------------

class classe {
private:
    //----attributs----
    vector <etudiant*> liste_etud;
    double moy_classe;
    static int nb_etud;

    //----methodes----
public:
    classe();
    void ajouter();
    void supprimer();
    void afficher();
    ~classe();
    void calcul_moyenne_classe();
    static void afficher_nb_etud() {cout<<"Il y a "<<nb_etud<<" etudiant(s)"<<endl;};
    void tri_etud();
};

//-------------------------------
// initialisation variable static
//-------------------------------
int classe::nb_etud = 0;

//-------------------------
// Definitions des methodes
//-------------------------
classe::classe(){moy_classe=0;}
classe::~classe(){
    for(int i=0; i<liste_etud.size(); ++i) {
        nb_etud--;
        delete liste_etud[i];
        liste_etud[i] = 0;
    }
}

//----------------------
void classe::afficher(){
    system("cls");
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    afficher_nb_etud();
    cout<<"Moyenne generale : "<<moy_classe<<"/20";
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
    int ra=liste_etud.size();
    for(int i=0; i<liste_etud.size(); i++){
        cout<<"Rang : "<<ra<<"/"<<liste_etud.size();
        cout<<*liste_etud[i];
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
        ra--;
    }
    system("pause");
}


void classe::ajouter() {
    int nb;
    system("cls");
    do{
        cout<<"Combien d'etudiant ? Votre choix : ";
        cin>>nb;
    }while(nb<=0);
    system("pause");
    for(int i=0; i<nb; i++){
        system("cls");
        nb_etud++;
        etudiant e;
        cin>>e;
        liste_etud.push_back(new etudiant(e));
        liste_etud[i]->calcul_moyenne();
    }
}


void classe::supprimer(){
    int num;
    cout<<"Num etudiant a supprimer : "<<endl;
    cin>>num;
    liste_etud.erase(liste_etud.begin()+num-1);
    cout<<"Etudiant bien supprimé"<<endl;
}


void classe::calcul_moyenne_classe(){
    double s;
    for(int i=0; i<liste_etud.size(); i++){
        s += liste_etud[i]->get_moyenne();
    }
moy_classe = s/liste_etud.size();
}

void classe::tri_etud(){
    sort(liste_etud.begin(), liste_etud.end(), [](etudiant* a, etudiant* b) {return a->get_moyenne() < b->get_moyenne();});
}

