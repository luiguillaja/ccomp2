#include <iostream>
#include "Vector.h"

using namespace std;
Vector::Vector()
{
    comienzo.modify_point(0.0,0.0);
    fin.modify_point(0.0,0.0);
}

Vector::Vector(Point ncomienzo,Point nfin)
{
    comienzo=ncomienzo;
    fin=nfin;
}
Vector::Vector(Vector &v)
{
    comienzo = v.comienzo; fin = v.fin;
}
void Vector::set_comienzo(Point ncomienzo)
{
    comienzo=ncomienzo;
}
void Vector::set_fin(Point nfin)
{
    fin=nfin;
}
Point Vector::get_comienzo()
{
    return comienzo;
}
Point Vector::get_fin()
{
    return fin;
}
void Vector::imprimir_vector()
{
    comienzo.imprimir_point(); cout <<  "->"; fin.imprimir_point();cout<< endl;
}
