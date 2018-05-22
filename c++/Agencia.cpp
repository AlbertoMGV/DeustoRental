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
Agencia::~Agencia()
{

}
//getters
int getCP()
{
    return CP;
}
char* getCiudad()
{
    return ciudad;
}
char* getPais()
{
    return pais;
}
char* getDireccion()
{
    return direccion;
}
int getCodigo()
{
    return codigo;
}
//Setters
void setCP(int CP)
{
    this->CP = CP;
}
void setCiudad(char* ciudad)
{
    this->ciudad = ciudad;
}
void setPais(char* pais)
{
    this->pais = pais;
}
void setDireccion(char* direccion)
{
    this->direccion = direccion;
}
void setCodigo(int codigo)
{
    this->codigo = codigo;
}
