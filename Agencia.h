#ifndef AGENCIA_H_INCLUDED
#define AGENCIA_H_INCLUDED

typedef struct{

    int CP;
    char* ciudad;
    char* pais;
    char* direccion;
    int codigo;

} Agencia;

Agencia* crearAgencia(int CP, char* ciudad, char* pais, char* direccion, int codigo);

#endif // AGENCIA_H_INCLUDED
