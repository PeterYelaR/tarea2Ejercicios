/*2. Escribe un programa que simule una votación. El programa debe permitir a 
los usuarios votar por tres opciones:
• 1 para "Candidato A"
• 2 para "Candidato B"
• 3 para "Candidato C"
• 0 para terminar la votación.
El programa debe:
1. Contar los votos de cada candidato.
2. Al finalizar la votación, mostrar los resultados de la elección.
El ciclo debe continuar hasta que el usuario ingrese 0 para terminar.*/

#include <iostream>
using namespace std;

int main() {
	int opc, votosA = 0, votosB = 0, votosC = 0;
	
	do {
		cout << "\n--- MENU VOTACION ---\n";
        cout << "1. Candidato A\n";
        cout << "2. Candidato B\n";
        cout << "3. Candidato C\n";
        cout << "0. Terminar Votacion\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;
        
        switch (opc) {
        	case 1:
        		votosA++;
        		break;
        		
        	case 2:
        		votosB++;
        		break;
        		
        	case 3:
        		votosC++;
        		break;
        		
        	case 0:
        		cout << "Votacion finalizada" << endl;
        		break;
        		
        	default:
        		cout << "Opcion invalida. Intente nuevamente." << endl;
        		break;
		}
	} while (opc != 0);
	
	cout << "\n--- Resultados de la Eleccion ---\n";
    cout << "El candidato A obtuvo " << votosA << " votos.\n";
    cout << "El candidato B obtuvo " << votosB << " votos.\n";
    cout << "El candidato C obtuvo " << votosC << " votos.\n";
    
    return 0;
}
