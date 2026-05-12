#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void animacao() {

	cout << "\n\tProcessando";

	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(200); //anotação: Sleep é uma função da biblioteca windows.h que pausa a execução do programa por um determinado número de milissegundos. No caso do código, Sleep(200) faz com que o programa espere por 200 milissegundos (ou 0,2 segundos) antes de continuar a execução. Isso é usado para criar um efeito de animação, onde os pontos são exibidos um a um com uma pequena pausa entre eles, simulando um processo de carregamento ou processamento.
	}

	cout << "\n\tCalculando:\n";

	for (int progresso = 0; progresso <= 100; progresso += 5) {

		cout << "\r\t[";

		for (int j = 0; j < progresso / 5; j++) {
			cout << "=";
		}

		for (int j = progresso / 5; j < 20; j++) {
			cout << " ";
		}

		cout << "] " << progresso << "%" << flush;

		Sleep(100);
	}
	cout << endl;
}

void cabecalho(string titulo) { // void é um tipo de retorno que indica que a função não devolve nenhum valor.
	cout << "\t =========================================== " << endl;
	cout << "\t ||           " << titulo << "                 ||" << endl;
	cout << "\t =========================================== " << endl;
}

int main() {

	int op = 0, resultado = 0, qtd = 0, numero_subtracao = 0;
	int numeros_soma = 0, segundos = 5;

	SetConsoleOutputCP(CP_UTF8);

	do {
		system("cls");

		cabecalho("CALCULADORA");

		cout << "\t\tSelecione uma das opções abaixo:\n" << endl;
		cout << "\t\t1 - Soma" << endl;
		cout << "\t\t2 - Subtração" << endl;
		cout << "\t\t3 - Multiplicação" << endl;
		cout << "\t\t4 - Divisão" << endl;
		cout << "\t\t5 - Potenciação" << endl;
		cout << "\t\t6 - Radiciação" << endl;
		cout << "\t\t7 - Bhaskara" << endl;
		cout << "\t\t0 - Encerrar programa" << endl;

		cout << "\n\t\tDigite a opção desejada: ";
		cin >> op;

		switch (op) {

		case 1:

			cabecalho("FUNÇÃO SOMA");

			do {

				cout << "\tInforme a quantidade de números que deseja somar: ";
				cin >> qtd;

				if (qtd <= 0) {
					cout << "\tQuantidade inválida. Informe um valor maior que zero.\n" << endl;
				}

			} while (qtd <= 0);

			cout << "\n";

			resultado = 0;

			for (int i = 0; i < qtd; i++) {

				cout << "\tInforme o " << i + 1 << "º número: ";
				cin >> numeros_soma;

				resultado += numeros_soma;
			}

			animacao();

			cout << "\n\tResultado da soma: " << resultado << endl;

			break;

		case 2:
			cabecalho("FUNÇÃO SUBTRAÇÃO");


			do {
				cout << "\tInforme a quantidade de números que deseja subtrair: ";
				cin >> qtd;
			} while (qtd <= 0);

			resultado = 0;

			for (int i = 0; i < qtd; i++) {

				cout << "\tInforme o " << i + 1 << "º número: ";
				cin >> numero_subtracao;
				if (i == 0) {
					resultado = numero_subtracao;
				}
				else {
					resultado -= numero_subtracao;
				}
			}
			animacao(); // void da animação de UI/UX

			cout << "\n\tResultado da subtração: " << resultado << endl;



			break;

		case 3:
			cout << "\n\tFunção de multiplicação selecionada.\n" << endl;
			break;

		case 4:
			cout << "\n\tFunção de divisão selecionada.\n" << endl;
			break;

		case 5:
			cout << "\n\tFunção de potenciação selecionada.\n" << endl;
			break;

		case 6:
			cout << "\n\tFunção de radiciação selecionada.\n" << endl;
			break;

		case 7:
			cout << "\n\tFunção de Bhaskara selecionada.\n" << endl;
			break;

		case 0:
			cout << "\n\tEncerrando o programa";
			for (int c = 0; c < 3; c++) {
				cout << ".";
				Sleep(200); //anotação: Sleep é uma função da biblioteca windows.h que pausa a execução do programa por um determinado número de milissegundos. No caso do código, Sleep(200) faz com que o programa espere por 200 milissegundos (ou 0,2 segundos) antes de continuar a execução. Isso é usado para criar um efeito de animação, onde os pontos são exibidos um a um com uma pequena pausa entre eles, simulando um processo de carregamento ou processamento.
			}


			Sleep(3000);
			cout << "\n\tPrograma Encerrado!\n" << endl;
			system("pause");
			break;

		default:
			cout << "\n\tOpção inválida. Tente novamente.\n" << endl;
			break;
		}
		

		if (op != 0) {
			cout << "\n";
			system("pause");

			for (int i = segundos; i > 0; i--) {

				cout << "\r\tA tela será limpa em " << i << " segundos..." << flush;
				Sleep(1000);
			}
		}

		cout << endl;
		system("cls");

	} while (op != 0);

	return 0;
}
