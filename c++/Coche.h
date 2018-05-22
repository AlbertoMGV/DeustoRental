#ifndef COCHE_H
#define COCHE_H

#include <string>
#include "Agencia.h"

using namespace std;

class Coche{
	private:

        string marca;
        string modelo;
        string matricula;
        float kilometraje;
        int capacidad;
        Agencia* agencia;
        string tipo;
	public:
	    //Cons&Des
		Coche();
		Coche(string marca, string modelo, string matricula, float kilometraje, int capacidad, string tipo, Agencia* agencia);
		~Coche();
        Coche(const Coche &c);

        //Getters
		string getMarca();
        string getModelo();
        string getMatricula();
        Agencia* getAgencia();
        float getKilometraje();
        int getCapacidad();
        string getTipo();
        //Setters
        void setMarca(string marca);
        void setModelo(string modelo);
        void setMatricula(string matricula);
        void setKilometraje(float kilometraje);
        void setCapacidad(int capacidad);
        void setAgencia(Agencia* a);
        void setTipo(string tipo);
        string toString();

};


#endif
