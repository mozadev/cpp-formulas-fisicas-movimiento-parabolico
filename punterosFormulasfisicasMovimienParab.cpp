#include<iostream>
#include<locale.h>
#include <conio.h>
#include <math.h>

using namespace std;

void Ingresar_datos(double* velocidadInicial, double* anguloDisparo)
{
	double velo;
	cout << "ingrese la velocidad inicial:" << endl;
	cin >> velo;
	*velocidadInicial = velo;
	double angu;
	cout << "ingrese el angulo de disparo:" << endl;
	cin >> angu;
	*anguloDisparo = angu;
}

void Form_esp(double* velocidadInicial, double* anguloDisparo, double* gravedad)
{
	double tv = 2 *( *velocidadInicial) * sin(*anguloDisparo) / *gravedad;
	double Hm = pow(*velocidadInicial, 2) * pow(sin(*anguloDisparo), 2) / 2 *(* gravedad);
	double Dm = pow(*velocidadInicial, 2) * sin(2 * sin(*anguloDisparo))/ (*gravedad);

	
	cout << "el tiempo de vuelo es: " << tv << endl;
	cout << "la altura maxima  es: " << Hm << endl;
	cout << "la Distancia maxima  es: " << Dm << endl;
}



int main()
{
	double gravedad = 9.81;
	double velocidadInicial;
	double anguloDisparo;
	Ingresar_datos(&velocidadInicial, &anguloDisparo);
	Form_esp(&velocidadInicial, &anguloDisparo, &gravedad);

}