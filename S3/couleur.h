class couleur
{
protected:
    string coul;
public:
    couleur(string);
    void afficher();
};

couleur :: couleur (string c = "no_color"):coul(c){}

void couleur :: afficher()
{
    cout<<"     Couleur : "<<coul<<endl;
}
