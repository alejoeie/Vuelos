#include"vuelo.h"
#include"pasajeroNoFrecuente.h"
#include<iostream>

using namespace std;
class _vueloInternacional : protected _vuelo, public _pasajeroNoFrecuente{
    friend void actualizaVuelosInter(_vueloInternacional &, int, string, string, string);
    friend void actualizaPasajerosInter(_vueloInternacional &fly, string cod, string nom, float c, float p, float t);
    private:
        string destino;

    public:
        _vueloInternacional(int numeroVuelo, string depTime, string arrTime, string codigo, string nombre, float costo, float percentage, float totalDue, string destino) : _vuelo(numeroVuelo,depTime,arrTime), _pasajeroNoFrecuente(codigo,nombre,costo, percentage, totalDue){
            this->destino = destino;

        }
        ~_vueloInternacional(){


        }

        void setDatosInternacional(string);
        void getDat();

};