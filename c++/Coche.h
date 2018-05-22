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
        void getMarca();
        void getModelo();
        void getMatricula();
        void getKilometraje();
        void getCapacidad();
        void getUsuarios();
        void getTipo();

};


#endif
