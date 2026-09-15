#ifndef TABLERO_H
#define TABLERO_H

void crearTablero(unsigned char *&tablero, int filas, int columnas);
void mostrarTablero(unsigned char *tablero, int filas, int columnas);
int obtenerFicha(unsigned char *tablero, int posicion);
void cambiarFicha(unsigned char *tablero, int posicion, int ficha);
void liberarTablero(unsigned char *&tablero);

#endif

