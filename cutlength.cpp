// 3/27/2016
// http://codeforces.com/contest/598/submission/16142966
//
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#define MAXN 1000
#define MAXM 100

using namespace std;

struct Point{
	long double x, y;
	
	Point() {}
	
	Point(long double _x, long double _y) : x(_x), y(_y);

	Point operator + (const Point& rhs) const {
		return Point(x + rhs.x, y + rhs.y);
	}

	Point operator - (const Point &rhs) const {
		return Point(x - rhs.x, y - rhs.y);
	}

	long double len() const{
		return sqrt(1.0*x*x + 1.0*y*y);
	}

    void read(ifstream fin) {
        fin >> x >> y;
    }
};


long double det(const Point &a, const Point &b) {
    return a.x * b.y - a.y * b.x; 
}

long double dot(const Point &a, const Point &b)  {
    return a.x * b.x + a.y * b.y;
}

using Vec = Point;
using Polygon = vector<Point>;
int n, m;

long double solve(const Polygon &poly, Point a, Vec b) {
    long double ret = 0;
    
}
int main(){
	ifstream fin;
	fin.open("input.txt", ios:in);
	fin >> n >> m;
	for (int i = 0; i < n; i++){
        long double x, y;
        fin >> x >> y;
        polygon.push_back(Point(x, y));
        
    }
    for (int i = 0; i < m; i++) {
        long double sx, sy, ex, ey;
        fin >> sx >> sy >> ex >> ey;
        
    }


}
