//
//  Combinacion.h
//  AnalizadorPrimitiva
//
//  Created by Antonio Sastre on 29/06/14.
//  Copyright (c) 2014 Antonio Sastre. All rights reserved.
//

#ifndef __AnalizadorPrimitiva__Combinacion__
#define __AnalizadorPrimitiva__Combinacion__

#include <iostream>

class Combinacion {
    
public:
    
    int a, b, c, d, e, f;
    int veces;
    int prob;
    
    Combinacion();
    Combinacion(int a, int b, int c, int d, int e, int f);
    
    void masmas();
    
};

#endif /* defined(__AnalizadorPrimitiva__Combinacion__) */
