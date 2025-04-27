/*4. Desarrolla un programa que pida al usuario un número n y luego 
imprima todos los números divisibles por 3 y 5 en el rango de 1 a n. 
Utiliza una estructura de repetición para iterar sobre los números.
Consideraciones:
• El ciclo debe verificar si cada número es divisible por 3 y 5.
• Imprime todos los números que cumplan la condición hasta 
llegar a n.*/

#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Ingrese un numero entero positivo: ";
	cin >> n;
	
	while (n < 1){
		cout << "Por favor ingrese un numero en el rango de 1 a n: ";
		cin >> n;
	}
	
	cout<< "\nNumeros divisibles para 3 y 5 en el rango de 1 a " << n << ":\n";
	cout<< "\n";
	for (int i=1; i<=n; i++){
		if (i%3 == 0 && i%5 == 0){
			cout  << i << " ";
		}
	}
	cout<< "\n";
	
	return 0;
}
