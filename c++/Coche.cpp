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
Coche::~Coche()
{

}
//getters
char* getMarca()
{
    return marca;
}
char* getModelo()
{
    return modelo;
}
char* getMatricula()
{
    return matricula;
}
float getKilometraje()
{
    return kilometraje;
}
int getCapacidad()
{
    return capacidad;
}
int getUsuarios()
{
    return usuarios;
}
char* getTipo()
{
    return tipo;
}
//Setters
void setMarca(char* marca)
{
    this->marca=marca;
}
void setModelo(char* modelo)
{
    this->modelo = modelo;

}
void setMatricula(char* matricula)
{
    this->matricula = matricula;

}
void setKilometraje(float kilometraje)
{
    this->kilometraje = kilometraje;

}
void setCapacidad(int capacidad)
{
    this->capacidad = capacidad;

}
void setUsuarios(int usuarios)
{
    this->usuarios = usuarios;

}
void setTipo(char* tipo)
{
    this->tipo = tipo;
}
