//---------------------------------------------------------
// 156 Ascensor
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
#include<cmath>
using namespace std;

bool casoDePrueba() {

    int plantaInicioDia, plantaAnt, planta;

    cin>>plantaInicioDia;
    if(plantaInicioDia<0)
        return false;

    else{
        int suma=0;
        plantaAnt = plantaInicioDia;

    do{
        cin>>planta;
        if(planta>=0){
            int dist = abs(planta-plantaAnt);
            suma += dist;
            plantaAnt = planta;
        }
    }while(planta<=0);

        cout<<suma<<endl;

        return false;
    }

}// casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
