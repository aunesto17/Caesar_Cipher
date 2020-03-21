//
//  main.cpp
//  Cesar
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "cesar.h"

int main(int argc, const char * argv[]) {
    int clave = 11;
    string msj = "paz";
    cesar prueba(clave,msj);
    
    string crip = prueba.encriptar();
    cout << crip << endl;
    
    cesar prueba1(crip,clave);
    string decrip = prueba1.desencriptar();
    cout << decrip << endl;
    return 0;
}
