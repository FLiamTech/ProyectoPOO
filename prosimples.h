#ifndef PROSIMPLES_H
#define PROSIMPLES_H

#include <iostream>
#include "modelo.h"

class proSimples : public Modelo
{
    public:
        proSimples();
        proSimples(string SKU, string nombre, string descripcion, float precioVenta, float costoCompra, int unidades);
        void imprimir() const;
};


#endif // PROSIMPLES_H
