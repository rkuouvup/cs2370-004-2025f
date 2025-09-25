#ifndef POINT_H
#define POINT_H

#include <vector>
using namespace std;

struct point_t {
    double x;
    double y;
};

double distance(point_t& p, point_t& q);
void init_point(point_t& pt, double x, double y);
void dist_to_orig (point_t p[], int len, double d[]);
void vdist_to_orig (vector<point_t>& p, vector<double>& d);

#endif
