//
// Created by ivans on 22/05/2018.
//

#include "Main.h"
#include <sstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Cliente.h"
#include "Agencia.h"
#include "Coche.h"
#include "Reserva.h"
#include "Gestor.h"


using namespace std;

int main() {
    /*
    Gestor* gestor = new Gestor(true);
    Administrador* admin = new Administrador(0, "admin1@gmail.com", "pass");
    Cliente* c = new Cliente(0, "pepe@gmail.com", "pass", "nombre", "apellido", "dni");
    Agencia* a = new Agencia(48910, "Sestao", "España", "C/ Falsa, 123", 1);
    Coche* coche = new Coche("Ford", "GT", "0454KFD", 1250.3, 2, "Supercoche", a);
    Reserva* r = new Reserva("22/05/2018", "29/05/2018", 2, c, coche, a);
    gestor->registrarCliente(c);
    gestor->addAgencia(a);
    gestor->addCoche(coche);
    gestor->addReserva(r);
    gestor->addAdministrador(admin);
    cout << c->toString() << endl;
    */



    Gestor* gestor = new Gestor(true);
    int elec;


    SetConsoleTitle("DeustoRental");
    do
    {

    limpiarPantalla();
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                         Inicio" << endl;
    cout <<"----------------------------------------------------------" << endl;



    cout <<"Bienvenido a DeustoRental, plataforma de alquiler de vehiculos. " << endl;
    do
    {

        cout << "Que desea?" << endl;
        cout << "1. Registrarse" << endl;
        cout << "2. Login" << endl;
        cout << "3. Manage" << endl; //Menu para el administrador
        cout << "4. Exit" << endl;

        cin >> elec;


    } while ( elec < 1 || elec > 4 );

    if (elec==1)
    {
        string rnom;
        string rape;
        int redad;
        string remail;
        string rdni;
        string rpass1;
        string rpass2;
        boolean success = false;

        limpiarPantalla();

        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                         Registro"  << endl;
        cout << "----------------------------------------------------------"  << endl;


        cout <<"Introduce tu nombre:";
        cin >> rnom;
        cout <<"" << endl;

        cout <<"Introduce tu apellido:";
        cin >> rape;

        cout <<"Introduce tu edad:";
        cin >> redad;

        cout <<"Introduce tu email:";
        cin >> remail;

        cout <<"Introduce tu dni:";
        cin >> rdni;

        cout <<"Introduce una contrasena:";
        cin >> rpass1;

        cout <<"Repite la contrasena:";
        cin >> rpass2;

        if(rpass1.compare(rpass2)!=0){
                cout <<"Las contrasenas no son iguales!" << endl;
                while(!success) {
                    cout <<"Introduce una contrasena:";
                    cin >> rpass1;

                    cout <<"Repite la contrasena:";
                    cin >> rpass2;

                    if(rpass1.compare(rpass2) != 0){
                        success=true;
                    }

                }
        }else{
            success = true;
        }

        if(success){
            Cliente* c = new Cliente(gestor->createID(), remail, rpass1, rnom, rape, rdni);
            gestor->registrarCliente(c);
            cout <<"El usuario " << rnom << " " << rape << " ha sido correctamente registrado" << endl;
            system("pause");
        }

    }
    if (elec==2)
    {
        limpiarPantalla();

        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                         Login" << endl;
        cout <<"----------------------------------------------------------" << endl;


        cout <<"Has elegido Logearse!" << endl;

        string lemail;
        string lpass;
        Cliente* user;
        boolean correct=false;



        do{
            cout <<"Introduce tu email:";
            cin >> lemail ;
        }while(gestor->getCliente(lemail)==nullptr);
        user=gestor->getCliente(lemail);

        do{
            cout <<"Introduce una contrasena:";
            cin >> lpass ;

        //if(user->getPass()==lpass){
        if(user->getPass()==lpass){
            correct=true;
            cout <<"Has iniciado sesion correctamente!\n";
            system("pause");
            menuUsuario(gestor->getCliente(lemail));
        }

        }while(correct==false);


    }
    if (elec==3)
    {
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                    Management Tool" << endl;
        cout <<"----------------------------------------------------------" << endl;


        string lemail;
        string lpass;
        Administrador* admin;
        boolean correct=false;



        do{
            cout <<"Introduce tu email:";
            cin >> lemail;

        }while(gestor->getAdministrador(lemail) == nullptr);
        admin=gestor->getAdministrador(lemail);

        do{
            cout <<"Introduce una contrasena:";
            cin >> lpass;
            cout << endl;

        if(admin->comprobarContrasenya(lpass)){
            correct=true;
            cout <<"Has iniciado sesion correctamente!";
            system("pause");
            menuAdmin();
        }

        }while(correct==false);



        return 0;
    }
    if (elec==4)
    {
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Hasta la proxima!" << endl;
        cout <<"----------------------------------------------------------" << endl;
        return 0;
    }
    }while(TRUE);
}



void limpiarPantalla()
{
  system("@cls||clear");
}

void test(){
    stringstream ss;
    ss << "ab, " << "cd, " << "df.";
    string s = ss.str();
    cout << s << endl;
}

void menuUsuario(Cliente* c)
{
    Gestor* gestor = new Gestor(false);
    do{
    limpiarPantalla();
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                   Menu de Cliente" << endl;
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                  Bienvenido "<<c->getNombre()<<" "<<c->getApellido()<<"!"<< endl;

    int elec;

    do
    {

        cout <<"Que desea?\n" << endl;

        cout <<"1. Hacer una reserva" << endl;
        cout <<"2. Mis Reservas" << endl;
        cout <<"3. Exit\n" << endl;

        cin >> elec;



    } while ( elec < 1 || elec > 3 );
    if (elec==1){
        int elec1;
        string fecha_i;
        string fecha_f;
        limpiarPantalla();
        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                   Crear Reserva" << endl;
        cout << "----------------------------------------------------------" << endl;

        cout <<"Elige la agencia en la que quieres realizar la reserva:" << endl;
        Agencia* agencias = gestor->getAgencias();

        for(int i = 0; i < gestor->countLines("datos/agencias.dat"); i++){
            cout << "N" << i + 1 << ": " << agencias[i].getCiudad() << " (" << agencias[i].getCP() << ") - " << agencias[i].getDireccion() << ", " << agencias[i].getPais()  << endl;
        }

        cin >> elec1;
        Agencia* aa = new Agencia(agencias[elec1 - 1]);

        Coche* coches = gestor->getCoches(aa);

        cout<<"Introduce el numero del vehiculo deseado:"<<endl;

        for(int j = 0; j < gestor->getNcoches(aa); j++){
            cout << "N" << j + 1 << ": " <<coches[j].getMarca() << " " << coches[j].getModelo() << ", capacidad: " << coches[j].getCapacidad() << " (" << coches[j].getTipo() << ")" << endl;
        }

        cin >> elec1 ;

        cout<<"Introduce la fecha de recogida:"<<endl;
        cin >> fecha_i ;

        cout<<"Introduce la fecha de devolucion:"<<endl;
        cin >> fecha_f ;

        Coche* coche = new Coche(coches[elec1 - 1]);

        Reserva* r = new Reserva(gestor->countLines("datos/reservas.dat") + 1, c, coche, aa, fecha_i, fecha_f);
        gestor->addReserva(r);

        cout<<"Reserva realizada con exito!"<<endl;


        system("pause");

    }
    if (elec==2){
        limpiarPantalla();
        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                   Menu de Cliente" << endl;
        cout << "----------------------------------------------------------" << endl;


        Reserva* misReservas = gestor->getReservas(c);
        int nReservas = gestor->getNReservas(c);
        for(int i = 0; i < nReservas; i++){
            misReservas[i].imprimir();
        }
        system("pause");
    }
    if (elec==3){
        main();
    }
    }while(true);
}

void menuAdmin()
{
    do{
    limpiarPantalla();
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                   Admin Menu" << endl;
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                  Bienvenido!";

    Gestor* gestor = new Gestor(true);
    int elec;

    do
    {

        cout <<"Que desea?\n" << endl;

        cout <<"1. Crear Administrador" << endl;
        cout <<"2. Listar Reservas" << endl;
        cout <<"3. Anadir Vehiculo" << endl;
        cout <<"4. Anadir Agencias" << endl;
        cout <<"5. Exit\n" << endl;

        cin >> elec;



    } while ( elec < 1 || elec > 5 );
    if (elec==1){
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Register Admin" << endl;
        cout <<"----------------------------------------------------------" << endl;


        int id;
        string remail;
        string rpass1;
        string rpass2;
        boolean success=false;

        cout <<"Introduce un Email:";
        cin >> remail ;
        cout <<"" << endl;


        cout <<"Introduce una contrasena:";
        cin >> rpass1 ;
        cout <<"" << endl;

        cout <<"Repite la contrasena:";
        cin >> rpass2;
        cout << "" << endl;

        if(rpass1.compare(rpass2)!=0){
            cout <<"Las contrasenas no son iguales!" << endl;
            while(!success) {
                cout <<"Introduce una contrasena:";
                cin >> rpass1;

                cout <<"Repite la contrasena:";
                cin >> rpass2;

                if(rpass1.compare(rpass2) != 0){
                    success=true;
                }

            }
        }
        Administrador* a = new Administrador(gestor->createAdminID(),remail,rpass1);
        cout <<"El Administrador [" << remail <<"] ha sido correctamente registrado" << endl;
        system("pause");
    }
    if (elec==2){
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Listar Reservas" << endl;
        cout <<"----------------------------------------------------------" << endl;
        Reserva* reservas = gestor->getReservas();
        int nReservas = gestor->countLines("datos/reservas.dat");
        for(int i = 0; i < nReservas; i++){
            reservas[i].imprimir();
        }
    }
    if (elec==3){
        int elec1;
        limpiarPantalla();
        limpiarPantalla();
        int capacidad;
        float kilometraje;
        string tipo, matricula, marca, modelo;
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Anadir Vehiculo" << endl;
        cout <<"----------------------------------------------------------" << endl;

        cout <<"Elige la agencia a la que quieres añadir el vehiculo:" << endl;
        Agencia* agencias = gestor->getAgencias();

        for(int i = 0; i < gestor->countLines("datos/agencias.dat"); i++) {
            cout << "N" << i + 1 << ": " << agencias[i].getCiudad() << " (" << agencias[i].getCP() << ") - "
                 << agencias[i].getDireccion() << ", " << agencias[i].getPais() << endl;
        }
        cin >> elec1;
        cout << "Introduce la marca del nuevo coche:" << endl ;
        cin >> marca;
        cout << "Introduce el modelo del nuevo coche:" << endl ;
        char modeloC[50];
        cin.getline(modeloC, sizeof(modeloC));
        cin.getline(modeloC, sizeof(modeloC));
        modelo = modeloC;
        cout << "Introduce el kilometraje del nuevo coche:"  << endl;
        cin >> kilometraje;
        cout << "Introduce la matricula del nuevo coche:" << endl;
        cin >> matricula;
        cout << "Introduce el tipo del nuevo coche:" << endl;
        cin >> tipo;
        cout << "Introduce la capacidad del nuevo coche:"<< endl;
        cin >> capacidad;
        Coche* c = new Coche(marca, modelo, matricula, kilometraje, capacidad, tipo, gestor->getAgencia(elec1));
        gestor->addCoche(c);
        system("pause");
    }
    if (elec==4){
        limpiarPantalla();
        int CP, codigo;
        string pueblo, pais, direccion;
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Anadir Agencias" << endl;
        cout <<"----------------------------------------------------------" << endl;
        cout << "Introduce el código de la nueva agencia:"<< endl;
        cin >> codigo;
        cout << "Introduce el codigo postal de la nueva agencia:"<< endl;
        cin >> CP;
        cout << "Introduce la ciudad de la nueva agencia:"<< endl;
        cin >> pueblo;
        cout << "Introduce el pais de la nueva agencia:"<< endl;
        cin >> pais;
        cout << "Introduce la direccion de la nueva agencia:"<< endl;
        char direccionC[50];
        cin.getline(direccionC, sizeof(direccionC));
        cin.getline(direccionC, sizeof(direccionC));
        direccion = direccionC;
        Agencia* a = new Agencia(CP, pueblo, pais, direccion, codigo);
        gestor->addAgencia(a);
        system("pause");

    }

    if (elec==5){
        main();
    }
    }while(true);
}
