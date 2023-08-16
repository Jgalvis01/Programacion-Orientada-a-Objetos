#ifndef PROYECTO_RESERVA_H
#define PROYECTO_RESERVA_H
#include "habitaciones.h"
#include "huesped.h"

class reserva{
private:
    huesped* hp;
    habitacion* hb;
    int numeroDeNoches;

public:
    huesped* getHuesped();
    habitacion* getHabitacion();
    reserva(huesped &h, habitacion &ha, int num);
    int calcularCosto();
    void mostrarDetalleReserva();
    void cancelaReserva();
    bool operator ==(reserva &reserv);
    int getNumeroDeNoches();
};

#endif //PROYECTO_RESERVA_H