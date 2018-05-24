#ifndef GESTOR_H
#define GESTOR_H

#include <string>

#include "Administrador.h"
#include "Cliente.h"
#include "Coche.h"
#include "Agencia.h"
#include "Reserva.h"

using namespace std;

class Gestor{
	public:
		Gestor(bool isAdmin);
		int createID();
		int createAdminID();
		Administrador* getAdministrador(string email);
		Cliente* getCliente(string email);
        Coche* getCoches();
        Coche* getCoches(Agencia* agencia);
		int getNcoches(Agencia* agencia);
		Agencia* getAgencia(int codigo);
		Agencia* getAgencias();
        Reserva* getReservas();
        Reserva* getReservas(Cliente* c);
		int getNReservas(Cliente* c);
		void addReserva(Reserva *r);
		void addCoche(Coche* c);
        void addAgencia(Agencia* a);
		void addAdministrador(Administrador* a);
        static int countLines(string filename);
		void registrarCliente(Cliente* c);
        Coche *getCoche(string matricula);

private:
		bool isAdmin;

};
#endif
