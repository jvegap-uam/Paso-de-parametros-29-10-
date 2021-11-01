#include <iostream>

using namespace std;
void mainMenu();
void makeDate(int dia, int mes, int anio);

void date() {
	int dia, mes, anio;
	cout << "----------------------" << endl;
	cout << "Dia: "; cin >> dia;
	cout << "Mes: "; cin >> mes;
	cout << "Anio: "; cin >> anio;

	makeDate(dia, mes, anio);
	system("pause");
	mainMenu();
}

void makeDate(int dia, int mes, int anio) {
	cout << "-------------------------" << endl;
	cout << "Fecha: " << dia << "/" << mes << "/" << anio << endl;
}