#include "Coche.h"
#include <string>
#include <sstream>

using namespace std;

Coche::Coche(string marca, string modelo, string matricula, float kilometraje, int capacidad, string tipo, Agencia* agencia){
    this->marca = marca;
    this->modelo = modelo;
    this->matricula = matricula;
    this->kilometraje = kilometraje;
    this->capacidad = capacidad;
    this->agencia = agencia;
    this->tipo = tipo;
}
Coche::Coche()
{
    this->marca = "";
    this->modelo = "";
    this->matricula = "";
    this->kilometraje = 0.0F;
    this->capacidad = 0;
    this->agencia = new Agencia();
    this->tipo = "";
}
Coche::Coche(const Coche &c)
{
    this->marca = c.marca;
    this->modelo = c.modelo;
    this->matricula = c.matricula;
    this->kilometraje = c.kilometraje;
    this->capacidad = c.capacidad;
    this->agencia = c.agencia;
    this->tipo = c.tipo;
}
Coche::~Coche()
{

}
//getters
string Coche::getMarca()
{
    return marca;
}
string Coche::getModelo()
{
    return modelo;
}
string Coche::getMatricula()
{
    return matricula;
}
float Coche::getKilometraje()
{
    return kilometraje;
}
int Coche::getCapacidad()
{
    return capacidad;
}

string Coche::getTipo()
{
    return tipo;
}
//Setters
void Coche::setMarca(string marca)
{
    this->marca=marca;
}
void Coche::setModelo(string modelo)
{
    this->modelo = modelo;

}
void Coche::setMatricula(string matricula)
{
    this->matricula = matricula;

}
void Coche::setKilometraje(float kilometraje)
{
    this->kilometraje = kilometraje;

}
void Coche::setCapacidad(int capacidad)
{
    this->capacidad = capacidad;

}

void Coche::setTipo(string tipo)
{
    this->tipo = tipo;
}

void Coche::setAgencia(Agencia *a) {
    this->agencia = a;
}

string Coche::toString(){
    stringstream ss;
    ss << marca << ";" << modelo << ";" << matricula << ";" << kilometraje << ";" << capacidad  << ";" << tipo <<";"<< agencia->getCodigo() << "\n";
    return ss.str();
}

