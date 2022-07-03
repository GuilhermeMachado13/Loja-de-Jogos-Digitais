//Nome: Guilherme Machado   Projeto de C+++

//OBS: PROGRAMA RODA EM UMA SWITCH CASE

#include <iostream>
using namespace std;
#include "Jogo.h"  
#include "Rpg.h"
#include "Tiro.h"

//método friend
float calcPrecoFinal(Jogo jog) 
{
	return jog.preco* 2.2+jog.calcTaxa(); //acesso direto a preço dos jogos mais a taxa 
}


void imprimeCaracteres(const char *s)
{
	for( ; *s != '\0'; s++)
		cout << *s;
}


int main()
{ 
	 int op;
	 const char nomeProjeto[]= "Projeto de C++";
	 const char nomeLoja[]= "################ Plataforma De Jogos Digitais ################";
	 imprimeCaracteres(nomeProjeto);
	 cout<<"\n\n"<<endl;
	 
	 do
	 {
	 	imprimeCaracteres(nomeLoja);
	 	cout<<"\n1-Aventura\n2-Ação\n3-RPG\n4-Corrida\n5-Tiro\n6-Sair\n"<<endl;
	 	cin>>op;
	 		
	 		switch(op)
	 		{
	 
	 
	 		  	case 1:
				 	Jogo *pp; //ponteiro para apontar o polimorfismo
				 	
			  	{ //bloco limitador 1
		 				Jogo av(10, "Aventura", "God of War", "The last of us", "Assassins Creed", 200); // objeto não constante
						cout << "\nJogos de Aventura: " << endl;
						pp = &av; //ponteiro para exemplo de como mostrar polimorfismo
						pp->imprime(); //usando o ponteiro
						cout << "\nPreço Total: R$ "<< calcPrecoFinal(*pp)<< endl; //chama friend com valor do apontado
				 	}
				 	
				break;
				 
  				case 2:
  			 	{	 
  		 			//bloco limitador 2
  	 			  cout << "\nJogos de Ação: " << endl;
		 			  Jogo ac(15, "Ação","Far Cry 3", "Watch Dogs", "Devil May Cry 5",180.99); //objeto não constante
					  pp = &ac; //ponteiro para demonstrar polimorfismo
					  pp->imprime(); //o ponteiro enxerga o método virtual
					  cout << "\nPreço Total: R$ "<< calcPrecoFinal(*pp)<<endl;
					}
					
				break;
				
			 	 case 3:
	 			 { 
	 				//bloco limitador 3
	 		    cout << "\nJogos de RPG: " << endl;
		 	    Rpg r(20, "RPG", "Dragon Age", "Skyrim", "Final Fantasy XIII-2",150.99, "Mago", 20, 5, 80); //objeto não constante
			    r.mostra();
			    pp = &r; //ponteiro para demonstrar polimorfismo
			    pp->imprime(); //o ponteiro enxerga o método virtual
			    cout << "\nPreço Total: R$" << calcPrecoFinal(*pp)<<endl;
	 		   }
	 		  
	 		break;
	 		
		   	case 4:
		   	{ 
					//bloco limitador 4
			  	cout << "\nJogos de Corrida: " << endl;
		 	  	Jogo c(25, "Corrida", "Need For Speed", "Forza Horizon 4", "Gran Turismo",124.99); //objeto não constante
			 	  pp = &c; //ponteiro para demonstrar polimorfismo
			  	pp->imprime(); //o ponteiro enxerga o método virtual
			  	cout << "\nPreço Total: R$" << calcPrecoFinal(*pp)<<endl;
					//passando o valor do apontado //usando o ponteiro
		    }
		
		break;
		
		  	case 5:
				{ 
					//bloco limitador 5
					Tiro t(30, "Tiro", "Battlefield 3", "Call of Duty Black Ops 2", "Fortnite", 110.99, "Armas/granadas/colete/espada/munição"); //objeto não constante
					const Rpg r(20, "RPG", "Dragon Age", "Skyrim", "Final Fantasy XIII-2",150.99, "Mago", 20, 5, 80); //objeto constante
					t.mostra();
					t.calcAtaque(r); // chama a classe friend
					pp = &t; //ponteiro para demonstrar polimorfismo
					cout << "\nJogos de Tiro: " << endl;
					pp->imprime(); //o ponteiro enxerga o método virtual
					cout << "\nPreço Total: R$" << calcPrecoFinal(*pp)<<endl;
		 	 	}
		 
	break;
	
			case 6:
				cout<<"\nObrigado por comprar na Loja de Jogos Digitais!\n"<<endl;
				
	break;
	
			default :
				cout<<"\nOpção Inválida!\n"<<endl;
	
		}
	
 }while(op!=6);
 
} 	

