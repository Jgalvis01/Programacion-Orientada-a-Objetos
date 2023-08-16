#ifndef PROYECTO_HABITACIONES_H
#define PROYECTO_HABITACIONES_H
#include "huesped.h"
#include <cstdlib>
#include <iostream>

using namespace std;

class habitacion {
private:
    int numero;
    int valor;
    bool estado;
    int tipo; 
    huesped* huespedAsociado = nullptr;

public:
    habitacion();
    habitacion(const int& numero);
    bool estaOcupada();
    int getNumero();
    int getCosto();
    void asociarHuesped(huesped* nuevoHuesped);
    void setliberarHabitacion();
    //sobrecarga de operadores
    bool operator==(habitacion &room);
};

#endif 
//PROYECTO_HABITACIONES_H