#include <graphics.h>

void boundaryFill(int x, int y, int fill_color, int bound_color) {
    if (getpixel(x, y) != fill_color && getpixel(x, y) != bound_color) {
        putpixel(x, y, fill_color);
        boundaryFill(x+1, y, fill_color, bound_color);
        boundaryFill(x-1, y, fill_color, bound_color);
        boundaryFill(x, y+1, fill_color, bound_color);
        boundaryFill(x, y-1, fill_color, bound_color);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a rectangle and fill its border with color
    rectangle(50, 50, 100, 100);
    boundaryFill(75, 75, BLUE, WHITE);

    getch();
    closegraph();

    return 0;
}

