// 217  -  ¿Qué lado de la calle?
//
// https://www.aceptaelreto.com
//
//--------------------------------

#include <iostream>
using namespace std;

bool casoDePrueba() {
    int n;           //lee caso de prueba

	cin >> n;          //este caso marca el final

	if (n <= 0)
		return false;
	else {

		if(n%2!= 0){

            cout << "IZQUIERDA" << endl;

		}else{
            cout << "DERECHA" << endl;
		}
		return true;
	}

} // casoDePrueba


int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
