#include"vuelo.h"

using namespace std;

class _vueloCarga : protected _vuelo{

    private: 
        float maxWeight;
        string destCl;
    public:
        _vueloCarga(int numeroVuelo, string depTime, string arrTime, float maxWeight, string destCl) : _vuelo(numeroVuelo, depTime, arrTime){

            this->maxWeight = maxWeight;
            this->destCl = destCl;

        }
        ~_vueloCarga(){}

        void setData(float, string);
        void imprimeDatosCarga();


};