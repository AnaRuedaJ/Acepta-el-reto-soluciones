//---------------------------------------------------------
// Problema 170 Triangulos con piedras
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

bool casoDePrueba() {

	int num_piedras;
	int lado;
	int resto;
	int j=0;
    int i;
	cin>>num_piedras;
	if (num_piedras==0)
		return false;
	else {
        for(i=1; j<=num_piedras-i; i++){
            j=j+i;
        }
		lado = i-1;
		resto=num_piedras - j;
		cout<<lado<<" "<<resto<<endl;
		return true;
	} // if-else marca de fin

} // casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
