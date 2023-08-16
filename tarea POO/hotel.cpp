#include "hotel.h"

hotel::hotel(const string& nombre){
    this->nombreHotel = nombre;

    for(int i=0 ; i < 10 ; i++){
        habitacionesHotel.push_back(habitacion(i));
    }

}

void hotel::mostrarHabitaciones(){
    cout << "Informacion de las habitaciones en el hotel " << this->nombreHotel << ":" << endl;
    for(int i=0; i<10 ; i++){

        cout << "Habitacion " << habitacionesHotel[i].getNumero() << ", Costo: " << habitacionesHotel[i].getCosto();
        if(habitacionesHotel[i].estaOcupada()){
            cout << ", Estado: Ocupada" << endl;
        }
        else {
            cout << ", Estado: Disponible" << endl;
        }

    }
}

void hotel::reservarHabitacion(int numeroHabitacion, huesped& huesped) {
    if(numeroHabitacion >= 1 || numeroHabitacion <= 10){
        if(!habitacionesHotel[numeroHabitacion].estaOcupada()){
            if(huesped.getDinero() >= habitacionesHotel[numeroHabitacion].getCosto()){
                cout << "Su reserva tuvo exito" << endl;
                int cobro = huesped.getDinero() - habitacionesHotel[numeroHabitacion].getCosto();
                huesped.pagarHabitacion(cobro);
                habitacionesHotel[numeroHabitacion].asociarHuesped(&huesped);
            }
            else{
                cout << "No cuenta con el valor suficiente" << endl;
            }
        }
        else{
            cout << "La habitacion seleccionada ya esta ocupada porfavor seleccione otra" << endl;
        }
    }
    else{
        cout << "El numero de habitacion no es el correcto" << endl;
    }

}

void hotel::eliminarReserva(reserva &reservita){
    huesped* hp = reservita.getHuesped();
    habitacion* hb = reservita.getHabitacion();
    for(int i = 0; i < reservas[*hp].size(); i++){
        if(reservas[*hp][i] == reservita){
            hb->setliberarHabitacion();
            reservas[*hp].erase(reservas[*hp].begin() + i);
        }
    }
    bool flag = false;
    for(int j = 0; j < pagos.size(); j++){
        if(*pagos[j].getReserva() == reservita){
            hp->setDinero(hp->getDinero() + pagos[j].getMonto());
            flag = true;
        }
    }
    if(flag == false)
        cout << "No tiene una reserva que cancelar" << endl;

}

void hotel::realizarPago(reserva &reservita){
    pago pagado = pago(reservita);
    pagos.push_back(pagado);
}
