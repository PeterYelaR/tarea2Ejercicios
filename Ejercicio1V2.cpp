/*1. Crea un programa que simule un cajero automático con las siguientes 
opciones:
1. Consultar saldo.
2. Depositar dinero.
3. Retirar dinero.
4. Salir.
• Al iniciar, el saldo es de $500.
• Para depositar, el usuario debe ingresar el monto y sumarlo al saldo.
• Para retirar, el usuario debe ingresar el monto y verificar que el saldo 
sea suficiente; de lo contrario, mostrar un mensaje de error.
• El programa debe ejecutarse continuamente hasta que el usuario elija 
la opción de salir.*/

#include <iostream>
using namespace std;

int main() {
    int opc;
    int saldo = 500;

    do {
        cout << "\n--- MENU CAJERO AUTOMATICO ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;

        int monto;

        switch (opc) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;
                if (monto > 0) { //if anidado para no ingresar cantidades negativas
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Error: El monto debe ser positivo." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto > 0) { //if anidado para no ingresar cantidades negativas
                    if (monto <= saldo) {
                        saldo -= monto;
                        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                    } else {
                        cout << "Error: Saldo insuficiente." << endl;
                    }
                } else {
                    cout << "Error: El monto debe ser positivo." << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero. Hasta pronto!" << endl;
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }

    } while (opc != 4); 

    return 0;
}

