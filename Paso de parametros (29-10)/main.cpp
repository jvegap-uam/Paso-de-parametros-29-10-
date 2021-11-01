#include <iostream>
#include <time.h>
using namespace std;

void date();
void mainMenu();
void parimpar();

int main() {
	srand(time(0));
	mainMenu();
	return 0;
}

void mainMenu() {
	int opt;
	cout << "----------------------" << endl;
	cout << "1. Escribir un programa mediante una funcion que acepte un numero de dia, mes y año y lo visualice en el formato. dd / mm / aaaa." << endl;
	cout << "2. Cargue de forma automatica numeros pares en las posiciones que sean pares e impares donde las posiciones sean impares y lo imprima en pantalla." << endl;
	cout << "Elija: "; cin >> opt;
	switch (opt) {
	case 1:
		date();
		break;
	case 2:
		parimpar();
		break;
	}
}