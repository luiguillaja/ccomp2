#ifndef POINT_H
#define POINT_H


class Point
{
    public:

        Point();
        Point(double nx,double ny);
        Point(Point &p);
        void setx(double mx);
        void sety(double my);
        double getx();
        double gety();
        void imprimir_point();
        void modify_point(double nx,double ny);
    private:
        double x;
        double y;
};

#endif // POINT_H
