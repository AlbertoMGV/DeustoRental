#ifndef COCHE_H
#define COCHE_H

#include <string>

using namespace std;

class Coche{
	private:
		string marca;
        string modelo;
        string matricula;
        float kilometraje;
        int capacidad;
        int usuarios;
        string tipo;
	public:
	    //Cons&Des
		Coche();
		Coche(string marca, string modelo, string matricula, float kilometraje, int capacidad, int usuarios, string tipo);
		~Coche();
		//Getters
		string getMarca();
        string getModelo();
        string getMatricula();
        float getKilometraje();
        int getCapacidad();
        int getUsuarios();
        string getTipo();
        //Setters
        void setMarca(string marca);
        void setModelo(string modelo);
        void setMatricula(string matricula);
        void setKilometraje(float kilometraje);
        void setCapacidad(int capacidad);
        void setUsuarios(int usuarios);
        void setTipo(string tipo);

};


#endif
