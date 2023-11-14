#include "fecha.h"
#include"string"
using namespace std;
Fecha::Fecha(){
    dia=00;
    mes=00;
}
Fecha::Fecha(int mes, int dia, int año) : mes(mes),
    dia(dia),
    año(año){

}
string Fecha::tostring(){


    return  to_string(dia) +"/"
           + to_string(mes) +"/"
            + to_string(año);
}

bool Fecha::validar()
{
    if(dia>31 || dia<= 01){
        return false;
    }
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dia>=31){
            return true;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    case 2:

        if(bisiesto()<= 29)
            return true;
        else{
            return false;
        }
        break;

    default:

        return false;

    }
}
bool Fecha::bisiesto(){
    return (año%4 == 0 and año%100 != 0 or año%400 == 0);

}

void Fecha::siguiente(){

    dia++;
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if(dia>31){
            dia=1;
            mes++;
        }
        break;
    case 12:
        if(dia>31){
            dia=1;
            mes=1;
            año++;

        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia>30){
            dia=1;
            mes++;
        }
        break;
    case 2:

        if(bisiesto()){
            if(dia>29){
                dia=1;
                mes++;
            }
          }else
            if(dia>28){
                dia=1;
                mes++;
        break;
        }
    }
}


