#include <iostream>
#include <string>
using namespace std;
#include "Jogo.h"
#include "Rpg.h"
#include "Tiro.h"



	Rpg::Rpg(int c,const string &e, const string &n1, const string &n2, const string &n3, float p, const string &Classe, float atk, float def, float mag):Jogo(c,e,n1,n2,n3,p) 
	{ 
		setClasse(Classe);
		setAtaque(atk);
		setDefesa(def);
		setMagia(mag);
		
	}
	Rpg::~Rpg()
	{ 
		//cout << "\nFim de objeto Rpg.\n";
	}
	string Rpg::getClasse() const { return classe; }
	float Rpg::getAtaque() const { return ataque; }
	float Rpg::getDefesa() const { return defesa; }
	float Rpg::getMagia() const { return magia; }
	
	void Rpg::setClasse(const string &Classe) { classe = Classe; }
	void Rpg::setAtaque(float atk) { ataque = atk; }
	void Rpg::setDefesa(float def) { defesa = def; }
	void Rpg::setMagia(float mag) { magia = mag; }
	

	//polimorfismo para mostra a sobreposição
	void Rpg::mostra()
	{		
		 //Jogo::imprime(); // chamando o método imprime da superclasse Jogo
	   cout<<"\nClasse:"<<getClasse()<<endl;
	   cout<<"\nAtaque:"<<getAtaque()<<endl;
	   cout<<"\nDefesa:"<<getDefesa()<<endl;
	   cout<<"\nMagia:"<<getMagia()<<endl;
	
	}   
	
