#include "huesped.h"

huesped::huesped() {

}

huesped::huesped(const string& nom, const string& num, const string& ape, const string& corre) {
    this-> nombre = nom;
    this-> apellido = ape;
    this-> correoElectronico = corre;
    this-> numTel = num;
    this->dinero = rand() % 1501 + 250;
}

int huesped::getDinero(){
    return this->dinero;
}

void huesped::pagarHabitacion(int& cobro) {
    this->dinero = dinero - cobro;
}

string huesped::getNombre() {
    return this->nombre;
}

string huesped::getApellido() {
    return this->apellido;
}
string huesped::getCorreo(){
    return this->correoElectronico;
}
string huesped::getNumTel() {
    return this->numTel;
}
bool huesped::operator==(const huesped &huespe){
    if(nombre == huespe.nombre && apellido == huespe.apellido && correoElectronico == huespe.correoElectronico && numTel == huespe.numTel)
        return true;
    else 
        return false;
}

bool huesped::operator()(huesped &first, huesped &other){
    bool ans = false;
    if(first.getNombre() != first.getNombre())
        ans = first.getNombre() < first.getNombre();
    else if(first.getApellido() != other.getApellido())
        ans = first.getApellido() < other.getApellido();
    else if(getCorreo() != other.getCorreo())
        ans = first.getCorreo() < other.getCorreo();
    else if(first.getNumTel() != other.getNumTel())
        ans = first.getNumTel() < other.getNumTel();
    else 
        ans = false;
    return ans;
}

void huesped::setDinero(int num){
    this->dinero = num;
}