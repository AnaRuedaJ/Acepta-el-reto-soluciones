//---------------------------------------------------------
// 149 San Fermines
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

bool casoDePrueba() {
    int n, velocidad, velMax = 0;
    cin >> n;

	if (!cin)
		return false;
	else {
		for(int i=0; i<n; i++){
            cin >> velocidad;
            if(velocidad > velMax){
                velMax = velocidad;
            }
		}
		cout << velMax << endl;
		return true;
	} // if-else marca de fin

} // casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
