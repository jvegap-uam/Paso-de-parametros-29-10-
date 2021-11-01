#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int genNum(int i);
void mainMenu();

void parimpar() {
	int par_impar[10];
	cout << "----------------------" << endl;
	for (int i = 0; i < 10; i++) {
		par_impar[i]=genNum(i);
	}

	for (int i = 0; i < 10;i++) {
		cout << i+1 << ". " << par_impar[i] << endl;
	}
	system("pause");
	mainMenu();
}

int genNum(int i) {
	int upper = 999;
	int lower = 100;
	int x=0;
	if ((i+1) % 2 == 0) {
		do {
			x = (rand() % (upper - lower + 1)) + lower;
		} while (x % 2 != 0);
	} else {
		do {
			x = (rand() % (upper - lower + 1)) + lower;
		} while (x % 2 == 0);
	}

	return x;
}


