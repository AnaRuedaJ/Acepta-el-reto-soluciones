// 191 Problemas de ser rico
//
//-----------------------------------------------
#include <iostream>

using namespace std;

void casoDePrueba(){
   long int num, suma;
   long int n, max, adyac;

   cin >> n;
   cin >> max;
   cin >> adyac;

   num = max;
   suma = max;

   for (int i= 1; i<n; i++) {
    num = num - adyac;
    suma = suma + num;

    }

    cout << suma << endl;

}// casoDePrueba
int main() {

	unsigned int numCasos, i;

	cin >> numCasos;

	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;

} // main

//------------------------------------------------
