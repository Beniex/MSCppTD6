//============================================================================
// Name        : Maillon.h
// Author      : psc
// Copyright   : psc2014
//============================================================================

#ifndef __MaillonInc__
#define __MaillonInc__
#define DEBUG

// pour eviter que eclipse voit rouge :
using namespace std;
#include <iostream>
//

template <class T>
class Maillon {
    public:
        Maillon(const T& e) ;
        Maillon(const Maillon<T> &);
        virtual ~Maillon () ;
        Maillon<T> &    operator =(const Maillon<T> &);
        T&  GetInfo()   const  {return *info;};
        Maillon<T> *    GetSuivant() {return suivant;};
        void            SetSuivant(Maillon<T> * s) {suivant=s;};
    private:
        T   *           info;
        Maillon<T> *    suivant;
};

//-------------------------------------------------------------
//Methodes de la classe Maillon : Autres constructeurs
//-------------------------------------------------------------
template <class T>
Maillon<T>::Maillon(const T& c)
{
#ifdef DEBUG
  cout<<endl<<"Maillon::CONST avec un T";
#endif
  info=new T(c);
  suivant=NULL;
}

template <class T>
Maillon<T>::Maillon(const Maillon<T> &c)
{
#ifdef DEBUG
  cout<<endl<<"Maillon::CONST de copie";
#endif
  info=new T(*c.info);
  suivant = NULL;
}


template <class T>
Maillon<T>::~Maillon()
{
#ifdef DEBUG
  cout<<endl<<"Maillon::DEST";
#endif
  // on detruit l'info du maillon en cours de destruction et pas ses voisins !
  delete info;
}


template <class T>
Maillon<T> & Maillon<T>::operator= (const Maillon<T> &c)
// on a choisi de recopier la donnee, pas l'adresse de chainage....
{
#ifdef DEBUG
  cout<<endl<<"Maillon::OPERATEUR="<<endl;
#endif
  delete info;
  info=new T(*c.info);
  // suivant n'est pas touche
  return (*this);
}

#endif
