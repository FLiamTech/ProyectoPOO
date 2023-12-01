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
    void calcularCosto(string SKU,float costoNuevo, int unidadNueva);
    void mostrarDatosDelProducto(string SKU) const;
    void cuadroProductos() const;
    void cuadroInventario() const;
    void calculoEgreso(const string& SKU, int cantidad);
    void caracteristicasProductos() const;
};

#endif // INVENTARIO_H
