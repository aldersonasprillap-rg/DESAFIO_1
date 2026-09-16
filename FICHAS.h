#ifndef FICHAS_H
#define FICHAS_H

const int FICHA_A = 0; // 000
const int FICHA_B = 1; // 001
const int FICHA_C = 2; // 010
const int FICHA_D = 3; // 011
const int FICHA_E = 4; // 100
const int FICHA_F = 5; // 101

const int ESTADO_LIBRE = 6;    // 110
const int ESTADO_ESPECIAL = 7; // 111

char obtenerCaracterFicha(int codigoFicha);
int generarFichaAleatoria();

#endif
