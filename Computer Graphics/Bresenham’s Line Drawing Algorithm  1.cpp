//m < 1

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

    int p = 2 * dy - dx;
    int x = x1, y = y1;

    putpixel(x, y, WHITE);

    while (x < x2) {
        x++;
        if (p < 0)
            p += 2 * dy;
        else {
            y++;
            p += 2 * dy - 2 * dx;
        }
        putpixel(x, y, WHITE);
    }
    getch();
    closegraph();
    return 0;
}
