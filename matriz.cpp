#include <iostream>
#include <stdio.h>
#include <string>
#include "matriz.h"
using namespace std;

matriz::matriz(int rows , int cols){
	columna = cols;
	fila = rows;
	m = new double*[fila];
	for (int i = 0; i < fila; i++) {
		m[i] = new double[fila];
	}
}

matriz::~matriz(){
	cout << "Borrado";
}
const matriz matriz::operator+(const matriz& r)const{
	matriz result(fila, columna);
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            result.m[i][j] = m[i][j] + r.m[i][j];
        }
    }
    return result;
}

const matriz matriz::operator-(const matriz& r)const{
	matriz result(fila, columna);
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            result.m[i][j] = m[i][j] - r.m[i][j];
        }
    }
    return result;
}


void matriz::imprimir(){
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}
void matriz::llenadoUsuario(){
	double m_ele = 0;
    for (int i = 0; i < fila; i++) {
        cout << "Fila: " << i + 1 << endl;
        for (int j = 0; j < columna; j++) {
            cout << "Ingresa el elemento: " << j + 1 << endl;
            cin >> m_ele;
            m[i][j] = m_ele;
        }
        cout << endl;
    }
}




