#include "Reserva.h"

#include <sstream>
#include <iostream>

Reserva::Reserva(int id, Cliente* cliente, Coche* coche,  Agencia* agencia, string fecha_i, string fecha_f){
        this->id=id;
        this->cliente = cliente;
        this->coche = coche;
        this->agencia = agencia;
        this->fecha_i = fecha_i;
        this->fecha_f = fecha_f;
}

Reserva::Reserva(){
    this->id= 0;
    this->cliente = nullptr;
    this->coche = nullptr;
    this->agencia = nullptr;
    this->fecha_i = "";
    this->fecha_f = "";
}
Reserva::~Reserva()
{

}

Reserva::Reserva(const Reserva &r)
{
    this->id= r.id;
    this->cliente = r.cliente;
    this->coche = r.coche;
    this->agencia = r.agencia;
    this->fecha_i = r.fecha_i;
    this->fecha_f = r.fecha_f;
}
//Getters
int Reserva::getId()
{
    return id;
}
Cliente* Reserva::getCliente()
{
    return cliente;
}
Coche* Reserva::getCoche()
{
    return coche;
}
Agencia* Reserva::getAgencia()
{
    return agencia;
}
string Reserva::getFecha_i()
{
    return fecha_i;
}
string Reserva::getFecha_f()
{
    return fecha_f;
}
//Setters
void Reserva::setId(int id)
{
    this->id=id;
}
void Reserva::setCliente(Cliente* cliente)
{
    this->cliente=cliente;
}
void Reserva::setCoche(Coche* coche)
{
    this->coche=coche;
}
void Reserva::setAgencia(Agencia* agencia)
{
    this->agencia=agencia;
}
void Reserva::setFecha_i(string fecha_i)
{
    this->fecha_i=fecha_i;
}
void Reserva::setFecha_f(string fecha_f)
{
    this->fecha_f=fecha_f;
}
string Reserva::toString(){
    stringstream ss;
    ss << id << ";" << cliente->getEmail() << ";" << coche->getMatricula() << ";" << agencia->getCodigo() << ";" << fecha_i << ";" << fecha_f << "\n";
    return ss.str();
}

void Reserva::imprimir() {
    cout << "Id de reserva: " << id << ", coche: " << coche->getMatricula() << " " << coche->getMarca() << " " << coche->getModelo() << " (" << fecha_i << " - " << fecha_f << ")" << endl;
}

