#include <stdio.h>
#include <stdlib.h>
#include "Administrador.h"
#include "Cliente.h"

int main()
{
    printf("DeustoRental Company!\n");

    Administrador* admin;
    Cliente* cliente;

    admin = crearAdministrador(5, "pepe@gmail.com");
    cliente = crearCliente("Ivan", "Sanchez", 19, "C/Falsa, 123, Springfield", "452154852X");
    printf("Admin: id=%i, email=%s\n", admin->id, admin->email);
    printf("Cliente: dni=%s, nombre y apellidos=%s %s", cliente->dni, cliente->nombre, cliente->apellido);

    return 0;

    Cliente clientes[5];
	clientes[0].nombre=""; clientes[0].apellido=""; clientes[0].edad=6;
	clientes[1].nombre=""; clientes[0].apellido=""; clientes[1].edad=41;
	clientes[2].nombre=""; clientes[0].apellido=""; clientes[2].edad=12;
	clientes[3].nombre=""; clientes[0].apellido=""; clientes[3].edad=31;
	clientes[4].nombre=""; clientes[0].apellido=""; clientes[4].edad=24;

}
