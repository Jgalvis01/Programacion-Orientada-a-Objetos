#include "hotel.h"
#include "habitaciones.h"
#include "huesped.h"

int main() {

    hotel hotel1("los wuachiwas");
    habitacion hb(1);
    hotel1.agregarHabitacion(hb);
    hotel1.mostrarHabitaciones();
    huesped huesped1("Kevin","3159214124", "Yavari", "kevinyavari@javerianacali.edu.co");
    int habitacion = 1;
    hotel1.reservarHabitacion(habitacion,huesped1);
    hotel1.mostrarHabitaciones();
    return 0;
}
