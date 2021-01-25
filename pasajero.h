#ifndef PASSENGER_H
#define PASSENGER_H

using namespace std;

class _pasajero{

    public:
        virtual float totalPayment(float, float) = 0;
        virtual void getInfo()=0;



};

#endif

