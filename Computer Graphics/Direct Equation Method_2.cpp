// m < 1

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
    for (int x = x1; x <= x2; x++) {
        int y = y1 + m * (x - x1);
        putpixel(x, y, WHITE);
    }
    getch();
    closegraph();
    return 0;
}
