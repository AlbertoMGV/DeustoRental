#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Agencia.h"

Agencia::Agencia(int CP, char* ciudad, char* pais, char* direccion, int codigo){
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
Agencia::~Agencia()
{

}
//getters
int Agencia::getCP()
{
    return CP;
}
char* Agencia::getCiudad()
{
    return ciudad;
}
char* Agencia::getPais()
{
    return pais;
}
char* Agencia::getDireccion()
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
void Agencia::setCiudad(char* ciudad)
{
    this->ciudad = ciudad;
}
void Agencia::setPais(char* pais)
{
    this->pais = pais;
}
void Agencia::setDireccion(char* direccion)
{
    this->direccion = direccion;
}
void Agencia::setCodigo(int codigo)
{
    this->codigo = codigo;
}
