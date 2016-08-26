#include <iostream>
#include <stdio.h>
#include "matriz.h"

using namespace std;
int main(){
	matriz x(5, 6);
	matriz y(5, 6);
	x.llenadoUsuario();
	y.llenadoUsuario();
	matriz z = x + y;
	z.imprimir();
	return 0;
}