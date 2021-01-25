#ifndef PASS_H
#define PASS_H

#include"pasajero.h"
#include<iostream>
using namespace std;

class _pasajeroFrecuente : public _pasajero{
private:
    string code;
    string name;
    float cost;
    float percentage;
    float total;

public:
    _pasajeroFrecuente(string code, string name, float cost, float percentage, float total);
    ~_pasajeroFrecuente(){

    }
    void setDat(string, string, float, float, float);
    float totalPayment(float, float);
    void getInfo();
};

#endif