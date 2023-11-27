#ifndef PROVARIABLE_H
#define PROVARIABLE_H
#include "modelo.h"

class proVariable : public Modelo
{
private:
    vector<Modelo*> productos;
    string edicion;
    float nuevoCosto;
    int numVariacion;
    float nuevoPrecio;
public:
    proVariable();
    proVariable(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int numVariacion);
    void ingresoPVariables();
    void imprimir();
};

#endif // PROVARIABLE_H
