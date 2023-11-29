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
    int unidades;
    vector<pair<string, pair<float, float>>> ediciones;
protected:
    string SKU;
public:
    Modelo();
    Modelo(string SKU, string nombre, string descripcion, float precioVenta, float precioCompra, int unidades);
    void setSKU(string SKU);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecioVenta(float precioVenta);
    void setPrecioCompra(float precioCompra);
    void setUnidades(int unidades);
    int getUnidades();
    string getSKU();
    string getNombre();
    string getDescripcion();
    float getPrecioVenta();
    float getPrecioCompra();
    void agregarEdicion(string edicion, float nuevoPrecio, float nuevoCosto);
    string imprimir(bool mostrarEdicion);
    virtual ~Modelo();
};

#endif // MODELO_H
