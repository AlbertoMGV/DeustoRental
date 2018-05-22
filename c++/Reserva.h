#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include "Cliente.h"
#include "Agencia.h"
#include "Coche.h"

using namespace std;

class Reserva{
	private:
		int id;
        Cliente cliente;
        Coche coche;
        Agencia agencia;
        string fecha_i;
        string fecha_f;
	public:
	    //cons&Dest
	    Reserva(string fecha_i, string fecha_f, int id, Cliente cliente, Coche coche, Agencia agencia);
	    ~Reserva();
		//Getters
		int getId();
        Cliente getCliente();
        Coche getCoche();
        Agencia getAgencia();
        string getFecha_i();
        string getFecha_f();
        //Setters
        void setId(int id);
        void setCliente(Cliente cliente);
        void setCoche(Coche coche);
        void setAgencia(Agencia agencia);
        void setFecha_i(string fecha_i);
        void setFecha_f(string fecha_f);

};


#endif
