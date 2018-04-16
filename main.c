#include <stdio.h>
#include <stdlib.h>
#include "Administrador.h"
#include "Cliente.h"

int main()
{
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("----------------------------------------------------------\n");

    Administrador* admin;
    Cliente* cliente;

    admin = crearAdministrador(5, "pepe@gmail.com");
    cliente = crearCliente("Ivan", "Sanchez", 19, "C/Falsa, 123, Springfield", "452154852X");
    printf("Admin: id=%i, email=%s\n", admin->id, admin->email);
    printf("Cliente: dni=%s, nombre y apellidos=%s %s\n", cliente->dni, cliente->nombre, cliente->apellido);

    return 0;
}
