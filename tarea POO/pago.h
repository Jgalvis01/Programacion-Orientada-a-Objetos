#ifndef PROYECTO_PAGO_H
#define PROYECTO_PAGO_H
#include"reserva.h"

class pago {
private:
    int monto;
    int noches;
    string nombre;
    string correo;
    reserva* reservita;


public:
    pago(reserva &re);
    int getMonto();
    reserva* getReserva();

};


#endif //PROYECTO_PAGO_H
