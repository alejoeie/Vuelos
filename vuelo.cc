#include"vuelo.h"
#include"vueloLocal.h"
#include"vueloInternacional.h"
#include"vueloCarga.h"
#include"pasajeroFrecuente.h"
#include"pasajeroNoFrecuente.h"
#include<iostream>

using namespace std;

// Metodos de vuelo
void _vuelo::setData(int number, string horaSal, string horaLleg){
    numeroVuelo = number;
    depTime = horaSal;
    arrTime = horaLleg;
}
void _vuelo::getData(){
    cout << "El numero de vuelo es: " << numeroVuelo << endl;
    cout << "La hora de salida es: " << depTime << endl;
    cout << "La hora de llegada es: " << arrTime << endl;
}

// Metodos de vuelo local
void _vueloLocal::getDatos(){
    cout<< "Este es un vuelo local"<< endl;
     getData();
     cout << "El numero minimo de pasajeros es: " << minNumbPass << endl;
     cout << "La categoria es: " << category << endl;
     
}

void _vueloLocal::setDatos(int minimo, string cat){
    minNumbPass = minimo;
    category = cat;
}

// Metodos de vuelo internacional
void _vueloInternacional::setDatosInternacional(string dest){
    destino = dest;

}
void _vueloInternacional::getDat(){
    cout << "Este es un vuelo Internacional "<< endl;
    getData();
    cout << "El pais destino es: " <<destino<< endl;
}

//Metodos de vuelo de Carga
void _vueloCarga::imprimeDatosCarga(){
    cout << "Este es un vuelo de carga"<<endl;
    getData();
    cout << "La carga maxima es: "<<maxWeight<<endl;
    cout<<"El cliente destino es: "<<destCl<<endl;
}
void _vueloCarga::setData(float mX, string Dxf){

    maxWeight = mX;
    destCl = Dxf;

}

// Constructor de pasajero frecuente
_pasajeroFrecuente::_pasajeroFrecuente(string code, string name, float cost, float percentage, float total){
    this->code = code;
    this->name = name; 
    this->cost = cost;
    this->percentage = percentage;
    this->total = total;

}

// Metodos de pasajero frecuente
float _pasajeroFrecuente::totalPayment(float cost, float percentage){
    float due = cost + percentage*cost;
    float due_frec = due - 0.20*due;
    total = due_frec;
    return total;
}

void _pasajeroFrecuente::getInfo(){
    cout << "Se trata de un pasajero frecuente" << endl;
    cout << "El codigo es: "<< code << endl;
    cout << "El nombre del cliente es: "<< name << endl;
    cout << "El costo del boleto es: "<< cost << endl;
    cout << "El porcentaje de impuestos es: " << percentage << endl;
    cout << "El total a pagar es: " <<totalPayment(cost, percentage) << endl;


}

// Metodos de pasajero No Frecuente
void _pasajeroFrecuente::setDat(string codigo, string nombre, float costo, float perc, float tot){
    code = codigo;
    name = nombre;
    cost = costo;
    percentage = perc;
    total = tot; 

}

void _pasajeroNoFrecuente::setDatosIn(string c, string n, float co, float perc, float tot){
    codigo = c;
    nombre = n;
     costo = co;
    percentage = perc;
    totalDue = tot; 

}
float _pasajeroNoFrecuente::totalPayment(float cost, float perc){
    float result = cost + perc*cost;    
    
    return result;
}

void _pasajeroNoFrecuente::getInfo(){
    cout << "Este es un pasajero no frecuente"<<endl;
    cout << "El codigo de este pasajero es:"<<codigo<<endl;
    cout << "El nombre del pasajero es: " << nombre<<endl;
    cout << "El costo del boleto es: " << costo << endl;
    cout << "El porcentaje del boleto es: "<< percentage << endl;
    cout << "El monto total es: "<< totalPayment(costo, percentage) << endl;
    
 
}

// funciones friend

void actualizaVuelos(_vueloLocal &flight, int numero, string depT, string arrT, int minNumb, string cat){
    flight.minNumbPass = minNumb;
    flight.category = cat;
    flight.setData(numero, depT, arrT);
}

void actualizaPasajeros(_vueloLocal &fly, string cod, string nom, float c, float p, float t){
    fly.setDat(cod,nom,c,p,t);

}
void actualizaVuelosInter(_vueloInternacional &flight, int numero, string depT, string arrT, string dest){
    flight.setDatosInternacional(dest);
    flight.setData(numero, depT, arrT);
}
void actualizaPasajerosInter(_vueloInternacional &fly, string cod, string nom, float c, float p, float t){
    fly.setDatosIn(cod,nom,c,p,t);

}