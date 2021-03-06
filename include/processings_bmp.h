#ifndef COURSECPP_PROCESSINGS_BMP_H
#define COURSECPP_PROCESSINGS_BMP_H
#include <fstream>
#include <map>

struct Point {

    Point(int x, int y);
    Point();

    virtual ~Point();

    friend Point operator +(const Point& first, const Point& second);

    void rotate(double angle);

    Point& operator += (const Point &other);

    Point& operator = (const Point &other);

    int x;
    int y;
};



#endif //COURSECPP_PROCESSINGS_BMP_H
