#include "Coche.h"
#include <string>

using namespace std;

Coche::Coche(string marca, string modelo, string matricula, float kilometraje, int capacidad, int usuarios, string tipo){
	this->marca = marca;
	this->modelo = modelo;
	this->matricula = matricula;
	this->kilometraje = kilometraje;
	this->capacidad = capacidad;
	this->usuarios = usuarios;
	this->tipo = tipo;
}
Coche::Coche()
{
    this->marca = "";
    this->modelo = "";
    this->matricula = "";
    this->kilometraje = 0.0F;
    this->capacidad = 0;
    this->usuarios = 0;
    this->tipo = "";
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
int Coche::getUsuarios()
{
    return usuarios;
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
void Coche::setUsuarios(int usuarios)
{
    this->usuarios = usuarios;

}
void Coche::setTipo(string tipo)
{
    this->tipo = tipo;
}
