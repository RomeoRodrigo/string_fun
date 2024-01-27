#include <iostream>


using namespace std;

// Funci�n para reorganizar y convertir iniciales a may�sculas
string reorganizarCadena(string nombreCompleto) {
	// Encontrar la posici�n del primer espacio (apellido paterno)
	size_t pos1 = nombreCompleto.find(' ');
	
	// Encontrar la posici�n del segundo espacio (apellido materno)
	size_t pos2 = nombreCompleto.rfind(' ');
	
	// Extraer cada parte de la cadena
	string apellidoPaterno = nombreCompleto.substr(0, pos1);
	string apellidoMaterno = nombreCompleto.substr(pos1 + 1, pos2 - pos1 - 1);
	string nombre = nombreCompleto.substr(pos2 + 1);
	
	// Convertir iniciales a may�sculas
	apellidoPaterno[0] = toupper(apellidoPaterno[0]);
	apellidoMaterno[0] = toupper(apellidoMaterno[0]);
	nombre[0] = toupper(nombre[0]);
	
	// Forma la cadena reorganizada
	string resultado = apellidoPaterno + " " + apellidoMaterno + " " + nombre;
	
	return resultado;
}

int main() {
	// Solicitar al usuario que ingrese la cadena de texto
	cout << "Ingrese nombre completo: ";
	string nombreCompleto;
	getline(cin, nombreCompleto);
	
	// Llamar a la funci�n para reorganizar la cadena
	string resultado;
	resultado=reorganizarCadena(nombreCompleto);
	
	// Mostrar el resultado
	cout << "Cadena reorganizada: "<<resultado<< endl;
	
	return 0;
}

