//
// Created by ivans on 22/05/2018.
//

#include "Main.h"
#include <sstream>
#include <string>
#include <iostream>
#include "Cliente.h"
#include "Agencia.h"
#include "Coche.h"
#include "Reserva.h"
#include "Gestor.h"

using namespace std;

int main() {
    Gestor* gestor = new Gestor(true);
    Administrador* admin = new Administrador(0, "admin1@gmail.com", "pass");
    Cliente* c = new Cliente(0, "pepe@gmail.com", "pass", "nombre", "apellido", "dni");
    Agencia* a = new Agencia(48910, "Sestao", "España", "C/ Falsa, 123", 1);
    Coche* coche = new Coche("Ford", "GT", "0454KFD", 1250.3, 2, "Supercoche", a);
    Reserva* r = new Reserva("22/05/2018", "29/05/2018", 2, c, coche, a);

    cout<<"aaaaaa"<<endl;

    gestor->registrarCliente(c);
    gestor->addAgencia(a);
    gestor->addCoche(coche);
    gestor->addReserva(r);
    gestor->addAdministrador(admin);
    cout << c->toString() << endl;
    return 0;
}

void test(){
    stringstream ss;
    ss << "ab, " << "cd, " << "df.";
    string s = ss.str();
    cout << s << endl;
}
