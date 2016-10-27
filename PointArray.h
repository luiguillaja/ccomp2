#ifndef POINTARRAY_H
#define POINTARRAY_H


class PointArray
{
private:
    int Size;
    Point *points;
    void Resize(const int);
public:
    PointArray()
    {
        Size=0;
        points=new Point[Size];
    }
    PointArray(const Point pt[],const int x);
    {
        Size=x;
        points=new Point[Size];
        for(int i=0;)

    }
};

#endif // POINTARRAY_H
