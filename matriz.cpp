#include <iostream>
#include <stdio.h>
#include <string>
#include "matriz.h"
#include <sstream>
using std::stringstream;

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
	cout << "Borrado\n";
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
const matriz& matriz::operator-(){
	for (int i = 0; i < fila; ++i){
		for (int j = 0; j < columna; ++j){
			m[i][j]*=-1;
		}
	}
	return *this;
}
const matriz matriz::operator++(){
		matriz r(columna, fila);
    for (int i = 0; i < columna; i++) {
        for (int j = 0; j < fila; j++) {
            r.m[i][j] = m[j][i];
        }
    }
    return r;
}
bool  matriz::operator==(matriz& r){
	bool resultado = true;
	if (r.fila != fila || r.columna != columna){
		resultado=false;
	}
	else{
		for (int i = 0; i < fila ; ++i){
			for (int j = 0; j < columna; ++j){
				if (m[i][j]==r.m[i][j]){
					resultado==true;
				}
				else{
					resultado=false;
					break;
				}
			}
			if (resultado==false){
				break;
			}
		}
	}

	return resultado;
}
bool matriz::operator!=(matriz& r){
	bool resultado = true;
	if (r.fila != fila || r.columna != columna){
		resultado=true;
	}
	else{
		for (int i = 0; i < fila ; ++i){
			for (int j = 0; j < columna; ++j){
				if (m[i][j]!=r.m[i][j])
				{
					resultado==true;
				}
				else{
					resultado=false;
					break;
				}
			}
			if (resultado==false)
			{
				break;
			}
		}
	}

	return resultado;
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




