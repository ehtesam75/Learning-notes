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

    int dx = x2 - x1;
    int dy = y2 - y1;
    float x = x1;
    float y = y1;
    float m_inv = (float)dx / dy;

    for (int i = 0; i <= dy; i++) {
        putpixel((int)x, (int)y, WHITE);
        y++;
        x += m_inv;
    }
    getch();
    closegraph();
    return 0;
}

