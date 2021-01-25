#include"vueloLocal.h"
#include"vueloInternacional.h"
#include"vueloCarga.h"
#include"pasajeroFrecuente.h"
#include"pasajeroNoFrecuente.h"

using namespace std;

int main(int argc, char const *argv[])
{

    // // Creacion de un vuelo Local
    // _vueloLocal* flight = new _vueloLocal(24, "12:30","14:00","35EF", "Carlos", 23, 0.13, 45, 12, "domestica");

    // flight->getDatos();
    // flight->getInfo();
    // cout << endl;
    // // Creacion de un vuelo internacional
    // _vueloInternacional* inter = new _vueloInternacional(12,"9:00","18:00", "12dsf", "Miguel", 200, 0.17, 340, "USA" );

    // inter->getDat();
    // inter->getInfo();

    // cout << endl;
    // _vueloCarga* ship  = new _vueloCarga(145, "7:00", "14:00", 345, "Serbia");
    // ship->imprimeDatosCarga();
     
    // cout << endl;

  

    // actualizaVuelos(*flight, 34, "14:00", "16:30", 45, "comercial");
    // actualizaPasajeros(*flight, "gh56", "alfonso", 45, 0.13, 67);
    // flight->getDatos();
    // flight->getInfo();

    int opc;
    int menu = true;
    int vuelo = 0;
    string nombre, n1, n2;
    while (menu)
    {   
        cout<<"Bienvenido al sistema de vuelos" << endl;
        cout<<"Elija la opcion: "<<endl;
        cout<<"1. Vuelo Local" << endl;
        cout<<"2. Vuelo Internacional "<<endl;
        cout<<"3. Vuelo de Carga "<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;
        if (opc == 1)
        {
            vuelo++;
            cout << "Ingrese su nombre: " << endl;
            cin >> nombre;
            _vueloLocal* v1 = new _vueloLocal(vuelo, "7:00","9:00", "12FD", nombre, 35, 0.13, 56, 65, "domestica");
            v1->getDatos();
            v1->getInfo();
            string resp;
            cout << "Desea modificar su vuelo local? (Y/n)"<<endl;
            cin>>resp;
            if (resp=="Y")
            {
                vuelo++;
                cout<<"Ingrese su nombre" << endl;
                cin>>n1;
                cout<<"Ingrese la categoria"<<endl;
                cin>>n2;
                actualizaVuelos(*v1, vuelo, "12:00", "14:00",65, n2);
                actualizaPasajeros(*v1, "34FD", n1, 45, 0.13, 76);
                v1->getDatos();
                v1->getInfo();
                break;
            }else if(resp=="n")
                menu=false;

        }else if (opc == 2)
        {
            vuelo++;
            string dest;
            cout << "Ingrese su nombre" << endl;
            cin>>nombre;
            cout << "Ingrese el destino" << endl;
            cin>>dest;
            _vueloInternacional* inter1 = new _vueloInternacional(vuelo, "13:00", "23:00", "45GH", nombre, 156.78, 0.13, 189, dest);
            inter1->getDat();
            inter1->getInfo();
            string ans;
            cout << "Desea modificar su vuelo local? (Y/n)"<<endl;
            cin>>ans;
             if (ans=="Y")
            {
                vuelo++;
                string name;
                cout<<"Ingrese su nombre" << endl;
                cin>>name;
                cout<<"Ingrese el destino"<<endl;
                cin>>n2;
                actualizaVuelosInter(*inter1, vuelo, "15:00", "24:00",n2);
                actualizaPasajerosInter(*inter1, "34FD", name, 45, 0.13, 76);
                inter1->getDat();
                inter1->getInfo();
                break;
            }else if(ans=="n")
                menu=false;
        }else if(opc==3){
            _vueloCarga* carg1 = new _vueloCarga(vuelo++, "15:00", "19:00", 900, "Croacia");
            carg1->imprimeDatosCarga();
            cout << "Su vuelo ha sido tramitado, gracias"<<endl;
            break;
        }
        
        


        if (opc==4)
        {   
            cout<<"Gracias por usar nuestro sistema de vuelos."<<endl;
            menu = false;
        }
        

    }

    

    return 0;
}
