#include <iostream>
#include <string>
using namespace std;
#include "Jogo.h"
#include "Tiro.h"


	Tiro::Tiro(int c,const string &e, const string &n1, const string &n2, const string &n3, float p, const string &a):Jogo(c,e,n1,n2,n3,p)
	{ 
	  setArmas(a);
	}
	Tiro::~Tiro()
	{ 
		//cout << "\nFim de objeto Tiro.\n";
	}
	string Tiro::getArmas() const { return armas; }
	void Tiro::setArmas(const string &a) { armas = a; }
	

	//polimorfismo para mostra a sobreposição
	void Tiro::mostra()
	{		
	   //Jogo::imprime(); // chamando o método imprime da superclasse Jogo
	   cout<<"\nPacote de armas:"<<getArmas()<<endl;
	 
	}   
	
	void Tiro::calcAtaque(Rpg r) //classe friend
	{
		cout<<"\nPoder de ataque:"<< r.ataque* 2<<endl;
	}

