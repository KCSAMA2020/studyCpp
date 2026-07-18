#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point{
    double x, y;
};

double distance(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y; 
    cout << fixed << setprecision(2) << "distance:" << distance(p1, p2) << endl;

    system("pause");
    return 0;
}