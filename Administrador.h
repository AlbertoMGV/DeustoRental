#ifndef ADMINISTRADOR_H_INCLUDED
#define ADMINISTRADOR_H_INCLUDED

typedef struct{

    int id;
    char* email;
    char* pass;

} Administrador;

Administrador* crearAdministrador(int id, char* email, char* pass);
Administrador** leerAdministrador();
Administrador* modificarAdministrador();

#endif // ADMINISTRADOR_H_INCLUDED
