// Programa que nos indica si un alumno esta aprobado o suspenso segun su nota

#include <iostream>
using namespace std;

int main(){
	double nota;

	cout << "Introduzca nota del alumno\n";
	cin >> nota;
	
	if (nota <5)
		cout << "Suspenso\n";
	else if (nota < 7)
					cout << "Aprobado\n";
				else if (nota < 9)
								cout << "Notable\n";
							else
								cout << "Sobresaliente\n";
}
