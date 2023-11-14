#ifndef FECHA_H
#define FECHA_H

#include<string>
using namespace std;
class Fecha{
private:
    int mes;
    int dia;
    int año;
public:
    Fecha();
    Fecha(int mes, int dia, int año);
    string tostring();
    bool validar();
    bool bisiesto();
    void siguiente();
};

#endif // FECHA_H
