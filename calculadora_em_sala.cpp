#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

	int op = 0, resultado = 0, qtd = 0, numero_subtracao = 0;
	int numeros_soma = 0, segundos = 5;
	double dividendo = 0.0, divisor = 0.0, base = 0.0, expoente = 0.0, resultado_multi = 1, numero_multiplicacao = 0.0, radicando = 0.0;

	SetConsoleOutputCP(CP_UTF8);

	do {
		system("cls");

		cout << "\t =========================================== " << endl;
		cout << "\t ||            CALCULADORA C++            ||" << endl;
		cout << "\t =========================================== " << endl;

		cout << "\t\tSelecione uma das opções abaixo:\n" << endl;
		cout << "\t\t1 - Soma" << endl;
		cout << "\t\t2 - Subtração" << endl;
		cout << "\t\t3 - Multiplicação" << endl;
		cout << "\t\t4 - Divisão" << endl;
		cout << "\t\t5 - Potenciação" << endl;
		cout << "\t\t6 - Radiciação" << endl;
		cout << "\t\t7 - Bhaskara" << endl;
		cout << "\t\t0 - Encerrar programa" << endl;
		cout << "\n";
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "\n\t\tDigite a opção desejada: ";
		cin >> op;

		

		switch (op) {

		case 1:
			cout << "\t =========================================== " << endl;
			cout << "\t ||              FUNÇÃO SOMA               ||" << endl;
			cout << "\t =========================================== " << endl;

			

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

			cout << "\n\tResultado da soma: " << resultado << endl;

			break;

		case 2:
			cout << "\t =========================================== " << endl;
			cout << "\t ||           FUNÇÃO SUBTRAÇÃO             ||" << endl;
			cout << "\t =========================================== " << endl;


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

			cout << "\n\tResultado da subtração: " << resultado << endl;
			break;

		case 3:
			cout << "\t =========================================== " << endl;
			cout << "\t ||           FUNÇÃO MULTIPLICAÇÃO        || " << endl;
			cout << "\t =========================================== " << endl;

			cout << "\n\tInforme a quantidade de números que deseja multiplicar: ";
			cin >> qtd;

			for (int i = 0; i < qtd; i++) {
				cout << "\tInforme o " << i + 1 << "º número: ";
				cin >> numero_multiplicacao;
				resultado_multi *= numero_multiplicacao;
			}
			
			cout << "\n\tResultado da multiplicação: " << resultado_multi << endl;
			break;

		case 4:
			cout << "\t =========================================== " << endl;
			cout << "\t ||              FUNÇÃO DIVISÃO           || " << endl;
			cout << "\t =========================================== " << endl;

			cout << "\n\tDigite o dividendo: ";
			cin >> dividendo;


			do {
				cout << "\n\tDigite o divisor (Não pode ser menor que 0): ";
				cin >> divisor;

				if (divisor == 0) {

					cout << "ERRO! IMPOSSÍVEL DIVIDIR POR 0";
					break;

				}else {
					cout << "\n\tResultado da divisão: " << dividendo << "/" << divisor << " = " << dividendo / divisor << endl;
				}
			} while (divisor == 0);

			
			break;
			

		case 5:
			cout << "\t =========================================== " << endl;
			cout << "\t ||            FUNÇÃO POTENCIAÇÃO         || " << endl;
			cout << "\t =========================================== " << endl;

			cout << "\n\t Digite a base: ";
			cin >> base;

			cout << "\n\t Digite o expoente: ";
			cin >> expoente;

			cout << "\n\tResultado da Potenciação: " <<base << "^"<< expoente << " = " << pow(base, expoente) << endl;

			break;

		case 6:
			cout << "\t =========================================== " << endl;
			cout << "\t ||           FUNÇÃO RADICIAÇÃO           || " << endl;
			cout << "\t =========================================== " << endl;

			do
			{
				cout << "Digite o radicando: ";
				cin >> radicando;

				if (radicando == 0) {
					cout << "ERRO! Valor do Radicando não pode ser 0. Tente novamente \n" << endl;
				}
				else {
					cout << "\n\tResultado da radiciação: √" << radicando <<" = " << sqrt(radicando) << endl;
				}
			} while ( radicando == 0);

			break;

		case 7:
			cout << "\n\tFunção de Bhaskara selecionada.\n" << endl;
			break;

		case 0:
			cout << "\n\tEncerrando o programa";
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
