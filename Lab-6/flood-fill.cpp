#include <graphics.h>

void floodFill(int x, int y, int fill_color, int old_color) {
    if (getpixel(x, y) == old_color) {
        putpixel(x, y, fill_color);
        floodFill(x+1, y, fill_color, old_color);
        floodFill(x-1, y, fill_color, old_color);
        floodFill(x, y+1, fill_color, old_color);
        floodFill(x, y-1, fill_color, old_color);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a rectangle and fill it with color
    rectangle(50, 50, 100, 100);
    floodFill(75, 75, WHITE, BLACK);

    getch();
    closegraph();

    return 0;
}

