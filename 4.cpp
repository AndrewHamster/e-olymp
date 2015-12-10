#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Circle{
    float x, y, r;
};

double dist(Circle a, Circle b){
    double dist = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return dist;
}

bool areEqual(Circle a, Circle b){
    return (a.x == b.x && a.y == b.y && a.r == b.r);
}

void Magic(){
    Circle a, b;
    cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r ;
    if(areEqual(a, b)){
        cout << -1;
    }   else if(dist(a, b) == a.r + b.r || (max(a.r, b.r) == min(a.r, b.r) + dist(a, b))){
            cout << 1;
    }   else if(dist(a, b) < a.r + b.r && (max(a.r, b.r) < min(a.r, b.r) + dist(a, b))){
            cout << 2;
    }   else    {
            cout << 0;
    }

}

int main(){
    Magic();
    return 0;
}