#include "Gestor.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

Gestor::Gestor(bool isAdmin){
	this->isAdmin = isAdmin;
}

int Gestor::createID() {
    ifstream infile("datos/clientes.dat");
    string line;
    int id = 0;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[6];
        string valor;
        id++;
    }
    return id;
}

int Gestor::createAdminID() {
    ifstream infile("datos/Administradores.dat");
    string line;
    int id = 0;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[6];
        string valor;
        id++;
    }
    return id;
}

void Gestor::registrarCliente(Cliente* c){
	if(getCliente(c->getEmail()) == nullptr){
        ofstream clientesFile;
        clientesFile.open("datos/clientes.dat", ios_base::app);
        clientesFile << c->toString();
    } else{
        cout << "ERROR! CLIENTE YA EXISTE!" << endl;
    }
}

Cliente* Gestor::getCliente(string email) {
    ifstream infile("datos/clientes.dat");
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[6];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            if(i < 6){
                parametros[i] = valor;
                i++;
            }
        }
        if(parametros[1].compare(email) == 0){
            Cliente* c = new Cliente(stoi(parametros[0]), parametros[1], parametros[2], parametros[3], parametros[4], parametros[5]);
            return c;
        }
    }

    return nullptr;
}


int Gestor::getNcoches(Agencia* agencia) {
    ifstream infile("datos/coches.dat");
    string line;
    int found = 0;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[7];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            if(i < 7){
                parametros[i] = valor;
                i++;
            }
        }
        if(stoi(parametros[6]) == agencia->getCodigo()){
            found++;
        }

    }
    return found;
}

Coche* Gestor::getCoches(Agencia* agencia) {
    ifstream infile("datos/coches.dat");
    string line;
    int found = 0;

    vector<Coche> result;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[7];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            if(i < 7){
                parametros[i] = valor;
                i++;
            }
        }
        if(stoi(parametros[6]) == agencia->getCodigo()){
            result.push_back(Coche(parametros[0], parametros[1], parametros[2], stof(parametros[3]), stoi(parametros[4]), parametros[5], agencia));
            found++;
        }

    }
    Coche* array = new Coche[found];
    copy(result.begin(), result.end(), array);
    return array;
}

Administrador* Gestor::getAdministrador(string email) {
    ifstream infile("datos/administradores.dat");
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[3];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            if(i < 3){
                parametros[i] = valor;
                i++;
            }
        }
        if(parametros[1].compare(email) == 0){
            Administrador* a = new Administrador(stoi(parametros[0]), parametros[1], parametros[2]);
            return a;
        }
    }
    return nullptr;
}

Agencia *Gestor::getAgencias() {
    ifstream infile("datos/agencias.dat");
    vector<Agencia> result;
    int found = 0;
    string line;
    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[5];
        string valor;
        int i = 0;
        while (getline(ss, valor, ';')) {
            if(i < 5){
                parametros[i] = valor;
                i++;
            }
        }
        result.push_back(Agencia(stoi(parametros[0]), parametros[1], parametros[2], parametros[3], stoi(parametros[4])));
        found++;
    }

    Agencia* array = new Agencia[found];
    copy(result.begin(), result.end(), array);
    return array;
}

int Gestor::countLines(string filename) {
    int count = 0;
    string line;
    ifstream file(filename);
    while (getline(file, line))
        count++;
    return count;
}

void Gestor::addAgencia(Agencia* a) {
    if(getAgencia(a->getCodigo()) == nullptr){
        ofstream agenciasFile;
        agenciasFile.open("datos/agencias.dat", ios_base::app);
        agenciasFile << a->toString();
    } else{
        cout << "ERROR! AGENCIA YA EXISTE!" << endl;
    }
}

Agencia* Gestor::getAgencia(int codigo) {
    Agencia* agencias = getAgencias();
    for(int i = 0; i < countLines("datos/agencias.dat"); i++){
        if(agencias[i].getCodigo() == codigo){
            return new Agencia(agencias[i]);
        }
    }
    return nullptr;
}

Coche *Gestor::getCoche(string matricula) {
    ifstream infile("datos/coches.dat");
    string line;
    while (getline(infile, line)) {
        istringstream ss(line);
        string *parametros = new string[7];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            if (i < 7) {
                parametros[i] = valor;
                i++;
            }
        }
        if (parametros[2].compare(matricula) == 0) {
            Agencia *agencia = getAgencia(stoi(parametros[6]));
            return new  Coche(parametros[0], parametros[1], parametros[2], stof(parametros[3]), stoi(parametros[4]),
                              parametros[5], agencia);
        }

    }
    return nullptr;
}

void Gestor::addCoche(Coche *c) {
    if(getCoche(c->getMatricula()) == nullptr){
        ofstream cochesFile;
        cochesFile.open("datos/coches.dat", ios_base::app);
        cochesFile << c->toString();
    } else{
        cout << "ERROR! COCHE YA EXISTE!" << endl;
    }
}

void Gestor::addAdministrador(Administrador* a) {
    if(getAdministrador(a->getEmail()) == nullptr){
        ofstream adminFile;
        adminFile.open("datos/administradores.dat", ios_base::app);
        adminFile << a->toString();
    } else{
        cout << "ERROR! ADMIN YA EXISTE!" << endl;
    }
}

void Gestor::addReserva(Reserva *r) {
    ofstream reservasFile;
    reservasFile.open("datos/reservas.dat", ios_base::app);
    reservasFile << r->toString();
}
Reserva *Gestor::getReservas() {
    ifstream infile("datos/reservas.dat");
    vector<Reserva> reservas;
    string line;
    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[6];
        string valor;
        int i = 0;
        while (getline(ss, valor, ';')) {
            if(i < 6){
                parametros[i] = valor;
                i++;
            }
        }
        Agencia* a = getAgencia(stoi(parametros[3]));
        Cliente* c = getCliente(parametros[1]);
        Coche* coche = getCoche(parametros[2]);
        reservas.push_back(Reserva(stoi(parametros[0]), c, coche, a, parametros[4], parametros[5]));
    }
    Reserva* resultado = new Reserva[countLines("datos/reservas.dat")];
    copy(reservas.begin(), reservas.end(), resultado);
    return resultado;
}

Reserva *Gestor::getReservas(Cliente *c) {
    int nReservas = countLines("datos/reservas.dat");
    string email = c->getEmail();
    Reserva* reservas = getReservas();
    int count = 0;
    for(int i = 0; i < nReservas; i++){
        if(reservas[i].getCliente()->getEmail().compare(email) == 0){
            count++;
        }
    }
    Reserva * result = new Reserva[count];
    count = 0;
    for(int i = 0; i < nReservas; i++){
        if(reservas[i].getCliente()->getEmail().compare(email) == 0){
            result[count] = reservas[i];
            count++;
        }
    }
    return result;
}
int Gestor::getNReservas(Cliente *c) {
    int nReservas = countLines("datos/reservas.dat");
    Reserva* reservas = getReservas();
    int count = 0;
    for(int i = 0; i < nReservas; i++){
        if(reservas[i].getCliente()->getEmail().compare(c->getEmail()) == 0){
            count++;
        }
    }
    return count;
}

Coche *Gestor::getCoches() {
    return nullptr;
}
