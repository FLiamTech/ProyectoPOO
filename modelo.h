#ifndef MODELO_H
#define MODELO_H

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Modelo
{
private:
    string SKU;
    string nombre;
    string descripcion;
    float precioVenta;
    float costoCompra;
    int unidades;
public:
    Modelo();
    Modelo(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra, int unidades);
    string getSKU() const;
    string getNombre() const;
    string getDescripcion() const;
    float getPrecioVenta() const;
    float getCostoCompra() const;
    int getUnidades() const;
    void setSKU(string SKU);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecioVenta(float precioVenta);
    void setCostoCompra(float costoCompra);
    void setUnidades(int unidades);
    virtual void imprimir() const = 0;
};

#endif // MODELO_H
