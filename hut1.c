#include <stdio.h>
#include <graphics.h> // Include graphics header file

int main() {
    int gd = DETECT, gm; // Detect mode and graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Initialize graphics

    // Draw the hut base (rectangle)
    rectangle(100, 200, 300, 300); // Base of the hut

    // Draw the roof (triangle)
    line(100, 200, 200, 150); // Left side of the roof
    line(200, 150, 300, 200); // Right side of the roof
    line(100, 200, 300, 200); // Bottom of the roof

    // Draw the door (rectangle)
    rectangle(180, 260, 220, 300); // Door

    // Draw the window (rectangle)
    rectangle(140, 220, 160, 240); // Window
    rectangle(165, 220, 185, 240); // Another part of the window

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode

    return 0;
}
