#ifndef TIRO_H
#define TIRO_H
#include <string>
#include "Jogo.h"
#include "Rpg.h" 

using namespace std;

class Rpg;

		class Tiro:public Jogo
		{ 
			private:
				string armas;
				
			public:

				Tiro(int,const string &, const string &, const string &, const string &, float, const string &);
				~Tiro();
				string getArmas() const;
				
				void setArmas(const string &);
				void mostra();
				void calcAtaque(Rpg);

				
};
#endif
