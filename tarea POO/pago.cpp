#include "pago.h"

pago::pago(reserva &re){
    huesped hp = *re.getHuesped();
    if(re.calcularCosto() < hp.getDinero()){
        this->reservita = &re;
        this->monto = re.calcularCosto();
        this->noches = re.getNumeroDeNoches();
        this->nombre = hp.getNombre();
        this->correo = hp.getCorreo();
        hp.setDinero(hp.getDinero() - monto);
    }
    else
        cout << "No tiene el dinero suficiente para reservar esta habitacion" << endl;
}

int pago::getMonto(){
    return monto;
}

reserva* pago::getReserva(){
    return reservita;
}