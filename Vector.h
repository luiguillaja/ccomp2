#ifndef VECTOR_H
#define VECTOR_H
#include<Point.h>


class Vector
{
public:
    Vector();
    Vector(Point ncomienzo,Point nfin);
    Vector(Vector &v);
    void set_comienzo(Point ncomienzo);
    void set_fin(Point nfin);
    Point get_comienzo();
    Point get_fin();
    void imprimir_vector();
    void modify_vector();
private:
    Point comienzo,fin;
};

#endif // VECTOR_H
