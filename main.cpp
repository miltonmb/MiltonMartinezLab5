#include <iostream>
#include <stdio.h>
#include "matriz.h"
#include <vector>
using std::vector;
using namespace std;
int main(){
		vector<matriz*> matrices;
		vector<matriz*> matrices1;
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
					matrices1.push_back(m);
					cout << "Agregado\n";
					break;
				}
				case 1:{
					int matriz_eleccion = 0;
					int matriz_eleccion2 = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion2;
					cout << endl;
					matriz suma = *matrices1[matriz_eleccion] + *matrices1[matriz_eleccion2];
					matriz* nueva = new matriz(suma);
					nueva -> imprimir();
					matrices.push_back(nueva);
					break;

				}
				case 2:{
					int matriz_eleccion3 = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion3;
					matriz resta_unaria= -*matrices1[matriz_eleccion3];
					matriz* nueva2 = new matriz(resta_unaria);
					nueva2 -> imprimir();
					matrices.push_back(nueva2);
					break;
				}
				case 3:{
					int matriz_eleccion5 = 0;
					int matriz_eleccion6 = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion5;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion6;
					cout << endl;
					matriz resta = *matrices1[matriz_eleccion5] - *matrices1[matriz_eleccion6];
					matriz* nueva3 = new matriz(resta);
					nueva3 -> imprimir();
					matrices.push_back(nueva3);
					break;
				}
				case 4:{
					int matriz_eleccion7 = 0;
					int matriz_eleccion8 = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion7;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> matriz_eleccion8;
					cout << endl;
					matriz mult = *matrices1[matriz_eleccion7] * *matrices1[matriz_eleccion8];
					matriz* nueva4 = new matriz(mult);
					nueva4 -> imprimir();
					matrices.push_back(nueva4);
					break;
				}
				case 5:{
					int matriz_eleccion9 = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz uno: ";
					cin >>matriz_eleccion9;
					matriz trans=  *matrices1[matriz_eleccion9];
					matriz* n_trans = new matriz(++trans);
					n_trans -> imprimir();
					matrices.push_back(n_trans);
					break;
				}
				case 6:{
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					int eleccion_ma = 0;
					int eleccion_ma2 = 0;
					cout<<"Elija la matriz uno: ";
					cin >>eleccion_ma;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> eleccion_ma2;
					cout << endl;
					if(*matrices1[eleccion_ma]==*matrices1[eleccion_ma]){
						cout << "VERDADERO";
					}else{
						cout << "FALSO";
					}

					
					break;
				}
				case 7:{
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					int eleccion_ma3 = 0;
					int eleccion_ma4 = 0;
					cout<<"Elija la matriz uno: ";
					cin >>eleccion_ma3;
					cout << endl;
					cout << "Elija la matriz dos: ";
					cin >> eleccion_ma4;
					cout << endl;
					if(*matrices1[eleccion_ma3]!=*matrices1[eleccion_ma4]){
						cout << "VERDADERO";
					}else{
						cout << "FALSO";
					}
					break;
				}
				case 8:{
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					int eleccion_d= 0;
					cout << "elija la matriz uno: ";
					cin >> eleccion_d;
					cout << endl;
					matriz x= *matrices1[eleccion_d];
					matriz* det = new matriz(x);
					det->imprimir();
					matrices.push_back(det);
					break;
				}
				case 9:{
					int eleccion = 0;
					for (int i = 0; i < matrices1.size(); ++i){
						cout<<i<<endl;
					}
					cout<<"Elija la matriz a llenar: ";
					cout << endl;
					cin >>eleccion;
					matrices1[eleccion]->llenadoUsuario();
					break;
				}
				case 10:{
					int el = 0;
					cout << "1.Imprimir del vector de resultados\n2.Imprimir del vector Recolector";
					cin >> el;
					cout << endl;
					switch(el){
						case 1:{
							int eleccion2 = 0;
							for (int i = 0; i < matrices.size(); ++i){
								cout<<i<<endl;
							}
							cout<<"Elija la matriz a imprimir: ";
							cin >>eleccion2;
							cout << endl;
							matrices[eleccion2]->imprimir();
							break;
						}
						case 2:{
							int eleccion3 = 0;
							for (int i = 0; i < matrices1.size(); ++i){
								cout<<i<<endl;
							}
							cout<<"Elija la matriz a imprimir: ";
							cin >>eleccion3;
							cout << endl;
							matrices1[eleccion3]->imprimir();
							break;
						}						
					}
					break;
				}

			}
		}
		matrices1.clear();
		matrices.clear();
	return 0;
}