#pragma once
#ifndef USUARIO_H
#define USUARIO_H


using namespace std;

class Usuario {
private:
    int codigoCompra;

public:
    void setCodigoCompra(int _codigoCompra);
    int getCodigoCompra();

    int generador();
    int tarjeta(int);
    int cedula(int);
};

#endif