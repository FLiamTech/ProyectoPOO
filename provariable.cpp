#include "provariable.h"


using namespace std;

proVariable::proVariable()
{}

proVariable::proVariable(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra, int unidades, int numVariaciones, string edicion)
    : Modelo(SKU, nombre, descripcion, precioVenta, costoCompra, unidades),
    numVariaciones(numVariaciones),
    edicion(edicion) {}

int proVariable::getNumVariaciones() const
{
    return numVariaciones;
}

void proVariable::setNumVariaciones(int numVariaciones)
{
    this->numVariaciones = numVariaciones;
}

string proVariable::getEdicion() const
{
    return edicion;
}

void proVariable::setEdicion(string edicion)
{
    this->edicion = edicion;
}

void proVariable::agregarEdicion(string edicion, float precio, float costo)
{
    Edicion.emplace_back(edicion, precio, costo);
}

void proVariable::mostrarEdicion() const
{
    for (const auto &edicion : Edicion)
    {
        cout << "edicion: " << edicion.edicion << ", Precio: " << edicion.precio << ", Costo: " << edicion.costo << endl;
    }
}

void proVariable::imprimir() const{
    cout << "SKU: " << getSKU() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Descripcion: " << getDescripcion() << endl;
    cout << "Precio de Venta: " << getPrecioVenta() << endl;
    cout << "Costo de Compra: " << getCostoCompra() << endl;
    cout << "Unidades: " << getUnidades() << endl;
    cout << "Edicion: " << getEdicion() << endl;
}
