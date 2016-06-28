#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

// Funções do Programa (explicações no código da função)
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4);

/*
+	Exercício - Código Secreto
+
+	Nesse jogo, o jogador precisa descobrir um código secreto de 4 (quatro) dígitos.
+	Os valores de cada parte do código vão de 1 até 4. Sempre que o jogador acertar um
+	dos valores, o circuito correto vai acender!
+
+	Detalhe:
+
+	O código está incompleto!
+	1. Leia o código (linha a linha) e seus comentários.
+	2. Preencha os comentários em ----- MAIÚSCULO ----- com o código que está faltando.
+	3. Comente os trechos de código que se pede.
+	
+	Se necessário, use uma folha para lhe auxiliar! Copie o nome das variáveis e seus valores.
+	
+	Boa sorte!
+
+*/
int main()
{
	bool sair = false;

	// Marca os códigos em "falso" caso esteja errado e "true" caso esteja certo.
	bool cod1 = false, cod2 = false, cod3 = false, cod4 = false;

	srand((int)time(0));

	// Nosso código será composto de 4 (quatro) números (num1, num2, num3 e num4).
	int num1, num2, num3, num4;
	// os números do código vão ser aleatórios, indo de 1 até 4.
	num1 = rand() % 4 + 1;
	num2 = rand() % 4 + 1;
	num3 = rand() % 4 + 1;
	num4 = rand() % 4 + 1;
	/*
		Por exemplo, se ele gerar (aleatoriamente):
			num1 = 2
			num2 = 4
			num3 = 4
			num4 = 3

		Quer dizer que nosso código secreto será:
			2 4 4 3
	*/

	// Número do código que o jogador vai digitar.
	int codigo;

	while (!sair)
	{
		// Mostra o Painel de Circuitos em tela.
		Mostrar_Circuito(cod1, cod2, cod3, cod4);
		// Não mexa nesse código.

		// Se todos os números do código estiverem corretos, então encerra.
		if (cod1 == true && cod2 == true && cod3 == true && cod4 == true)
		{
			cout << "<SISTEMA HACKEADO COM SUCESSO ALERTA USO INDEVIDO>" << endl;
			sair = true;
			system("pause");
		}
		else
		{
			// Reinicia a luz dos circuitos.
			cod1 = false;
			cod2 = false;
			cod3 = false;
			cod4 = false;

			cout << "<HACKEANDO SISTEMA> DIGITE CODIGO [1 ATE 4] " << endl;
		
			cout << "<DIGITE PRIMEIRO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num1) cod1 = true;

			cout << "<DIGITE SEGUNDO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num2) cod2 = true;		
		
			// ------ REPITA O CÓDIGO ACIMA PARA O TERCEIRO E QUARTO NUMERO QUE PRECISAM SER DIGITADOS ------
			
cout << "<DIGITE TERCEIRO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num3) cod3 = true;
			
			cout << "<DIGITE QUARTO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num4) cod4 = true;
			// ------ FAÇA UM LAÇO DE 0 ATÉ 100, PULANDO DE 10 EM 10, QUE REPITA AS DUAS LINHAS ABAIXO ------
			//					Sua variável de controle do laço deve se chamar "cont".
			int cont;
			// Dica: "cont++" é a mesma coisa que "cont = cont + 1".
			// Dica: "cont = cont + 1" aumenta o cont em 1, ou seja, pula de 1 em 1.
			//		 "cont = cont + 2" aumenta o cont em 2, ou seja, pula de 2 em 2.
			// Coloque o código aqui!
			for (cont = 0 ; cont < 100 ; cont ++){
				cout << cont + 10;
			}
					cout << "<PROCESSANDO CODIGO> AGUARDE " << cont << "%" << endl;
					system("cls");
		}

		system("cls");
	}

	// ------ FAÇA UM LAÇO QUE COLOQUE 4 LINHAS EM TELA ------
	for (int linha = 0 ; linha < 4 ; linha++) {
		cout << endl;
	}
	cout << "O codigo foi quebrado. Os arquivos finalmente sao seus." << endl;
	// ------ FAÇA UM LAÇO QUE COLOQUE 4 LINHAS EM TELA ------
	for (int linha2 = 0 ; linha2 < 4 ; linha2++) {
		cout << endl;
	}
	cout << " -------------------- FIM DE JOGO ---------------------" << endl;

	return 0;
}

/*
	Mostra o Painel de Circuitos em tela.
	Se o jogador acertar um dos valores do código, o circuito correto vai acender.
	Quando todos os circuitos acenderem, quer dizer que o código está completo!

	Obs: Não mexa nesse código! Ele que vai mostrar as coisas em tela.
*/
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4)
{
	// ------ EXPLIQUE O QUE O IF ELSE ABAIXO FAZ NO PROGRAMA ------
	// Dica: Olhe os outros IF ELSE abaixo. Veja o que muda e tente interpretar.
	// Coloque seu comentário aqui!
	if (cod2 == true) // caso o código que o usuário digitar estiver certo executar o seguinte bloco de códigos
	{
		cout << "	 __	" << endl;
		cout << "	 ||||| " << endl;
		cout << "	 ||||| __" << endl;
	}
	else // caso contrário executar o seguinte bloco de códigos
	{
		cout << "	 __	" << endl;
		cout << "	 | | " << endl;
		cout << "	 |_| _" << endl;
	}

	if (cod4 == true) // caso o código que o usuário digitar estiver certo executar o seguinte bloco de códigos
	{
		cout << "	 | | |||||" << endl;
		cout << "	 | | |||||" << endl;
	}
	else // caso contrário executar o seguinte bloco de códigos
	{
		cout << "	 | | | |" << endl;
		cout << "	 | | |___|" << endl;
	}

	cout << "	 | |__ | |" << endl;
	cout << "	 |__ | | |" << endl;
	cout << "	Hack  	 | | System Code	| |" << endl;
	cout << "	-----------------------------------------" << endl;
	cout << " __| _ | _ | _ | _ |" << endl;
	cout << " | __| /\\ \\ | /\\ \\ | /\\ \\ | /\\ \\ |" << endl;
	cout << " | |	| /::\\ \\ | /::\\ \\ | /::\\ \\ | /::\\ \\ | " << endl;
	cout << "_|_|_ |/:/\\:\\\\|/:/\\:\\\\|/:/\\:\\\\|/::\\:\\_\\|	" << endl;

	if (cod1 == true) // caso o código que o usuário digitar estiver certo executar o seguinte bloco de códigos
	{
		cout << "|||||	|\\:\\ \\/__/|\\:\\/:/ /|\\:\\/:/ /|\\:\\:\\/ /|	" << endl;
		cout << "||||| | \\:\\__\\ | \\::/ / | \\::/ / | \\:\\/ / |	" << endl;
	}
	else // caso contrário executar o seguinte bloco de códigos
	{
		cout << "| |	|\\:\\ \\/__/|\\:\\/:/ /|\\:\\/:/ /|\\:\\:\\/ /|	" << endl;
		cout << "|_| | \\:\\_\\ | \\::/ / | \\::/ / | \\:\\/ / |	" << endl;
	}

	cout << "	| \\// | \\// | \\// | \\/_/ |		" << endl;
	cout << "	-----------------------------------------		" << endl;
	cout << "	 Protection Lvl 10 | |	Secret		" << endl;
	cout << "		 __ | |				" << endl;

	if (cod3 == true) // caso o código que o usuário digitar estiver certo executar o seguinte bloco de códigos
	{
		cout << " |||||___| |				" << endl;
		cout << " |||||__|				" << endl;
	}
	else // caso contrário executar o seguinte bloco de códigos
	{
		cout << " | |___| |				" << endl;
		cout << " |_|__|				" << endl;
	}

	cout << endl << endl;
}
/*
Código por https://github.com/marcelomesmo/POOAulas
Desenhos ASCII retirados de http://ascii.co.uk/art/pokemon
*/
