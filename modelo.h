#ifndef  MODELO_H
#define  MODELO_H

#include <vector>
#include <string>


using namespace std;


class Modelo
{
private:
    string nombre;
    string descripcion;
    float precioVenta;
    float precioCompra;
    vector<pair<string, pair<float, float>>> ediciones;
protected:
    string SKU;
public:
    Modelo();
    Modelo(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra);
    void setSKU(string SKU);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecioVenta(float precioVenta);
    void setPrecioCompra(float precioCompra);
    string getSKU();
    string getNombre();
    string getDescripcion();
    float getPrecioVenta();
    float getPrecioCompra();
    void agregarEdicion(string edicion, float nuevoPrecio, float nuevoCosto);
    string imprimir(bool mostrarEdicion);
};

#endif // MODELO_H
