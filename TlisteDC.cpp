//============================================================================
// Name        : TListeDC.cpp
// Author      : psc
// Copyright   : psc2014
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include "ListeDC.h"

#define TYPE_INT
#define T int
//#define TYPE_FLOAT
//#define T double
//#define TYPE_STRING
//#define T string

/*
void TestSaisieListe()
{
       LDC<int> liste;

       cout << liste << endl;
	   cin >> liste ;
       cout <<liste << endl;
}
*/
/*
void TestDiversListe  ()
{
       LDC<int> liste;
       cout << "la liste " <<(liste.EstVide()?"EST" : "n'est pas") << "VIDE" << endl;
       liste.Inserer (1);
       cout << "la liste " <<(liste.EstVide()?"EST" : "n'est pas") << "VIDE" << endl;
       liste.Inserer (2);
       liste.Inserer (3);
       liste.Inserer (4);
       liste.Inserer (5);
       cout <<"toute la liste : "<< liste << endl;
       cout <<"info en debut de liste : "<< liste.TeteDeListe().Contenu()<< endl;
       cout <<"Est en fin de liste  : "<< (liste.EstEnFinDeListe()?"OUI":"NON")<< endl;
       cout <<"Est en deb de liste  : "<< (liste.EstEnDebutDeListe()?"OUI":"NON")<< endl;
       liste.Pred();
       liste.Suc();
       cout <<"info en fin de liste : "<< (liste.QueueDeListe().Contenu() )<< endl;
       cout <<"Est en fin de liste  : "<< (liste.EstEnFinDeListe()?"OUI":"NON")<< endl;
       cout <<"Est en deb de liste  : "<< (liste.EstEnDebutDeListe()?"OUI":"NON")<< endl;
       liste.Suc();
       liste.Pred();
       cout << "la valeur 1 est en position : "<<liste.Rang(1)<< endl;
       cout << "la valeur 5 est en position : "<<liste.Rang(5)<< endl;
       cout << "la valeur 2 est en position : "<<liste.Rang(2)<< endl;
       cout << "la valeur 0 est en position : "<<(liste.Rang(0)==0?"INEXISTANT":"EXITANT")<< endl;
       liste.TeteDeListe();

       cout<<"Test Contenu : a faire "<<endl;
       cout<<"Test Rang : a faire "<<endl;
       cout<<"Test Operateur comparaison  : a faire "<<endl;
       cout<<"Test Operateur affectation  : a faire "<<endl;
       cout<<"Test Operateur extraction flot entree  : a faire "<<endl;

}
*/
/*
void TestRetirerListe  ()
{
       LDC<int> liste;
       liste.Inserer (1);
       cout <<"avant : "<< liste << endl;
       liste.Acces(1);
       liste.Retirer  ();
       cout <<"apres : "<< liste << endl;

       LDC<int> liste2;
       liste2.Inserer (1);
       liste2.Inserer (2);
       cout <<"avant : "<< liste2 << endl;
       liste2.Acces  (1);
       liste2.Retirer  ();
       cout <<"avant : "<< liste2 << endl;

       LDC<int> liste4;
       liste4.Inserer (1);
       liste4.Inserer (2);
       liste4.Inserer (3);
       cout <<"avant : "<< liste4 << endl;
       liste4.Acces  (2);
       liste4.Retirer  ();
       cout <<"avant : "<< liste4 << endl;

       LDC<int> liste3;
       liste3.Inserer (1);
       liste3.Inserer (2);
       cout <<"avant : "<< liste3 << endl;
       liste3.Acces  (2);
       liste3.Retirer  ();
       cout <<"avant : "<< liste3 << endl;

       LDC<int> listevide ;
       cout <<"avant : "<< listevide << endl;
	   // retirer ci dessous impossible !
       //listevide.Retirer  ();
}
*/
/*
void TestInsererListe  ()
{

#ifdef TYPE_INT
	T   tab[10]=
		{0,1,2,3,4,5,6,7,8,9};
        T   nouveau=22;
        T   a_ins1=77;
        T   a_ins2=88;
        T   a_ins3=99;
        T*  p_a_ins=new T(99);
#endif
#ifdef TYPE_FLOAT
	T      tab[10]=
		{0.,1.1,2,3,4,5,6,7,8,9.9};
        T   nouveau=22.22;
        T   a_ins1=77.;
        T   a_ins2=88.;
        T   a_ins3=99.;
        T*  p_a_ins=new T(99.99);
#endif
#ifdef TYPE_STRING
	T   tab[10]=
		{"aaa","bbb","ccc","ddd"};
        T   nouveau="ttt";
        T   a_ins1="uuu";
        T   a_ins2="vvv";
        T   a_ins3="www";
        T*  p_a_ins=new T("xxx");
        T   pour_rempl="yyy";
#endif

	cout << endl <<"Test methode Inserer dans une liste non vide : " <<endl;
	LDC<T> liste1(a_ins1);

	liste1.Inserer(a_ins2)   ;
	liste1.Inserer(a_ins3)   ;
	cout << "apres insertion , l1 : "<< liste1 << endl;

// il faudrait aussi tester l insertion dans une liste VIDE
// (test tres revelateur de bugs en general ...! )

	cout << endl <<"Test methode Acces : " <<endl;
	cout<<"Tests insertion nouvel elt APRES courant dans liste 2 "<<endl;
	cout<<"APRES les positions 1, 5, courant, der :"<<endl;
	LDC<T> liste2(nouveau);
	liste2.Acces(1);
	liste2.Inserer(a_ins1);
	cout << liste2 << endl;
	liste2.Acces(5);
	liste2.Inserer(a_ins1);
	cout << liste2 << endl;
	liste2.Inserer(*p_a_ins);
	cout << liste2 << endl;
	liste2.Acces(liste2.Longueur());
	liste2.Inserer(a_ins1);
	cout << "Resultat liste2 : "<< liste2 << endl;
}
*/

void TestConstructionListe  ()
{
#ifdef TYPE_INT
        T   nouveau=22;
#endif
#ifdef TYPE_FLOAT
        T   nouveau=22.22;
#endif
#ifdef TYPE_STRING
        T   nouveau="nnn";
#endif

	cout << endl << "Test constructeur par defaut : " <<endl;
    LDC<T> liste1;

   	cout<< endl << "Tests constructeur avec un  element :"<<endl;
	LDC<T> liste2(nouveau);

   	cout<< endl << "Tests methode Longueur :"<<endl;
	cout << "liste 1 : " << liste1.Longueur() << endl ;
	cout << "liste 2 : " << liste2.Longueur() << endl ;

  	cout<< endl << "Tests methode EstVide :"<<endl;
	cout << "la liste 1 " << (liste1.EstVide()?"est" : "n'est pas") << " vide" << endl;
	cout << "la liste 2 " << (liste2.EstVide()?"est" : "n'est pas") << " vide" << endl;
/*
   	cout<< endl << "Tests methodes Acces / Contenu :"<<endl;
   	liste2.Acces(1);
	cout << "liste 2 : " <<  liste2.Contenu() << endl ;
	// que se passe t il si on decommente ces deux lignes ?
	//liste1.Acces(1);
	//cout << "liste 1 : " <<  liste1.Contenu() << endl ;
*/
/*      constructeur de copie a faire et a tester apres la methode Inserer ....
        cout << endl << "Tests constructeur de copie  :"<<endl;
	LDC<T> liste3(liste2) ;
	cout << "liste 3 : " << liste3.Longueur() << endl ;
*/
	cout << endl << "Tests affichage avec op<<  :"<<endl;
	cout << "liste l1 : "<< liste1 << endl;
	cout << "liste l2 : "<< liste2 << endl;

	cout << " fin des premiers tests " << endl;
}

int main()
{
	TestConstructionListe();
	//TestInsererListe();
	//TestDiversListe();
	//TestRetirerListe();
	//TestSaisieListe();
	cout << "Fin des Tests " << endl;

return 0;
}
