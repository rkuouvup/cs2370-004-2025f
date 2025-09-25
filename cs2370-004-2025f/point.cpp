#include <cmath>
#include "point.h"

double distance(point_t& p, point_t& q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

void init_point(point_t& pt, double x, double y) {
    pt.x = x;
    pt.y = y;
}

void dist_to_orig (point_t p[], int len, double d[]) {
    point_t orig = {0.0, 0.0};
    for (int i = 0; i < len; i++) {
        d[i] = distance(p[i], orig);
    }
}

void vdist_to_orig (vector<point_t>& p, vector<double>& d) {
    point_t orig = {0.0, 0.0};
    for (int i = 0; i < p.size(); i++) {
        d[i] = distance(p[i], orig);
    }
}
