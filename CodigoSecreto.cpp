#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

// Fun��es do Programa (explica��es no c�digo da fun��o)
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4);

/*
+	Exerc�cio - C�digo Secreto
+
+	Nesse jogo, o jogador precisa descobrir um c�digo secreto de 4 (quatro) d�gitos.
+	Os valores de cada parte do c�digo v�o de 1 at� 4. Sempre que o jogador acertar um
+	dos valores, o circuito correto vai acender!
+
+	Detalhe:
+
+	O c�digo est� incompleto!
+	1. Leia o c�digo (linha a linha) e seus coment�rios.
+	2. Preencha os coment�rios em ----- MAI�SCULO ----- com o c�digo que est� faltando.
+	3. Comente os trechos de c�digo que se pede.
+	
+	Se necess�rio, use uma folha para lhe auxiliar! Copie o nome das vari�veis e seus valores.
+	
+	Boa sorte!
+
+*/
int main()
{
	bool sair = false;

	// Marca os c�digos em "falso" caso esteja errado e "true" caso esteja certo.
	bool cod1 = false, cod2 = false, cod3 = false, cod4 = false;

	srand((int)time(0));

	// Nosso c�digo ser� composto de 4 (quatro) n�meros (num1, num2, num3 e num4).
	int num1, num2, num3, num4;
	// os n�meros do c�digo v�o ser aleat�rios, indo de 1 at� 4.
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

		Quer dizer que nosso c�digo secreto ser�:
			2 4 4 3
	*/

	// N�mero do c�digo que o jogador vai digitar.
	int codigo;

	while (!sair)
	{
		// Mostra o Painel de Circuitos em tela.
		Mostrar_Circuito(cod1, cod2, cod3, cod4);
		// N�o mexa nesse c�digo.

		// Se todos os n�meros do c�digo estiverem corretos, ent�o encerra.
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
		
			// ------ REPITA O C�DIGO ACIMA PARA O TERCEIRO E QUARTO NUMERO QUE PRECISAM SER DIGITADOS ------
			
cout << "<DIGITE TERCEIRO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num3) cod3 = true;
			
			cout << "<DIGITE QUARTO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num4) cod4 = true;
			// ------ FA�A UM LA�O DE 0 AT� 100, PULANDO DE 10 EM 10, QUE REPITA AS DUAS LINHAS ABAIXO ------
			//					Sua vari�vel de controle do la�o deve se chamar "cont".
			int cont;
			// Dica: "cont++" � a mesma coisa que "cont = cont + 1".
			// Dica: "cont = cont + 1" aumenta o cont em 1, ou seja, pula de 1 em 1.
			//		 "cont = cont + 2" aumenta o cont em 2, ou seja, pula de 2 em 2.
			// Coloque o c�digo aqui!
			for (cont = 0 ; cont < 100 ; cont ++){
				cout << cont + 10;
			}
					cout << "<PROCESSANDO CODIGO> AGUARDE " << cont << "%" << endl;
					system("cls");
		}

		system("cls");
	}

	// ------ FA�A UM LA�O QUE COLOQUE 4 LINHAS EM TELA ------
	for (int linha = 0 ; linha < 4 ; linha++) {
		cout << endl;
	}
	cout << "O codigo foi quebrado. Os arquivos finalmente sao seus." << endl;
	// ------ FA�A UM LA�O QUE COLOQUE 4 LINHAS EM TELA ------
	for (int linha2 = 0 ; linha2 < 4 ; linha2++) {
		cout << endl;
	}
	cout << " -------------------- FIM DE JOGO ---------------------" << endl;

	return 0;
}

/*
	Mostra o Painel de Circuitos em tela.
	Se o jogador acertar um dos valores do c�digo, o circuito correto vai acender.
	Quando todos os circuitos acenderem, quer dizer que o c�digo est� completo!

	Obs: N�o mexa nesse c�digo! Ele que vai mostrar as coisas em tela.
*/
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4)
{
	// ------ EXPLIQUE O QUE O IF ELSE ABAIXO FAZ NO PROGRAMA ------
	// Dica: Olhe os outros IF ELSE abaixo. Veja o que muda e tente interpretar.
	// Coloque seu coment�rio aqui!
	if (cod2 == true) // caso o c�digo que o usu�rio digitar estiver certo executar o seguinte bloco de c�digos
	{
		cout << "	 __	" << endl;
		cout << "	 ||||| " << endl;
		cout << "	 ||||| __" << endl;
	}
	else // caso contr�rio executar o seguinte bloco de c�digos
	{
		cout << "	 __	" << endl;
		cout << "	 | | " << endl;
		cout << "	 |_| _" << endl;
	}

	if (cod4 == true) // caso o c�digo que o usu�rio digitar estiver certo executar o seguinte bloco de c�digos
	{
		cout << "	 | | |||||" << endl;
		cout << "	 | | |||||" << endl;
	}
	else // caso contr�rio executar o seguinte bloco de c�digos
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

	if (cod1 == true) // caso o c�digo que o usu�rio digitar estiver certo executar o seguinte bloco de c�digos
	{
		cout << "|||||	|\\:\\ \\/__/|\\:\\/:/ /|\\:\\/:/ /|\\:\\:\\/ /|	" << endl;
		cout << "||||| | \\:\\__\\ | \\::/ / | \\::/ / | \\:\\/ / |	" << endl;
	}
	else // caso contr�rio executar o seguinte bloco de c�digos
	{
		cout << "| |	|\\:\\ \\/__/|\\:\\/:/ /|\\:\\/:/ /|\\:\\:\\/ /|	" << endl;
		cout << "|_| | \\:\\_\\ | \\::/ / | \\::/ / | \\:\\/ / |	" << endl;
	}

	cout << "	| \\// | \\// | \\// | \\/_/ |		" << endl;
	cout << "	-----------------------------------------		" << endl;
	cout << "	 Protection Lvl 10 | |	Secret		" << endl;
	cout << "		 __ | |				" << endl;

	if (cod3 == true) // caso o c�digo que o usu�rio digitar estiver certo executar o seguinte bloco de c�digos
	{
		cout << " |||||___| |				" << endl;
		cout << " |||||__|				" << endl;
	}
	else // caso contr�rio executar o seguinte bloco de c�digos
	{
		cout << " | |___| |				" << endl;
		cout << " |_|__|				" << endl;
	}

	cout << endl << endl;
}
/*
C�digo por https://github.com/marcelomesmo/POOAulas
Desenhos ASCII retirados de http://ascii.co.uk/art/pokemon
*/
