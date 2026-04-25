// m > 1
#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int x1, y1, x2, y2;
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;
    float m = (float)(y2 - y1) / (x2 - x1);
    for (int y = y1; y <= y2; y++) {
        int x = x1 + (y - y1) / m;
        putpixel(x, y, WHITE);
    }

