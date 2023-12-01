// proVariable.h
#ifndef PROVARIABLE_H
#define PROVARIABLE_H

#include <iostream>
#include "modelo.h"
#include <iostream>
#include <vector>
#include <string>

class proVariable : public Modelo
{
private:
    struct agregarEdicion
    {
        string edicion;
        float precio;
        float costo;

        agregarEdicion(const string &edicion, float newPrecio, float newCosto) : edicion(edicion), precio(newPrecio), costo(newCosto) {}
    };
    int numVariaciones;
    string edicion;
    vector<agregarEdicion> Edicion;

public:
    proVariable();
    proVariable(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra,int unidades, int numVariaciones, string edicion);
    int getNumVariaciones() const;
    void setNumVariaciones(int numVariaciones);
    string getEdicion() const;
    void setEdicion(string edicion);
    void agregarEdicion(string edicion, float precio, float costo);
    void mostrarEdicion() const;
    void imprimir() const;

};

#endif // PROVARIABLE_H
