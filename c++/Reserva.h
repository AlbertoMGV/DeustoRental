#ifndef RESERVA_H
#define RESERVA_H

class Reserva{
	private:
		int id;
        Cliente cliente;
        Coche coche;
        Agencia agencia;
        char* fecha_i;
        char* fecha_f;
	public:
	    //cons&Dest
	    Reserva(char* fecha_i, char* fecha_f, int id, Cliente cliente, Coche coche, Agencia agencia);
	    ~Reserva();
		//Getters
		int getId();
        Cliente getCliente();
        Coche getCoche();
        Agencia getAgencia();
        char* getFecha_i();
        char* getFecha_f();
        //Setters
        void setId();
        void setCliente();
        void setCoche();
        void setAgencia();
        void setFecha_i();
        void setFecha_f();

};


#endif
