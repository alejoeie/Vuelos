#include"pasajeroFrecuente.h"
#include"vuelo.h"
#include<iostream>
using namespace std;


class _vueloLocal : protected _vuelo, public _pasajeroFrecuente {
    friend void actualizaVuelos(_vueloLocal &, int, string, string, int, string);
    friend void actualizaPasajeros(_vueloLocal &, string, string, float, float, float);
    private:
        int minNumbPass;
        string category;
        
    public:
        _vueloLocal(int numeroVuelo, string depTime, string arrTime, string codigo, string nombre, float costo, float percentage, float totalDue, int minNumbPass, string category) : _vuelo(numeroVuelo, depTime, arrTime), _pasajeroFrecuente(codigo, nombre, costo, percentage,totalDue){
            this->minNumbPass = minNumbPass;
            this->category = category;
            
        }
        ~_vueloLocal(){

        }

        void getDatos();
        void setDatos(int, string);

};