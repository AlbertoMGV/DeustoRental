#ifndef COCHE_H_INCLUDED
#define COCHE_H_INCLUDED

typedef struct{

    char* marca;
    char* modelo;
    char* matricula;
    float kilometraje;
    int capacidad;
    int usuarios;
    char* tipo;

} Coche;

Coche* crearCoche(char* marca, char* modelo, char* matricula, float kilometraje, int capacidad, int usuarios, char* tipo);
Coche** leerCoches();

#endif // COCHE_H_INCLUDED
