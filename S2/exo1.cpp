#include "biblio1.h";

main()
{
    /// constructeur à 0 paramètre
    complexe c1;
    c1.afficher();

    /// setter de la partie reelle
    c1.set_x(13);
    c1.afficher();

    /// setter de la partie imaginaire
    c1.set_y(-5);
    c1.afficher();

    /// getter
    cout<<"Partie reelle de c1 : "<<c1.get_x()<<endl;
    cout<<"Partie imaginaire de c1 : "<<c1.get_y()<<endl;
    cout<<"======================================================"<<endl;

    /// constructeur à 1 paramètre
    complexe c2(6);
    c2.afficher();

    /// constructeur à 2 paramètres
    complexe c3(-2,-2);
    c3.afficher();

    /// constructeur par recopie
    complexe c4(c3);
    c4.afficher();

    /// surcharge de l'opérateur +
    complexe c5(c2+c3);
    c5.afficher();

    /// surcharge de l'opérateur -
    complexe c6(c3-c2);
    c6.afficher();

    /// surcharge de l'opérateur *
    complexe c7(c3*c5);
    c7.afficher();

    /// surcharge de l'opérateur /
    complexe c8(c7/c5);
    c8.afficher();

    /// surcharge de l'opérateur +=
    complexe c9(-6,5);
    c9+=c3;
    c9.afficher();

    /// surcharge de l'opérateur -=
    complexe c10(10,10);
    c10-=c3;
    c10.afficher();

    /// surcharge de l'opérateur *=
    complexe c11(2,4);
    c11*=c3;
    c11.afficher();

    /// surcharge de l'opérateur +=
    complexe c12(36,-36);
    c12/=c10;
    c12.afficher();

    /// surcharge de l'opérateur ==
    complexe c13;
    complexe c14;
    cout<<"======================================================"<<endl;
    if (c13==c14)
    {
        cout<<"Oui, c13 et c14 sont egaux."<<endl;
    }
    else
    {
        cout<<"Non, c13 et c14 ne sont pas egaux."<<endl;
    }
    cout<<"======================================================"<<endl;
    complexe c15(1);
    if (c13==c15)
    {
        cout<<"Oui, c13 et c15 sont egaux."<<endl;
    }
    else
    {
        cout<<"Non, c13 et c15 ne sont pas egaux."<<endl;
    }
    cout<<"======================================================"<<endl;

    /// surcharge de l'opérateur !=
    cout<<"======================================================"<<endl;
    if (c13!=c14)
    {
        cout<<"Oui, c13 et c14 sont differents."<<endl;
    }
    else
    {
        cout<<"Non, c13 et c14 ne sont pas differents."<<endl;
    }
    cout<<"======================================================"<<endl;
    if (c13!=c15)
    {
        cout<<"Oui, c13 et c15 sont differents."<<endl;
    }
    else
    {
        cout<<"Non, c13 et c15 ne sont pas differents."<<endl;
    }
    cout<<"======================================================"<<endl;

    /// surcharge de l'opérateur + avec un double
    complexe c16(2,2);
    complexe c17(c16+5);
    c17.afficher();

    /// surcharge de l'opérateur - avec un double
    complexe c18(c16-4);
    c18.afficher();

    /// surcharge de l'opérateur * avec un double
    complexe c19(c16*3);
    c19.afficher();

    /// surcharge de l'opérateur / avec un double
    complexe c20(c16/2);
    c20.afficher();

    /// surcharge de l'opérateur += avec un double
    complexe c21(4,4);
    c21+=4;
    c21.afficher();

    /// surcharge de l'opérateur -= avec un double
    c21-=6;
    c21.afficher();

    /// surcharge de l'opérateur *= avec un double
    c21*=3;
    c21.afficher();

    /// surcharge de l'opérateur /= avec un double
    c21/=2;
    c21.afficher();


    /// ostream et istream
    complexe c22;
    cout<<"======================================================"<<endl;
    cout<<"Creation de c22"<<endl;
    cin>>c22;
    cout<<"Voici c22 : "<<c22<<endl;
    cout<<"======================================================"<<endl;


    /// distance
    complexe c23(1,2);
    complexe c24(2,3);
    double d1 = distance(c23,c24);
    cout<<"La distance entre c23 et c24 est "<<d1<<endl;
    cout<<"======================================================"<<endl;

    /// module
    complexe c25(3,4);
    double d2 = c25.module();
    cout<<"Le module de c25 est "<<d2<<endl;
    cout<<"======================================================"<<endl;

    /// argument
    double d3 = c25.argument();
    cout<<"L'argument de c25 est "<<d3<<endl;
    cout<<"======================================================"<<endl;

    /// conjugue
    complexe c26(3,-2);
    complexe c27;
    c27 = c26.conjugues();
    c27.afficher();

}
