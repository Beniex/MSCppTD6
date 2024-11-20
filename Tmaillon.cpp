//============================================================================
// Name        : TPGestionCde.cpp
// Author      : psc
// Copyright   : psc2014
//============================================================================

#include <iostream>
using namespace std;
#include "Maillon.h"
#define TEST_INT
//#define TEST_FLOAT
//#define TEST_STRING

void proc_test_int()
{
    //int i1=1,i2=2, i3=3;
    Maillon<int> c1(1);
    Maillon<int> c2(2);
    Maillon<int> c3(3);
    Maillon<int> c4=c1;//c1 et c4 sont fabriqu�s a partir de la meme info

    c1.SetSuivant(&c2);
    c2.SetSuivant(&c3);
    c3.SetSuivant(&c4);

    Maillon<int> *p= &c1;
    cout << "On parcourt a l'endroit la liste des entiers"<<endl;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }
    c2 = c3;
    p  = &c1;
    cout <<endl<< "On re parcourt a l'endroit la liste des entiers apres avoir change c2 "<<endl;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }
}


int  main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
#ifdef TEST_INT
    proc_test_int();
#endif

#ifdef TEST_FLOAT
    double i1=1.1,i2=2.2,i3=3.3;
    Maillon<double> c1(i1);
    Maillon<double> c2(i2);
    Maillon<double> c3(i3);
    Maillon<double> c4=c1;//c1 et c4 pointent sur le meme entier (construction profonde)

    c1.SetSuivant(&c2);
    c2.SetSuivant(&c3);
    c3.SetSuivant(&c4);

    Maillon<double> *p= &c1;
    cout << "On parcourt a l'endroit la liste des flottants"<<endl;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }

    cout << "On change une valeur et ...";
    double aa= 4.4;
    Maillon<double> t(aa);
    c1 = t;
    p= &c1;
    cout << "on re parcourt a l'endroit la liste des flottants"<<endl;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }
#endif

#ifdef TEST_STRING
#include <string>
cout << "TEST Maillon<T> avec les string"<<endl;
    string i1="Dupond",i2="Duval";
    Maillon<string> c1(i1);
    Maillon<string> c2(i2);
    Maillon<string> c3=c1;//c1 et c3 pointent sur la meme info

    cout << "Tests avec 3  string ";
    c1.SetSuivant(&c2);
    c2.SetSuivant(&c3);

    Maillon<string> *p= &c1;
    cout << "On parcourt a l'endroit la liste des char *"<<endl;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }
    cout << "On change une valeur et ...";
    string aa="aicha";
    Maillon<string> t (aa);
    c2 =  t ;
    cout << "on recommence !!!!"<<endl;
    p=&c1;
    while ( p != NULL )
    {
        cout << " ["<<p->GetInfo()<<"] ";
        p=p->GetSuivant();
    }
#endif

    cout << "Fin provisoire des tests "<<endl;
	return 0;

}
