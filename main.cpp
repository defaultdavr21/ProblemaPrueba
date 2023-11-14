#include <iostream>
#include"fecha.h"

using namespace std;

int main()
{
    cout<<"Prueba "<<endl;
    Fecha f(03,03,2023);
    cout<<f.tostring()<<endl;
    if(f.validar()){
        cout<<"la fecha es valida"<<endl;
        f.siguiente();
        cout<<"Fecha del dia siguiente:"<<endl,
        cout<<f.tostring()<<endl;
    }else{
        cout<<"la fecha no es valida"<<endl;
    }

    return 0;
}
