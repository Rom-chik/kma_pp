#include <iostream> // developed by Roman Antoshchuk on 30.11.2023
#include <cmath>

void graphic() {
    const int width = 200;
    const int height = 50;
    const double x_min = -5;
    const double x_max = 5;
    const double scale_x = width / (x_max - x_min);
    const double scale_y = height / 2.0;

    char grid[height][width]{};

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            grid[i][j] = ' ';
        }
    }
    for (double x = x_min; x <= x_max; x += (x_max - x_min) / width) {
        double y = cos(x); //sin(x)  any func graphic
        int plotX = (x - x_min) * scale_x;
        int plotY = (1 - y) * scale_y;

        if (plotX >= 0 && plotX < width && plotY >= 0 && plotY < height) {
            grid[plotY][plotX] = '*';
        }
    }
//axis x y
    int axisY = scale_y;
    int axisX = -x_min * scale_x;
    if (axisY >= 0 && axisY < height) {
        for (int i = 0; i < width; ++i) {
            grid[axisY][i] = '_';
        }
    }
    if (axisX >= 0 && axisX < width) {
        for (int i = 0; i < height; ++i) {
            grid[i][axisX] = '|';
        }
    }
//printer =)
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << std::endl;
    }
}