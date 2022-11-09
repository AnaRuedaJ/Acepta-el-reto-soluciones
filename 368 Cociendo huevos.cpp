//---------------------------------------------------------
// 368 Cociendo huevos
//
// https://www.aceptaelreto.com
//
//---------------------------------------------------------

#include <iostream>
using namespace std;

bool casoDePrueba() {

    int c, h, num;

    cin >> h;
    cin >> c;

	if ((h==0)&& (c == 0))
		return false;
	else {
       if (h <= c)
            num = 10;
        else
            if (h % c !=0)
                num = (10 + (h/c)*10);
            else
                num = ((h/c) * 10);
        cout << num << endl;
		return true;
	} // if-else marca de fin

} // casoDePrueba

//---------------------------------------------------------

int main() {

	while (casoDePrueba()) {
	}

	return 0;

} // main
