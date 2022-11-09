//Problema 117 Fiesta Aburrida
//
//-------------------------------------------
#include <iostream>
using namespace std;

void casoDePrueba() {

    string soy, nombre;
    cin >> soy;
    cin >> nombre;
    cout << "Hola, " << nombre << "." << endl;

}//casoDePrueba
//------------------------------------
int main() {

	unsigned int numCasos, i;

	cin >> numCasos;

	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;

} // main
