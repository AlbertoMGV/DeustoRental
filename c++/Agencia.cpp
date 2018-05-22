#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Agencia.h"

Agencia::Agencia(int CP, string ciudad, string pais, string direccion, int codigo){
	this->CP = CP;
	this->ciudad = ciudad;
	this->pais = pais;
	this->direccion = direccion;
	this->codigo = codigo;
}
Agencia::Agencia()
{
    this->CP = 0;
    this->ciudad = "";
    this->pais = "";
    this->direccion = "";
    this->codigo = 0;

}

Agencia::Agencia(const Agencia &a) {
    this->CP = a.CP;
    this->ciudad = a.ciudad;
    this->pais = a.pais;
    this->direccion = a.direccion;
    this->codigo = a.codigo;
}
Agencia::~Agencia()
{

}
//getters
int Agencia::getCP()
{
    return CP;
}
string Agencia::getCiudad()
{
    return ciudad;
}
string Agencia::getPais()
{
    return pais;
}
string Agencia::getDireccion()
{
    return direccion;
}
int Agencia::getCodigo()
{
    return codigo;
}
//Setters
void Agencia::setCP(int CP)
{
    this->CP = CP;
}
void Agencia::setCiudad(string ciudad)
{
    this->ciudad = ciudad;
}
void Agencia::setPais(string pais)
{
    this->pais = pais;
}
void Agencia::setDireccion(string direccion)
{
    this->direccion = direccion;
}
void Agencia::setCodigo(int codigo)
{
    this->codigo = codigo;
}


