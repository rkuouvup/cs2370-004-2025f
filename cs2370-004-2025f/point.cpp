#include <cmath>
#include "point.h"

double distance(point_t& p, point_t& q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

void init_point(point_t& pt, double x, double y) {
    pt.x = x;
    pt.y = y;
}
