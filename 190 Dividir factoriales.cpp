// Problema 190 - Dividir factoriales
//
// Acepta el reto
//
//-----------------------------------------
#include <iostream>
#include <climits>
using namespace std;

bool casoDePrueba (){

    long int num, den, contador;
    unsigned long long int resultado = 1;

    cin>>num;
    cin>>den;

    if(num<den)
        return false;
    else {

            contador = num - den;
            while (contador != 0){
                        resultado = resultado * num;
                        num = num - 1;
                        --contador;
                        if (resultado >= LLONG_MAX)
                        contador = 0;

            }
            cout<<resultado<<endl;
            return true;

    }

} //CasoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main

