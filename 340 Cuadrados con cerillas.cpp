//---------------------------------------------------------
// 340 Cuadrados con cerillas
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

void casoDePrueba (){

    int horizontal, vertical;
    int num1, num2, num;

    cin >> horizontal;
    cin >> vertical;

    num1 = (horizontal + 1) * vertical;
    num2 = (horizontal) * (vertical + 1);
    num = num1 + num2;

    cout << num <<endl;


}// casoDePrueba

//---------------------------------------------------------

int main() {

	unsigned int numCasos, i;

	cin >> numCasos;

	for (i = 0; i < numCasos; ++i) {
		casoDePrueba();
	}

	return 0;

} // main
