#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

int main() {
	int x, y, temp, puntaje1 = 0, puntaje2 = 0;
	char nombre[30];
	srand(time(NULL));
	cout << "Ingrese el nombre de su equipo: "; cin.getline(nombre, 30, '\n');
	cout << "Cuantos partidos faltan: "; cin >> temp;

	for (int i = 1; i <= temp; i++)
	{
		x = 0 + rand() % (100);
		y = 0 + rand() % (100);

		if (x == y)
		{
			puntaje1++; puntaje2++;
		}
		else if (x < y)
		{
			puntaje1 += 0;
			puntaje2 += 3;

		}
		else
		{
			puntaje1 += 3;
			puntaje2 += 0;
		}

	}

	cout << "\nEl puntaje de su equipo " << nombre << " Fue de: " << puntaje1;

	cout << "\n\nEl puntaje del equipo contrario fue de: " << puntaje2 << endl;

	if (puntaje1 == puntaje2)
	{
		cout << "\nHubo un empate de puntuaje";
	}
	else if (puntaje1 > puntaje2)
	{
		cout << "\nSu equipo " << nombre << " Es el ganador del torneo";
	}
	else
	{
		cout << "\nSu equipo " << nombre << " ha perdido el torneo, suerte a la proxima ;) ";
	}



	return 0;
}