#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Coche.h"

Coche::Coche(char* marca, char* modelo, char* matricula, float kilometraje, int capacidad, int usuarios, char* tipo){
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
char* Coche::getMarca()
{
    return marca;
}
char* Coche::getModelo()
{
    return modelo;
}
char* Coche::getMatricula()
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
char* Coche::getTipo()
{
    return tipo;
}
//Setters
void Coche::setMarca(char* marca)
{
    this->marca=marca;
}
void Coche::setModelo(char* modelo)
{
    this->modelo = modelo;

}
void Coche::setMatricula(char* matricula)
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
void Coche::setTipo(char* tipo)
{
    this->tipo = tipo;
}
