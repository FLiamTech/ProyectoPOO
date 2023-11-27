#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "inventario.h"

class Interfaz : public Inventario
{
private:
    Inventario *inventario;
public:
    Interfaz();
    void agregarProducto();
    void imprimir();
};

#endif // INTERFAZ_H
