#ifndef PROYECTO_HUESPED_H
#define PROYECTO_HUESPED_H
#include <string>
#include <cstdlib>

using namespace std;

class huesped {
private:
    string numTel;
    int dinero;
    string nombre;
    string apellido;
    string correoElectronico;

public:
    huesped();
    huesped(const string& nom, const string& num, const string& ape, const string& corre);
    int getDinero();
    void setDinero(int num);
    void pagarHabitacion(int& cobro);
    string getNombre();
    string getNumTel();
    string getApellido();
    string getCorreo();
    // Sobrecarga del operador
    bool operator==(const huesped &huespe);
    bool operator()(huesped &first, huesped &other);
};


#endif //PROYECTO_HUESPED_H