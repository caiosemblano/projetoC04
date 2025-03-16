#include <iostream>
using namespace std;
struct dados
{
	string id;
	string descricao;
};

void cadastrar_nova_palavra(dados palavra, int i)
{
	// Fazer cadastro da palavra
	cout << "NOVA PALAVRA CADASTRADA" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void listar_significados() //op��o 2.1
{
	cout << "Significados Listados!" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void listar_sinonimos() //op��o 2.2
{
	cout << "Sinonimos Listados!" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void listar_palavras_alfabeto() //op��o 2.3
{
	cout << "Palavras Listadas em ordem Alfabetica!" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void listar_palavras_tamanho() //op��o 2.4
{
	cout << "Palavras listadas por ordem de tamanho" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void calcular_similaridade() //op��o 3
{
	cout << "Similaridade Calculada!" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;
}

void remover_palavra() //op��o 4
{
	cout << "Palavra removida!" << endl;
	cout << endl << "|----------------------------------------------------------|" << endl << endl;	
}



int main()
{
	int escolha;
	dados palavra;
	int i = 0;
	int escolha2 = 1;
	
	while(escolha != -1)
	{
		cout << "Dicionario    Portugues -> ______ " << endl;   //Menu inicial
		cout << endl << "Como deseja prosseguir?" << endl << endl;
		
		cout << "1 - Cadastrar palavra nova" << endl;
		cout << "2 - Mostrar opcoes de listagem" << endl;
		cout << "3 - Remover palavra" << endl;
		cout << "4 - Calcular similaridade entre duas palavras" << endl;
		cout << "0 - Para fechar o dicionario" << endl << endl;
		cin >> escolha; // entrada para selecionar uma op��o
		
		switch(escolha)
		{
		case 1: // Cadastrar palavra
			cout << endl << "Digite a palavra a ser registrada" << endl;
			getline(cin >> ws, palavra.id);
			cout << endl << "Agora seu significado" << endl;
			getline(cin >> ws, palavra.descricao);
			//falta definir como ser� feita traducao e a busca por sinonimos
			
			cadastrar_nova_palavra(palavra, i);
			break;
		
		case 2: // mostrar opcoes de listagem
			cout << "O que voce deseja listar?" << endl << endl;
			
			cout << "1 - Listar significados de uma palavra" << endl;
			cout << "2 - Listar sin�nimos de uma palavra" << endl;
			cout << "3 - Listar palavras em ordem alfab�tica" << endl;
			cout << "4 - Listar palavras por ordem de tamanho (n�mero de caracteres)" << endl;
			cout << "0 - Voltar para menu inicial" << endl << endl;
			
			while (escolha2 != 0)
			{
				cin >> escolha2;
								
				switch (escolha2)
				{
				case 0:	//voltar para o menu
					break;
				
				case 1:	//Listar significados de uma palavra
					listar_significados();
					escolha2 = 0;
					break;
				
				case 2: //Listar sin�nimos de uma palavra
					listar_sinonimos();
					escolha2 = 0;
					break;
				
				case 3: //Listar palavras em ordem alfab�tica
					listar_palavras_alfabeto();
					escolha2 = 0;
					break;
				
				case 4: //Listar palavras por ordem de tamanho (n�mero de caracteres)
					listar_palavras_tamanho();
					break;
				
				default:
					cout << "Resposta invalida, tente novamente." << endl;
					break;
				}
			}
			break;
		
		case 3: // Remover palavra
			
			// seria bom poder remover a palavra escrevendo ela mesma ou a posicao dela
			remover_palavra();
			break;
	
		case 4: // Calcular similaridade entre duas palavras
			calcular_similaridade();
			break;
		
		case 0:
			return 0;
			
		default:
			cout << "Resposta inv�lida" << endl;
			break;
		}
		i++;
	}
	
	
	
	return 0;
}	
