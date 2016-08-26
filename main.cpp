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
					int matriz_eleccion = 0;
					int matriz_eleccion2 = 0;
					for (int i = 0; i < matrices.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion2;
					cout << endl;
					matriz suma = *matrices[matriz_eleccion] + *matrices[matriz_eleccion2];
					matriz* nueva = new matriz(suma);
					nueva -> imprimir();
					matrices.push_back(nueva);
					break;

				}
				case 2:{
					int matriz_eleccion3 = 0;
					int matriz_eleccion4 = 0;
					for (int i = 0; i < matrices.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion3;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion4;
					cout << endl;
					matriz resta_unaria = *matrices[matriz_eleccion3] - *matrices[matriz_eleccion4];
					matriz* nueva2 = new matriz(resta_unaria);
					nueva2 -> imprimir();
					matrices.push_back(nueva2);
					break;
				}
				case 3:{
					int matriz_eleccion5 = 0;
					int matriz_eleccion6 = 0;
					for (int i = 0; i < matrices.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion5;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion6;
					cout << endl;
					matriz resta = *matrices[matriz_eleccion5] - *matrices[matriz_eleccion6];
					matriz* nueva3 = new matriz(resta);
					nueva3 -> imprimir();
					matrices.push_back(nueva3);
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
						cout<<i<<endl;
					}
					cout<<"Elija la matriz a llenar: ";
					cin >>eleccion;
					matrices[eleccion]->llenadoUsuario();
					break;
				}
				case 10:{
					int eleccion2 = 0;
					for (int i = 0; i < matrices.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz a imprimir: ";
					cin >>eleccion2;
					matrices[eleccion2]->llenadoUsuario();
					break;
				}

			}
		}
	return 0;
}