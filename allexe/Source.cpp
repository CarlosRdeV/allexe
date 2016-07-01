#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	int num;
	float a, b, c, x1, x2;
	char exe;
	cout << "***EJERCICIOS PROGRAMACION***\nEste programa le ayudara a visualizar todos los ejercicios realizados en la clase de Elementos de programacion estructurada\n\n1 Ecuacion: Formula general\n2 Numero par o impar\n\nSeleccione el ejercicio que desea ejecutar: ";
	cin >> exe;
	switch (exe)
	{
	case '1':
		system("CLS");
		cout << fixed << setprecision(2);
			cout << "***Ecuacion: Formula general***\nEste programa le ayudara a conocer los valores para resolver la formula general (x1,x2)\nInserte el valor de a ";
			cin >> a;
			cout << "\nInserte el valor de b ";
			cin >> b;
			cout << "\nInserte el valor de c ";
			cin >> c;
			x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
			x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;
			cout << "El valor de x1 es igual a " << x1 << " y x2 es igual a " << x2 << "\n";
			break;

	case '2':
		system("CLS");
		cout << "***Numero par o impar***\nEste programa le ayudara a conocer si el numero insertado es par o impar\nInserte un numero: ";
		cin >> num;
		if (num % 2 == 0) {
			cout << "Numero par\n";
		}else{
			cout << "Numero impar\n";
		}
		break;
default			:
		cout << "\nOpcion no disponible\n";
		break;
	}
	system("PAUSE");
	return 0;


}