#include "modelo.h"

#include <iostream>

Modelo::Modelo()
{}

Modelo::Modelo(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra, int unidades)
    : SKU(SKU), nombre(nombre), descripcion(descripcion), precioVenta(precioVenta) , costoCompra(costoCompra), unidades(unidades) {}

string Modelo::getSKU() const
{
    return SKU;
}

string Modelo::getNombre() const
{
    return nombre;
}

string Modelo::getDescripcion() const
{
    return descripcion;
}

float Modelo::getPrecioVenta() const
{
    return precioVenta;
}

float Modelo::getCostoCompra() const
{
    return costoCompra;
}

int Modelo::getUnidades() const
{
    return unidades;
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

void Modelo::setPrecioVenta(float precioDeVenta)
{
    this->precioVenta = precioDeVenta;
}

void Modelo::setCostoCompra(float costoDeCompra)
{
    this->costoCompra = costoDeCompra;
}

void Modelo::setUnidades(int unidades)
{
    this->unidades = unidades;
}

void Modelo::imprimir() const
{
    cout << "SKU: " << SKU << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Precio de Venta: " << precioVenta << endl;
}
