#include<iostream>
using namespace std;

//------------
// Classe Note
//------------
class note{
private:
    //----attributs----
    string matiere;
    double n;
    int coef;

    //----methodes----
public:
    note(string,double,int); // constructeur à 3 paramètres
    note(const note &); // constructeur par recopie

    void set_matiere(); //setter matiere
    void set_n(); //setter note
    void set_coef(); //setter coef

    string get_matiere(); //getter matiere
    double get_n(); //getter note
    int get_coef(); //getter coef

    friend ostream& operator<<(ostream&, const note &);    //surcharge de l'operateur <<
    friend istream& operator>>(istream&, note &);      //surcharge de l'operateur >>
};


//------------
// Definitions
//------------
    note::note(string a="None", double b=0, int c=0) {matiere=a; n=b; coef=c;}

    note::note(const note & no) {matiere=no.matiere; n=no.n; coef=no.coef;}


void note::set_matiere() {
    cout<<"\nMatiere : ";
    cin>>matiere;
}

void note::set_n() {
    do{
        cout<<"\nNote : ";
        cin>>n;
    }while(n<0 || n>20);
}

void note::set_coef() {
    do{
        cout<<"\nCoef : ";
        cin>>coef;
    }while(coef<=0 || coef>=5);
}


string note::get_matiere() {return(matiere);}

double note::get_n() {return(n);}

int note::get_coef() {return(coef);}


ostream& operator<<(ostream& os, const note & no)
{
    os <<"\nMatiere : "<<no.matiere<<"\nNote : "<<no.n<<"/20\nCoef : "<<no.coef<<endl;
    return(os);
}

istream& operator>>(istream& is, note& no)
{
    cout<<"\nMatiere : ";
    is>>no.matiere;

    do{
        cout<<"Note : ";
        is>>no.n;
    }while(no.n<0 || no.n>20);

    do{
        cout<<"Coef : ";
        cin>>no.coef;
    }while(no.coef<=0 || no.coef>=5);

    return(is);
}
