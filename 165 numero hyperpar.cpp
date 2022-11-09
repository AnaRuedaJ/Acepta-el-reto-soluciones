//---------------------------------------------------------
// Problema 165 Número hyperpar
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;


bool esHyperpar(int num){
    int digito;
    bool hyperpar = true;
    while(num>0 && hyperpar){
        digito=num%10;
        if(digito%2 != 0){
            hyperpar=false;
        }
        num = num/10;
    }
    return hyperpar;
}

bool casoDePrueba() {

    int num;
	//leer caso de prueba
	cin>>num;
	if (num<0)
		return false;
	else {
		// CÓDIGO PRINCIPAL AQUí
		if(esHyperpar(num))
            cout<<"SI"<<endl;
        else
            cout<<"NO"<<endl;
		return true;
	} // if-else marca de fin

} // casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
