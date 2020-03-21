//
//  cesar.cpp
//  Cesar
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "cesar.h"


cesar::cesar(int c,string m)
{
    clave   = c;
    mensaje = m;
    tamMsj  = int(mensaje.size());
}

cesar::cesar(string m,int c)
{
    cifrado = m;
    clave   = c;
    tamMsj  = int(cifrado.size());
}

string cesar::encriptar()
{
    for (int i=0; i<tamMsj; i++)
        cifrado += alfa[modulo_c(int(alfa.find(mensaje[i]))+clave, tamAlfa)];
    return cifrado;
}

string cesar::desencriptar()
{
    for (int i=0; i<tamMsj; i++)
        descrifrado += alfa[modulo_c(int(alfa.find(cifrado[i]))-clave, tamAlfa)];
    return descrifrado;
}

int cesar::modulo_c(int a,int b)
{
    if      (a==0) return 0;
    return  (a>0) ? a - ((a/b) * b) : abs(((a/b)-1) * b) + a;
}