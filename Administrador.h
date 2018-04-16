#ifndef ADMINISTRADOR_H_INCLUDED
#define ADMINISTRADOR_H_INCLUDED

typedef struct{

    int id;
    char* email;

} Administrador;

Administrador* crearAdministrador(int id, char* email);

#endif // ADMINISTRADOR_H_INCLUDED
