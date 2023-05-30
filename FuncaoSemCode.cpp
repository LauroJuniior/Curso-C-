#include <iostream>
#include <locale.h>

using namespace std;

void ExibirMenu();
void ProcessarEscolha(int TipoEscolha); //ira salvar a escolha do usuario em TipoEscolha

int main()
{
	ExibirMenu();//chamando a função exibir Menu
	return 0;
}

void ExibirMenu()
{
    setlocale(LC_ALL, "portuguese");
	int escolha = 0;

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		cout << "\n****Tickets Cinema****" << endl; 
		cout << "\n1 - Para Meia Entrada";
		cout << "\n2 - Para Inteira";
		cout << "\n3 - Sair";
		cout << "\nEscolha sua opcao: ";
		cin >> escolha;

		//o que o usuario digitar em escolha ira ser salva na função ProcessarEscolha
		ProcessarEscolha(escolha);
	
	}while (escolha > 3);

}

void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)//chamando a função tipo escolha para verificar o que o usuario inceriu 
	{
		case 1: 
			cout << "\nTicket Meia Entrada Comprada\n";
			break;
		case 2: 
			cout << "\nTicket Inteira Comprado\n";
			break;	
		case 3: 
			cout << "\nSaindo Menu Tickets...\n";
			break;

		default: cout << "\nOpcao Invalida!!!\n";
	}
}