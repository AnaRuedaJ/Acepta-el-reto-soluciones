//---------------------------------------------------------
// Problema 164 Area de un rectangulo
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

bool casoDePrueba() {

    int a1, a2, b1, b2, area;

    cin>>a1>>a2>>b1>>b2;

	area = (b1-a1)*(b2-a2);
	if ((a1>b1)||(a2>b2))
		return false;
	else{
        area = (b1-a1)*(b2-a2);
		cout<<area<<endl;

		return true;
	} // if-else marca de fin

} // casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
