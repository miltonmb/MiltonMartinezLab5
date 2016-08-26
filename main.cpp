#include <iostream>
#include <stdio.h>
#include "matriz.h"
#include <vector>
using std::vector;
using namespace std;
int main(){
		vector<matriz*> matrices;
		int opcion = 0;
		char r = 'S';
		while(r == 's'|| r == 'S'){
			cout << "Que desea hacer:\n0.Agregar\n1.Suma\n2.Menos unario\n3.Resta\n4.Multiplicacion\n5.Transpuesta\n6.Comparacion\n7.Diferencia\n8.Determinante\n9.Llenar una matriz\n10.Imprimir una Matriz"<<endl;
			cin >> opcion;
			switch(opcion){
				case 0:{
					double fila,columna;
					cout << "Ingrese fila: ";
					cin >> fila;
					cout << endl;
					cout << "Ingrese columna: ";
					cin >> columna;
					cout << endl;
					matriz* m = new matriz(fila,columna);
					matrices.push_back(m);
					cout << "Agregado\n";
					break;
				}
				case 1:{
					break;
				}
				case 2:{
					break;
				}
				case 3:{
					break;
				}
				case 4:{
					break;
				}
				case 5:{
					break;
				}
				case 6:{
					break;
				}
				case 7:{
					break;
				}
				case 8:{
					break;
				}
				case 9:{
					int eleccion = 0;
					for (int i = 0; i < matrices.size(); ++i){
						cout<<i;
					}
					cout<<"Elija la matriz a imprimir: ";
					cin >>eleccion;
					matrices[eleccion]->imprimir();
					break;
				}
				case 10:{
					break;
				}

			}
		}
	return 0;
}