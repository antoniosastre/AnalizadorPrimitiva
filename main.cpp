//
//  main.cpp
//  AnalizadorPrimitiva
//
//  Created by Antonio Sastre on 29/06/14.
//  Copyright (c) 2014 Antonio Sastre. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>

#include "Combinacion.h"

using namespace std;

int main(int argc, const char * argv[])
{
    vector<Combinacion> combs;
    
    int total = 0;
    
    for (int a = 1; a <= 44;) {
        for (int b = a+1; b <= 45;) {
            for (int c = b+1; c <= 46;) {
                for (int d = c+1; d <= 47;) {
                    for (int e = d+1; e <= 48;) {
                        for (int f = e+1; f <= 49; f++) {
                           combs.push_back(Combinacion(a, b, c, d, e, f));
                            total++;
                        }
                        e++;
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    
    cout << "Combinaciones totales: " << total << endl;
    
    string line;
    ifstream fin;
    fin.open("combs.txt"); // open a file
    int leida = 0;
    if (fin.is_open())
    {
        while ( getline (fin,line) )
        {
            stringstream ss(line);
            
            string fec;
            string a;
            string b;
            string c;
            string d;
            string e;
            string f;
            string comp;
            string jok;
            
            getline( ss, fec, ',' ); //Ignoramos una.
            
            getline( ss, a, ',' );
            getline( ss, b, ',' );
            getline( ss, c, ',' );
            getline( ss, d, ',' );
            getline( ss, e, ',' );
            getline( ss, f, ',' );
            getline( ss, comp, ',' );
            getline( ss, jok, ',' );
            
            for (int i = 0; i < combs.size(); i++) {
                if (combs[i].a == atoi(a.c_str()) && combs[i].b == atoi(b.c_str()) && combs[i].c == atoi(c.c_str()) && combs[i].d == atoi(d.c_str()) && combs[i].e == atoi(e.c_str()) && combs[i].f == atoi(f.c_str())) {
                    combs[i].veces++;
                    break;
                }
            }
            
            cout << ++leida << endl;
        }
        fin.close();
    }
    
    
    return 0;
}

