#ifndef COCHE_H
#define COCHE_H

class Coche{
	private:
		char* marca;
        char* modelo;
        char* matricula;
        float kilometraje;
        int capacidad;
        int usuarios;
        char* tipo;
	public:
	    //Cons&Des
		Coche(char* marca, char* modelo, char* matricula, float kilometraje, int capacidad, int usuarios, char* tipo);
		~Coche();
		//Getters
		char* getMarca();
        char* getModelo();
        char* getMatricula();
        float getKilometraje();
        int getCapacidad();
        int getUsuarios();
        char* getTipo();
        //Setters
        void setMarca(char* marca);
        void setModelo(char* modelo);
        void setMatricula(char* matricula);
        void setKilometraje(float kilometraje);
        void setCapacidad(int capacidad);
        void setUsuarios(int usuarios);
        void setTipo(char* tipo);

};


#endif
