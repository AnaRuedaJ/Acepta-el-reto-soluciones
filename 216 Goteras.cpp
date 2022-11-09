//---------------------------------------------------------
// Problema 216 Goteras
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

void casoDePrueba() {
    unsigned int capacidad, segundos, minutos, horas;

    cin >> capacidad;

    segundos = capacidad%60;
    minutos = (capacidad/60)%60;
    horas = ((capacidad/60)/60);

    if (horas < 10)
        cout << "0";
    cout << horas << ":";
    if(minutos<10)
        cout << "0";
    cout << minutos << ":";
    if(segundos<10)
        cout << "0";
    cout << segundos << endl;


} // casoDePrueba

//---------------------------------------------------------

int main() {

	unsigned int numCasos, i;

	cin >> numCasos;

	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;

} // main
