#ifndef VUELO_H
#define VUELO_H

#include<iostream>

using namespace std;

class _vuelo{
    private: 
        int numeroVuelo;
        string depTime;
        string arrTime;
    public:
        _vuelo(int numeroVuelo, string depTime, string arrTime){
            this->numeroVuelo = numeroVuelo;
            this->depTime = depTime;
            this->arrTime = arrTime;
        }
        void getData();
        void setData(int, string, string);
};
#endif