#ifndef INTER_H
#define INTER_H
#include"pasajero.h"
#include<iostream>
using namespace std;

class _pasajeroNoFrecuente : public _pasajero{
    private:
        string codigo;
        string nombre;
        float totalDue;
        float costo;
        float percentage;

    public:
        _pasajeroNoFrecuente(string codigo, string nombre, float costo, float percentage, float totalDue){
                this->totalDue = totalDue; 
                this->costo = costo;
                this->codigo = codigo;
                this->nombre = nombre;
                this->percentage = percentage;
        }
            
    void setDatosIn(string, string, float, float, float);
    float totalPayment(float, float);
    void getInfo();
};
#endif