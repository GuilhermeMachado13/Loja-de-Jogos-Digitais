#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

#include "Tiro.h"

		class Rpg:public Jogo
		{ 
			private:
				string classe;
				float ataque, defesa, magia;
			
			public:

				Rpg(int,const string &, const string &, const string &, const string &, float, const string &, float, float, float);
				~Rpg();
				
				string getClasse() const;
				float getAtaque() const;
				float getDefesa() const;
				float getMagia() const;
				
				void setClasse(const string &);
				void setAtaque(float);
				void setDefesa(float);
				void setMagia(float);
				
				friend class Tiro; //classe amiga
				//métodos para polimorfismo sobreposição
				float calcTaxa() const;
				
				void mostra();  
			//sobrecarga do método herdado
			  float calcTaxa(double) const; //mudou a lista de parâmetros	
};
#endif
