#include <iostream> // inclui o arquivo iostream que contém as definições e declarações-padrão de entrada e saída
#include <ctime> // inclui a biblioteca para o uso do tempo/hora 
using namespace std; // namespace é uma região que agrega um identificador a todos s nomes declarados dentro dela e a diretiva using permite que os nomes dentro de um namespace possam ser usados sem explicitar o qualificador 

void imprimir_espacos(int total); // Identificador da função 'imprimir_espaços'.

int main(int argc, char* args[]) // função que inicia o programa 
{
	int total_espacos = 70; // Quantidade Total de Espaços.
	int rodada = 0; // variável para uma nova rodada acontecer após o carro ter andado 
	int carro1 = 0; // variável do primeiro carro
	int carro2 = 0; // variável para o segundo carro

	while (carro1 < total_espacos && carro2 < total_espacos) // enquanto carro1 e carro2 for menor que a quantidade de espaços executar o bloco de código
	{
		cout << "Jogo de Corrida" << endl; // Mostra em tela o Letreiro do Jogo.
		// Mostra no final da partida a chegada dos carros 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		srand((int)time(0)); // Usa o tempo atual como "semente" do gerador

		// Imprime na tela do usuário a quantidade de espaços sortiados em cada corrada e os carros
		carro1 = rand() % 3 + 1 + carro1;
		imprimir_espacos(carro1);
		cout << "  _  " << endl;
		imprimir_espacos(carro1);
		cout << "-o-o>" << endl;
		cout << "-------------------------------------------------------------------------" << endl;

		// Imprime na tela do usuário a quantidade de espaços sortiados em cada corrada e os carros
		carro2 = rand() % 3 + 1 + carro2;
		imprimir_espacos(carro2);
		cout << "  _  " << endl;
		imprimir_espacos(carro2);
		cout << "-o-o>" << endl;
		cout << "-------------------------------------------------------------------------" << endl;

		system("cls"); 	// Limpa a tela para mostrar a próxima rodada.
		rodada++; 	// Limpa a tela para mostrar a próxima rodada.
	}

	// Mostra ao usuário quem ganho. Caso o carro1 atinja os espaços primeiro ele será o vencedor caso contrario o carro2 irá ganhar 
	if (carro1 > carro2) cout << "O carro1 venceu" << endl;
	else cout << "O carro2 ganhou" << endl;
	system("pause"); // pausa a função
	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	int total : Quantidade de espaços que serão mostrados.
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}


