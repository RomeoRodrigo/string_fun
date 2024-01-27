#include <iostream>
#include <cctype>
#include <sstream>

using namespace std;

// Función para realizar la suma de una cadena numérica
int sumaCadenaNumerica(string cadena) {
	int suma = 0;
	stringstream ss(cadena);
	string numero;
	
	while (getline(ss, numero, '+')) {
		suma += stoi(numero);
	}
	
	return suma;
}

// Función para imprimir el nombre completo con apellidos primero y espacio
string imprimirNombreCompleto(string nombreCompleto) {
	stringstream ss(nombreCompleto);
	string palabra;
	string apellidos;
	
	// Almacenar apellidos primero
	while (ss >> palabra) {
		if (apellidos.empty()) {
			apellidos = palabra;
		} else {
			apellidos += " " + palabra;
		}
	}
	
	// Convertir iniciales a mayúsculas
	apellidos[0] = toupper(apellidos[0]);
	while (apellidos.find(' ') != string::npos) {
		size_t pos = apellidos.find(' ');
		apellidos[pos + 1] = toupper(apellidos[pos + 1]);
		apellidos.erase(pos, 1);
	}
	
	return apellidos;
}

// Función para ofuscar una palabra según las reglas dadas
string ofuscarPalabra(string palabra) {
	for (char &c : palabra) {
		switch (c) {
		case 'A':
		case 'a':
			c = '4';
			break;
		case 'E':
		case 'e':
			c = '3';
			break;
		case 'I':
		case 'i':
			c = '1';
			break;
		case 'O':
		case 'o':
			c = '0';
			break;
		case 'S':
		case 's':
			c = '5';
			break;
		case 'T':
		case 't':
			c = '7';
			break;
		default:
			break;
		}
	}
	
	return palabra;
}

// Función principal que contiene el menú
void menuPrincipal() {
	char opcion;
	
	do {
		cout << "Menu Principal" << endl;
		cout << "(1) - String suma de una cadena" << endl;
		cout << "(2) - String Nombre completo" << endl;
		cout << "(3) - String ofuscar" << endl;
		cout << "(s) - Salir" << endl;
		
		cout << "Ingrese la opción deseada: ";
		cin >> opcion;
		cin.ignore(); // Limpiar el buffer de entrada
		
		switch (opcion) {
		case '1': {
			string cadenaNumerica;
			cout << "Ingrese la cadena numérica (por ejemplo, \"15+5+3\"): ";
			getline(cin, cadenaNumerica);
			int resultado = sumaCadenaNumerica(cadenaNumerica);
			cout << "Resultado: " << resultado << endl;
			break;
		}
		case '2': {
			string nombreCompleto;
			cout << "Ingrese el nombre completo (por ejemplo, \"juan perez flores\"): ";
			getline(cin, nombreCompleto);
			string resultado = imprimirNombreCompleto(nombreCompleto);
			cout << "Nombre completo con apellidos primero: " << resultado << endl;
			break;
		}
		case '3': {
			string palabra;
			cout << "Ingrese la palabra a ofuscar: ";
			getline(cin, palabra);
			string resultado = ofuscarPalabra(palabra);
			cout << "Palabra ofuscada: " << resultado << endl;
			break;
		}
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
			break;
		}
		
	} while (opcion != 's' && opcion != 'S');
}

int main() {
	// Llamar a la función principal que contiene el menú
	menuPrincipal();
	
	return 0;
