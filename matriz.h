#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class matriz{
	private:
		int columna,fila;
		double **m;

	public:
    	matriz();
    	matriz(int, int);
    	matriz(const matriz&);
    	~matriz();

    	const matriz operator+ (const matriz&)const;
    	const matriz operator- (const matriz&)const;
    	const matriz operator* (const matriz&)const;
    	const matriz& operator-();
    	const matriz operator++();
    	const matriz operator--();

  	  	void BorrarMatriz();
    	void llenadoUsuario();
    	void imprimir();
};
