// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: April 26, 2025
// This program displays all the Rgb color in a 15 increment
#include <iostream>
#include <cstdio>

int main() {
    // Nested loop for all the colors
    for (int r = 0; r <= 255; r += 15) {
        for (int g = 0; g <= 255; g += 15) {
            for (int b = 0; b <= 255; b += 15) {
                // Prints out the individual colors.
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)"
                    , r, g, b, r, g, b);
            }
        }
    }
}
