#include <iostream>
#include <string>
using namespace std;
#include "Jogo.h"

		Jogo::Jogo(int c, const string &e, const string &n1, const string &n2, const string &n3, float p):cod(c), estilo(e), nome1(n1), nome2(n2), nome3(n3), preco(p) //inicializadores
		{ 
			setCod(c); //Atributo const: uso obrigatório de inicializador
			setEstilo(e);
			setNome1(n1);
			setNome2(n2);
			setNome3(n3);
			setPreco(p);
		}
		//Sobrecarga: construtor sem código
		//Jogo::Jogo(const string &e, const string &n1, const string &n2, const string &n3, float p):cod(c), estilo(e), nome1(n1), nome2(n2), nome3(n3), preco(0)
		//{ 
		//}
		
		Jogo::~Jogo()
		{ 
				//cout << "\nFim de objeto de Jogo.n";
		}
		
	int Jogo::getCod() const { return cod; }
	float Jogo::getPreco() const { return preco; }
	string Jogo::getEstilo() const { return estilo;}
	string Jogo::getNome1() const { return nome1; }
	string Jogo::getNome2() const { return nome2; }
	string Jogo::getNome3() const { return nome3; }
	
	void Jogo::setCod(const int c){cod=c;}
	void Jogo::setEstilo(const string &e) { estilo=e; }
	void Jogo::setNome1(const string &n1) { nome1 = n1; }
	void Jogo::setNome2(const string &n2) { nome2 = n2; }
	void Jogo::setNome3(const string &n3) { nome3 = n3; }

	void Jogo::setPreco(const float p) { preco = p; }
//método para polimorfismo sobreposição
	void Jogo::imprime() 
	{

		cout <<"\nCódigo:"<<getCod()<<endl;
		cout<<"\nEstilo:"<<getEstilo()<<endl;
		cout<<"\n"<<getNome1()<<endl;
	  cout<<"\n"<<getNome2()<<endl;
	  cout<<"\n"<<getNome3()<<endl;
		cout<<"\nPreço:R$" << getPreco()<<endl;
		cout<<"\nTaxa de imposto:R$"<<calcTaxa()<<endl;
	}
	//método virtual para polimorfismo sobreposição
	//implementado nas subclasses
	float Jogo::calcTaxa() { return 5; } //valor da taxa R$ 5
	
	
