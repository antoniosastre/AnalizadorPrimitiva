//
//  Combinacion.cpp
//  AnalizadorPrimitiva
//
//  Created by Antonio Sastre on 29/06/14.
//  Copyright (c) 2014 Antonio Sastre. All rights reserved.
//

#include "Combinacion.h"

Combinacion::Combinacion(){
    a=b=c=d=e=f=0;
    veces=0;
    prob=0;
}

Combinacion::Combinacion(int a, int b, int c, int d, int e, int f){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
    this->f = f;
    this->veces = 0;
    this->prob = 0;
}

void Combinacion::masmas(){
    this->veces++;
}