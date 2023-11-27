#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "prosimples.h"
#include "provariable.h"

class Inventario : public proSimples, public proVariable
{
private:

public:
    Inventario();
    void importacion(int unidades, string producto, proSimples* productoNuevo);
};

#endif // INVENTARIO_H
