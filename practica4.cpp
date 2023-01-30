// practica4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int iv;
	double prod_esca;
	double producto_Cruz_BxC;
	double vectorI, vectorJ, vectorK, im, jm, km;
	float vectorA[3];
	float vectorB[3];
	float vectorC[3];

	//llenar valores de vector A
	for (int iv = 0; iv < 3; iv++){
		cout << "ingrese los valores del vector1:"<< endl;
		cin >> vectorA[iv];
	}
	//llenar valores de vector B

	for (int iv = 0; iv < 3; iv++){
		cout << "ingrese los valores del vector 2:"<< endl;
		cin >> vectorB[iv];
	}
	//llenar valores de vector C

	for (int iv = 0; iv < 3; iv++){
		cout << "ingrese los valores del vector 3:"<< endl;
		cin >> vectorC[iv];
	}
	// PRODUCTO CRUZ 
	vectorI = ((vectorB[1] * vectorC[2]) - (vectorB[2]* vectorC[1]));
	vectorJ = ((vectorB[0] * vectorC[2]) - (vectorB[2] * vectorC[0]));
	vectorK = ((vectorB[0] * vectorC[1]) - (vectorB[1] * vectorC[0]));
	// producto_Cruz_BxC = vectorI - vectorJ + vectorK
	im = vectorA[0] * vectorI;
	jm = vectorA[1] * vectorJ;
	km = vectorA[2] * vectorK;
	//sumar el resultado de las multiplicaciones
	prod_esca = im - jm + km;
	cout << "\n\n";
	// mostrar el resultado
	cout << "El vector I" << vectorI << "\n";
	cout << "El vector J " << vectorJ << "\n";
	cout << "El vector K: " << vectorK << "\n";

	//resultado "producto escalar"
	cout << "El producto escalar triple es: " << prod_esca;




	return 0;
}

