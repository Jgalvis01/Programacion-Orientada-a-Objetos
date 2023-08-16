#include "reserva.h"

reserva::reserva(huesped &h, habitacion &ha, int num){
    hp = &h;
    hb = &ha;
    numeroDeNoches = num;
}

int reserva::calcularCosto(){
    int ans;
    ans = numeroDeNoches * hb->getCosto();
    return ans;
}

void reserva::mostrarDetalleReserva(){
    printf("Huesped: %s\n" , (hp->getNombre()).c_str());
    printf("Numero y valor habitacion: %d , %d", (hb->getNumero(), hb->getCosto()));
    printf("Numero de noches: %d" , (numeroDeNoches));
}

huesped* reserva::getHuesped(){
    return hp;
}
habitacion* reserva::getHabitacion(){
    return hb;
}
bool reserva::operator ==(reserva &reserv){
    if(hp == reserv.hp && hb == reserv.hb)
        return true;
    else
        return false;
}

int reserva::getNumeroDeNoches(){
    return numeroDeNoches;
}