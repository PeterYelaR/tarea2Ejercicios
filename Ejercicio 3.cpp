/*3. Crea un programa que permita simular diferentes métodos de pago en 
un sistema de compras. El menú debe ofrecer las siguientes opciones:
1. Pagar con tarjeta de crédito.
2. Pagar con tarjeta de débito.
3. Pagar en efectivo.
4. Salir.
Según la opción seleccionada, el programa debe pedir al usuario el 
monto total de la compra y realizar el cálculo del pago:
• Para tarjeta de crédito: Se aplica una comisión del 5%.
• Para tarjeta de débito: No se aplica comisión.
• Para pago en efectivo: Se aplica un descuento del 2%.
El ciclo debe continuar hasta que el usuario decida salir.
Consideraciones:
• Al final de cada operación, el programa debe mostrar el monto 
total después de aplicar el descuento o la comisión, según 
corresponda.
• Al elegir salir, el programa debe finalizar la ejecución.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int opc;
	float total;
	
	do {
		cout << "\n--- MENU DE PAGOS ---\n";
        cout << "1. Pago con tarjeta de credito\n";
        cout << "2. Pago con tarjeta de debito\n";
        cout << "3. Efectivo\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;
        
        if (opc >=1 && opc <=3) { //if simple para optimizar codigo
        	cout<< "\nIngrese el monto de la compra: ";
            cin >> total;
		}
        switch(opc) {
        	case 1:
        		total += total * 0.05; // Se aplica comisión del 5% al monto total por pago con tarjeta de crédito
        		cout << fixed << setprecision(2);
        		break;
        	
        	case 2:
        		break;
        		
        	case 3:
        		total -= total * 0.02; // Se aplica descuento del 2% al monto total por pago con efectivo
        		cout << fixed << setprecision(2);
        		break;
        		
        	case 4:
        		cout << "\nGracias. Hasta pronto!" << endl;
        		break;
        		
        	default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
		}
		
		if (opc >=1 && opc <=3) { //if simple para optimizar codigo
			cout << "El total a pagar es de: $" << total <<"\n";
		}
		
	} while (opc != 4);
	
	return 0;
}

