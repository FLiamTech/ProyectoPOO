#include "proSimples.h"
proSimples::proSimples() : Modelo()
{}

proSimples::proSimples(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra, int unidades)
    : Modelo(SKU, nombre, descripcion, precioVenta, costoCompra, unidades)
{}

void proSimples::imprimir() const
{
    cout << "SKU: " << getSKU() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Descripcion: " << getDescripcion() << endl;
    cout << "Precio de Venta: " << getPrecioVenta() << endl;
    cout << "Unidades: " << getUnidades() << endl;
}

