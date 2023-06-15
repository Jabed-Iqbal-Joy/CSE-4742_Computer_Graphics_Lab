#include <graphics.h>
#include <stdlib.h>

int main() {
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "");

   // Load the image
   int width=10, height=10;
   image = readimagefile("flower.jpeg", 0, 0, width, height);

   // Display the image
   putimage(0, 0, &image, COPY_PUT);

   // Pause the program until a key is pressed
   getch();

   closegraph();
   return 0;
}
