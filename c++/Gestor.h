#ifndef GESTOR_H
#define GESTOR_H

class Gestor{
	public:
		Gestor(bool isAdmin);
		~Gestor();
		Administrador getAdministrador(char* email);
		Cliente getCliente(char* email);
		Coche[] getCoches(Agencia agencia);
		Agencia getAgencia(int id);
		Agencia[] getAgencias();
		Reserva[] getReservas(Cliente c);
		void addCoche(Coche c, Agencia a);
		void addAdministrador(Administrador a);
		void registrarCliente(Cliente c);
	private:
		bool isAdmin;
};
