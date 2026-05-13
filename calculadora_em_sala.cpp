#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

	int op = 0, resultado = 0, qtd = 0, numero_subtracao = 0;
	int numeros_soma = 0;
	double dividendo = 0.0, divisor = 0.0, base = 0.0, expoente = 0.0, resultado_multi = 1;
	double numero_multiplicacao = 0.0, radicando = 0.0, a = 0.0, b = 0.0, c = 0.0, delta = 0.0, x1 = 0.0, x2 = 0.0;

	SetConsoleOutputCP(CP_UTF8);

	do {
		system("cls");

		cout << "\t =========================================== " << endl;
		cout << "\t ||            CALCULADORA C++            ||" << endl;
		cout << "\t =========================================== " << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|" << endl;
		cout << "Selecione uma das opções abaixo:					       |" << endl;
		cout << "1 - Soma								       |" << endl;
		cout << "2 - Subtração								       |" << endl;
		cout << "3 - Multiplicação							       |" << endl;
		cout << "4 - Divisão								       |" << endl;
		cout << "5 - Potenciação								       |" << endl;
		cout << "6 - Radiciação								       |" << endl;
		cout << "7 - Bhaskara						                       |" << endl;
		cout << "0 - Encerrar programa						               |" << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|" << endl;
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
				if( i == 0){
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

			resultado_multi = 1;
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
				cout << "\n\tDigite o divisor (Não pode ser menor ou igual a 0): ";
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

				if (radicando < 0) {
					cout << "ERRO! VALOR DO RADICANDO NÃO PODE SER MENOR QUE 0 \n" << endl;
				}
				else {
					cout << "\n\tResultado da radiciação: √" << radicando <<" = " << sqrt(radicando) << endl;
				}
			} while ( radicando < 0);

			break;

		case 7:
			cout << "\t =========================================== " << endl;
			cout << "\t ||              FUNÇÃO BHASKARA          || " << endl;
			cout << "\t =========================================== " << endl;

			cout << "\n\tDigite o coeficiente A: ";
			cin >> a;

			cout << "\n\tDigite o coeficiente B: ";
			cin >> b;

			cout << "\n\tDigite o coeficiente C: ";
			cin >> c;

			delta = (pow(b, 2)) - 4*a*c;
			
			if (delta < 0) {
				cout << "A equação não possui raízes reais!";
			}else if (delta == 0) {
				x1 = -b / (2*a);
				cout << "\n\tResultado da Fórmula de Bhaskara: " << endl;
				cout << "\tX = " << x1 << endl;
			}else {
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b - sqrt(delta)) / (2*a);
				cout << "\n\tResultado da Fórmula de Bhaskara: " << endl;
				cout << "\tX1 = " << x1 << endl;
				cout << "\tX2 = " << x2 << endl;
			}
			break;

		case 0:
			for (int c = 5; c > 0; c--) {
				cout << "\r\t Encerrando o programa em " << c << " segundos..." << flush;
				Sleep(1000);
				
		    }
			cout << "\n\t Programa Encerrado! Até a próxima.";
			Sleep(1000);
			break;

			/* Fallthrough  */
			// esse comentário em cima é porque o compilador estava implicando que o case 7 não tinha um break, mas tinha, isso resolveu.
			
		default:
			cout << "\n\tOpção inválida. Tente novamente.\n" << endl;
			break;
		}
		

		if (op != 0) {
			cout << "\n";
			system("pause");

			for (int i = 5; i > 0; i--) {

				cout << "\r\tA tela será limpa em " << i << " segundos..." << flush;
				Sleep(1000);
			}
		}

		cout << endl;
		system("cls");

	} while (op != 0);

	return 0;
}
