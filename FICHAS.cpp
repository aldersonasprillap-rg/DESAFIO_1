#include <iostream>
#include "FICHAS.h"

using namespace std;

static unsigned long semilla = 123456789;

char obtenerCaracterFicha(int codigoFicha)
{
    switch (codigoFicha)
    {
    case FICHA_A: return 'A';
    case FICHA_B: return 'B';
    case FICHA_C: return 'C';
    case FICHA_D: return 'D';
    case FICHA_E: return 'E';
    case FICHA_F: return 'F';
    case ESTADO_LIBRE: return '-';
    case ESTADO_ESPECIAL: return '*';
    default: return '?';
    }
}

int generarFichaAleatoria()
{
    // Lo hago asi porque no quiero usar librerias extras.
    semilla = (1103515245UL * semilla + 12345UL) & 0x7FFFFFFFUL;
    return (int)(semilla % 6);
}
