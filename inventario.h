#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "prosimples.h"
#include "provariable.h"

class Inventario : public proSimples, public proVariable
{
private:

public:
    Inventario();
    void importacionPS(int unidades, string producto, proSimples* productoNuevo, vector<Modelo*> productos);
    void imporatacionPV(int unidades, string producto, proVariable* productoNuevo, vector<Modelo*> productos);
    void buscarDatoPS(string datoBuscar, vector<Modelo*> productos, proSimples* &dato);
    void buscarDatoPV(string datoBuscar, vector<Modelo*> productos, proVariable* &dato);
};

#endif // INVENTARIO_H
