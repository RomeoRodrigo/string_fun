#include <iostream>
using namespace std;
/*ingresar una cadena nombre, ap paterno ap materno
ej. juan perez flor
Perez Flor Juan
*/
//declaracion de la variables globales
string nombre_completo, nombre, ap1, ap2;
//para encontrar cadena de nombre y apellidos
void seperar_nom()
{
	int pin, pfin;
	pin=0;
	pfin=nombre_completo.find(" ",pin);
	nombre=nombre_completo.substr(pin,(pfin-1));
	nombre[0]=toupper(nombre[0]);
	/*pin=pfin+1;
	pfin=nombre_completo.find(" ",pin);
	ap1=nombre_completo.substr(pin, (pfin-1))
	*/
	
}




int main(int argc, char *argv[]) {

	
	cout<<"Ingrese su nombre completo";
	getline(cin, nombre_completo);
	cin>>nombre_completo;
	//imprimir nombre
	cout<<"nombre: "<<nombre<<endl;
	cout<<"nombre: "<<nombre<<endl;
	separar_nom();
	imprimir_nom();
	return 0;
}

