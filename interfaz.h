#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "inventario.h"

class Interfaz : public Inventario
{
private:
    Inventario inventario;
public:
    void agregarProducto();
    void mostrarProductos();
    void mostrarInventario();
    void caracteristicasProductos();
    bool existeProducto(const string& SKU) const;
    void pedirEgreso();
};

#endif // INTERFAZ_H
