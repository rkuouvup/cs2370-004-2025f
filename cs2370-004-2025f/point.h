#ifndef POINT_H
#define POINT_H

struct point_t {
    double x;
    double y;
};

double distance(point_t& p, point_t& q);
void init_point(point_t& pt, double x, double y);

#endif
