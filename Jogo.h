#ifndef JOGO_H
#define JOGO_H
#include <string>
using namespace std;
class Jogo
{ 
	private:
		int cod;
		float preco;
		string estilo;
		string nome1;
		string nome2;
		string nome3;


	public:
		Jogo(int, const string &, const string &, const string &, const string &, float);
		Jogo(const string &, const string &, const string &, const string &, float); //sobrecarga constr sem codigo
		~Jogo();
		
		int getCod() const;
		float getPreco() const;
		string getEstilo() const ;
		string getNome1() const;
		string getNome2() const;
		string getNome3()const;
		
		void setCod(const int);
		void setPreco(const float);
		void setEstilo(const string &);		
		void setNome1(const string &);
		void setNome2(const string &);
		void setNome3(const string &);
		
		friend float calcPrecoFinal(Jogo);
		void imprime();
		virtual float calcTaxa();
};

#endif

