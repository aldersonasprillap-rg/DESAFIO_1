#include <iostream>
#include "tablero.h"

using namespace std;

void crearTablero(unsigned char *&tablero, int filas, int columnas)
{
    int x;
    int y;

    
    x = filas * columnas;

  
    y = (x * 3 + 7) / 8;

    tablero = new unsigned char[y];

    
    for (int i = 0; i < y; i++)
    {
        tablero[i] = 0;
    }
}

int obtenerFicha(unsigned char *tablero, int posicion)
{
    int bit;
    int byte;
    int desplazamiento;
    int x;
    
    bit = posicion * 3;

    byte = bit / 8;
    desplazamiento = bit % 8;
 
    x = (tablero[byte] >> desplazamiento) & 7;
 
    return x;
}

void cambiarFicha(unsigned char *tablero, int posicion, int ficha)
{
    int bit;
    int byte;
    int desplazamiento;

    bit = posicion * 3;

    byte = bit / 8;
    desplazamiento = bit % 8;

    tablero[byte] = tablero[byte] & ~(7 << desplazamiento);
 
    tablero[byte] = tablero[byte] | (ficha << desplazamiento);

    
}

void mostrarTablero(unsigned char *tablero, int filas, int columnas)
{
    int x;

    cout << endl;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            x = obtenerFicha(tablero, i * columnas + j);

            cout << x << " ";
        }

        cout << endl;
    }
}

void liberarTablero(unsigned char *&tablero)
{
    delete[] tablero;
    tablero = nullptr;
}
