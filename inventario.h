#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "modelo.h"
#include "provariable.h"
#include "prosimples.h"
#include <iostream>
#include <vector>
#include <iomanip>

class Inventario : public proSimples, public proVariable
{
    private:
        vector<Modelo*> listaProductos;

    public:
    Inventario();
    void agregarProducto(Modelo* nuevoProducto);
    void eliminarProducto(string SKU);
    void agregarUnidades(string SKU, int cantidad);
    void calcularCosto(string SKU,float costoNuevo, int unidadNueva);
    void mostrarDatosDelProducto(string SKU) const;
    void mostrarCuadroDeProductos() const;
    void mostrarCuadroDeInventario() const;
    void ingresoDeInventario(string SKU, int cantidad);
    void egresoDeInventario(string SKU, int cantidad);
    void caracteristicasProductos() const;
};

#endif // INVENTARIO_H
