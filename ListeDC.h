//============================================================================
// Name        : ListeDC.cpp
// Author      : psc
// Copyright   : psc2014
//============================================================================

#ifndef __ListInc__
#define __ListInc__
#define DEBUG
#define DEBUG_OPERATEUR

// pour eviter que eclipse voit rouge
using namespace std;
#include <iostream>
//

#include "Maillon.h"

template <class T>
class LDC
{
  public:
		LDC();
		LDC(const T & );
        LDC( LDC<T> & l)  ;    
		~LDC();
	bool	  	EstVide() const;
	bool	  	EstEnFinDeListe() const ;
	bool	  	EstEnDebutDeListe() const ;
	T &		Contenu() const ;// retourne l'element de liste
	LDC<T> &	Acces(int i) ;// Courant sur ieme elt de la liste
	LDC<T> &	Retirer();// retire l'element courant de la liste
	LDC<T>	&	Inserer(const T &e);	// insere e a la position courante
	int		Longueur() const;	// nombre d'elts dans la liste
	LDC<T>  &	Suc();	// Courant sur suivant
	LDC<T>  &	Pred();	// Courant sur precedant
	LDC<T>  &	TeteDeListe();	// Courant sur suivant
	LDC<T>  &	QueueDeListe();	// Courant sur suivant
	int		Rang(const T &e);	// donne le rang de e dans la liste

friend ostream  & operator <<  (ostream &os, LDC<T> &L)
{
#ifdef DEBUG
  cout << "friend LDC operator <<  - si verbeux, ne convient pas pour les fichiers !"<<endl;
#endif
    if(L.tete==nullptr){
		os<<"liste vide"; 
	} else {
		os << L.tete->GetInfo();
	    Maillon maillonExamine = *L.tete; 
	    while(maillonExamine.GetSuivant()!=nullptr){
		    os << maillonExamine.GetInfo(); 
		    maillonExamine = *maillonExamine.GetSuivant();
	}
	}
	return os;
}


friend istream  & operator >>  (istream & is,  LDC<T> &L)
{
#ifdef DEBUG
  cout << "friend LDC operator >> "<<endl;
#endif
	cout << "Votre code ici ..." << endl;
		return is;
}


/*    
	LDC<T>	&  	operator=( LDC<T> &) ; //affectation A FAIRE !
	bool 	operator==(const LDC<T>  & l);//Comparaison A FAIRE !
*/
  private:
	Maillon<T> *	tete;		/* repere de debut de liste */
	Maillon<T> *	courant;	/* repere sur la position courante */

};

////////////////////////////////////////////////////////////////
//Methodes de la classe LDC
///////////////////////////////////////////////////////////////

/////////// Constructeurs /////////////////////////////////////

template <class T>
LDC<T>::LDC()   		//constructeur void
{
#ifdef DEBUG
 cout << "Appel du constructeur LDC par void"<<endl;
#endif
	Maillon<T> * tete = nullptr;		
	Maillon<T> * courant = nullptr; 
}

template <class T>
LDC<T>::LDC(  LDC<T> & lal)  //constructeur de copie
{
#ifdef DEBUG
 cout << "Appel du constructeur LDC de  copie "<<endl;
#endif
	Maillon<T>* tete = 	lal.TeteDeListe();
	Maillon<T>* courant = 	lal.TeteDeListe();


}
template <class T>
LDC<T>::LDC(const T & e)
{
#ifdef DEBUG
 cout << "LDC::CONST avec 1 element \n";
#endif
	Maillon<T> *	tete = new Maillon<T> (e);		
	Maillon<T>* courant = tete; 

}

//----------------------Destructeur -----------------------------

template <class T>
LDC<T>::~LDC()
{
#ifdef DEBUG
 cout << "LDC::DEST"<<endl;
#endif
	if(this->tete==nullptr){ 

	} else {
		Maillon maillonExamine = *this->tete;
	    while(maillonExamine.GetSuivant()!=nullptr){
		    Maillon maillonSuivant = *maillonExamine.GetSuivant(); 
			maillonExamine.~Maillon<T>();
		    maillonExamine = maillonSuivant; 
	    }
    }
}

//----------------- Operations sur listes --------------------------

template <class T>
bool LDC<T>::EstVide()  const
{
#ifdef DEBUG
 cout << "LDC::EstVide"<<endl;
#endif	
 	cout << "Votre code ici ..." << endl;
	return true;
}

template <class T>
bool LDC<T>::EstEnFinDeListe()    const
{
	cout << "Votre code ici ..." << endl;
	return true;
}

template <class T>
bool LDC<T>::EstEnDebutDeListe()   const
{ 
#ifdef DEBUG
 cout << "LDC::EstEnDebutDeListe"<<endl;
#endif	
	return (courant == tete );
}

template <class T>
LDC<T>  & LDC<T>::TeteDeListe()  
{
#ifdef DEBUG
 cout << "LDC::TeteDeListe"<<endl;
#endif	
	cout << "Votre code ici ..." << endl;
	return (*this);
}

template <class T>
LDC<T>  & LDC<T>::QueueDeListe()
{
	cout << "Votre code ici ..." << endl;
   return (*this);
}

template <class T>
LDC<T> & LDC<T>::Inserer (const T &e) //inserer apres  & devenir courant
{
#ifdef DEBUG
	cout << " LDC::Inserer"<<endl;
#endif
 	cout << "Votre code ici ..." << endl;
	return (*this);
}

template <class T>
T & LDC<T>::Contenu()      const
{
#ifdef DEBUG_OPERATEUR
 cout << "LDC::Contenu"<<endl;
#endif	
	cout << "Votre code ici ..." << endl;
	return (courant->GetInfo());
}

template <class T>
LDC<T> & LDC<T>::Acces(int i)
//courant sur ieme elt de la liste s'il existe
{
#ifdef DEBUG_OPERATEUR
 cout << "LDC::Acces"<<endl;
#endif	
 	cout << "Votre code ici ..." << endl;
	return (*this);
}

template <class T>
LDC<T> & LDC<T>::Suc() 
{
#ifdef DEBUG
 cout << "LDC::Suc"<<endl;
#endif	
 	cout << "Votre code ici ..." << endl;
 	return (*this);
}

template <class T>
LDC<T> & LDC<T>::Pred()
{
#ifdef DEBUG
 cout << "LDC::Pred"<<endl;
#endif	
	cout << "Votre code ici ..." << endl;
	return (*this);
}

template <class T>
int LDC<T>::Longueur() const
{
#ifdef DEBUG_OPERATEUR
 cout << "LDC::Longueur"<<endl;
#endif	
	cout << "Votre code ici ..." << endl;
	return 1;
}

template <class T>
LDC<T> & LDC<T>::Retirer(void)
// retire l'element courant de la liste
// et maintient le pointeur courant : si l'elt retire etait le dernier
// arbitrairement on choisit de pointer sur le nouveau dernier ...
{
#ifdef DEBUG
	cout << "LDC :: Retirer"<<endl;
#endif
	cout << "Votre code ici ..." << endl;
	return (*this);
}

template <class T>
int LDC<T>::Rang(const T &e)  //Donne le rang de e dans la liste
{
#ifdef DEBUG
  cout << "LDC :: Rang"<<endl;
#endif
	cout << "Votre code ici ..." << endl;
	return 0;
}
 




#endif

