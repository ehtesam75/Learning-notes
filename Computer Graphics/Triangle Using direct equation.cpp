#include <graphics.h>
#include <iostream>
using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    float m;
    m = (float)(y2 - y1)/(x2 - x1);

    if(abs(m) <= 1){
        if (x1 > x2) {
            swap(x1, x2);
            swap(y1, y2);
        }
        for(int x = x1; x <= x2; x++){
            int y = y1 + m * (x - x1);
            putpixel(x, y, WHITE);
        }
    }
    else {
        if(y1 > y2){
            swap(x1, x2);
            swap(y1, y2);
        }
        for(int y = y1; y <= y2; y++){
            int x = x1 + (y - y1) / m;
            putpixel(x, y, WHITE);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int H = getmaxy(); 

    int x1, y1, x2, y2, x3, y3;

    cout << "Enter (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter (x3 y3): ";
    cin >> x3 >> y3;

    drawLine(x1, H - y1, x2, H - y2);
    drawLine(x2, H - y2, x3, H - y3);
    drawLine(x3, H - y3, x1, H - y1);

    getch();
    closegraph();
    return 0;
}