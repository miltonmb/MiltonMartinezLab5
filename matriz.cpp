#include <iostream>
#include <stdio.h>
#include <string>
#include "matriz.h"
using namespace std;

matriz::matriz(int filas , int cols){
	columna = cols;
	fila = filas;
	m = new double*[fila];
	for (int i = 0; i < fila; i++) {
		m[i] = new double[fila];
	}
}
matriz::matriz(const matriz &m){
    *this = m;
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
const matriz matriz::operator* (const matriz& r)const{
    matriz result(fila, r.columna);
    double total;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < r.columna; j++) {
            for (int k = 0; k < columna; k++) {
                total += (m[i][k] * r.m[k][j]);
            }
            result.m[i][j] = total;
            total = 0;
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




