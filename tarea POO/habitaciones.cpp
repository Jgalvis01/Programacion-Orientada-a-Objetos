#include "habitaciones.h"

habitacion::habitacion() {

}

habitacion::habitacion(const int& numero){
    this->numero = numero;
    this-> estado = false;
    this-> tipo = rand() % 2;
    if(tipo == 0)
        this-> valor = 250;
    else
        this-> valor = 500;
}

bool habitacion::estaOcupada(){
    return this->estado;
}

int habitacion::getCosto(){
    return this-> valor;
}

int habitacion::getNumero(){
    return this-> numero;
}

void habitacion::asociarHuesped(huesped* nuevoHuesped) {
    if (!estado && nuevoHuesped != nullptr) {
        huespedAsociado = nuevoHuesped;
        estado = true;
        cout << "Huesped " << nuevoHuesped->getNombre() << " ha sido asociado a la habitacion " << numero << endl;
    }
    else {
        cout << "No es posible asociar un huesped a esta habitacion." << endl;
    }
}