#ifndef PROYECTO_HOTEL_H
#define PROYECTO_HOTEL_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "habitaciones.h"
#include "huesped.h"
#include "pago.h"
#include "reserva.h"
#include <map>
using namespace std;

class hotel {
    private:
        string nombreHotel;
        vector<habitacion> habitacionesHotel;
        vector<pago> pagos;
        map<huesped,vector<reserva>, operator()> reservas;

    public:
        hotel(const string& nombre);
        void mostrarHabitaciones();
        void reservarHabitacion(int numeroHabitacion, huesped& huesped);
        void agregarHabitacion(habitacion hab);
        void eliminarReserva(reserva &reservita);
        void realizarPago(reserva &reservita);
    };



#endif //PROYECTO_HOTEL_H
