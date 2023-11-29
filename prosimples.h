#ifndef PROSIMPLES_H
#define PROSIMPLES_H

#include <iostream>
#include "modelo.h"

class proSimples : public Modelo
{
private:
    vector<Modelo*> productos;
public:
    proSimples();
    proSimples(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int unidades);
    void ingresoPSimple();
    void imprimir1();
    void agregarProductoEx(int nuevaUnidad, float nuevoCosto);
};

#endif // PROSIMPLES_H
