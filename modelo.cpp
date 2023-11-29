#include "modelo.h"

Modelo::Modelo()
{}
Modelo::Modelo(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int unidades) :
    nombre(nombre),
    descripcion(descripcion),
    precioVenta(precioVenta),
    precioCompra(precioCompra),
    unidades(unidades)
{
    this->SKU = SKU;
}
string Modelo::getSKU()
{
    return SKU;
}
string Modelo::getNombre()
{
    return nombre;
}
string Modelo::getDescripcion()
{
    return descripcion;
}
float Modelo::getPrecioVenta()
{
    return precioVenta;
}
float Modelo::getPrecioCompra()
{
    return precioCompra;
}
void Modelo::setSKU(string SKU)
{
    this->SKU = SKU;
}
void Modelo::setNombre(string nombre)
{
    this->nombre = nombre;
}
void Modelo::setDescripcion(string descripcion)
{
    this->descripcion = descripcion;
}
void Modelo::setPrecioVenta(float precioVenta)
{
    this->precioVenta = precioVenta;
}
void Modelo::setPrecioCompra(float precioCompra)
{
    this->precioCompra = precioCompra;
}

void Modelo::setUnidades(int unidades)
{
    this->unidades = unidades;
}

int Modelo::getUnidades()
{
    return unidades;
}
void Modelo::agregarEdicion(string edicion, float nuevoPrecio, float nuevoCosto)
{
    ediciones.push_back(make_pair(edicion, make_pair(nuevoPrecio, nuevoCosto)));
}
string Modelo::imprimir(bool mostrarEdicion)
{
    string datos;
    datos = "SKU: " + SKU + "\n"
            + "Nombre: " + nombre + "\n"
            + "Descripcion: " + descripcion + "\n"
            + "Precio de venta: " + to_string(precioVenta) + "\n"
            + "Precio de compra: " + to_string(precioCompra) + "\n"
            + "Unidades: " + to_string(unidades) + "\n";
    if(mostrarEdicion)
    {
        for (const auto& edicion : ediciones)
        {
            datos += "Edicion: " + edicion.first + "\n";
            datos += "Precio: " + to_string(edicion.second.first) + "\n";
            datos += "Costo: " + to_string(edicion.second.second) + "\n";
        }
    }
    return datos;
}

Modelo::~Modelo()
{

}
