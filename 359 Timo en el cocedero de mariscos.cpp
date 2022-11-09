//---------------------------------------------------------
// Problema 359 Timo en el cocedero de mariscos
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

void casoDePrueba() {

    int sumaMejillones=0;           //Contador
    int numConchas=0;
    int mejillones;                 //Contador

    cin>>mejillones;
    while(mejillones>=0){
        sumaMejillones += mejillones; //sumaMejillones = sumaMejillones + mejillones
        numConchas++;

        cin>>mejillones;
    }
    if (sumaMejillones>numConchas){
        cout<<"Suerte"<<endl;
    }else if(sumaMejillones==numConchas){
        cout<<"Justo"<<endl;
    }else{
        cout<<"Timo"<<endl;
    }
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
