#pragma once
#include <iostream>
#include <stdio>
#include <string.h>

using namespace std;

class matriz{
	private:
		int columna,fila;
		double **matriz;

	public:
    	matriz();
    	matriz(int, int);
    	matriz(const matriz&);
    	~matriz();

    	const matriz operator+ (const matriz&)const;
    	const matriz operator- (const matriz&)const;
    	const matriz operator* (const matriz&)const;

  	  	void BorrarMatriz();
    	void llenadoUsuario();
    	void Transpuesta();	
};
