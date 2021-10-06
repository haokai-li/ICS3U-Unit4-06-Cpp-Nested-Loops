// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about nested loops

#include <iostream>

int main() {
    // This Program is about nested loops
    int loopNumerR = 0;
    int loopNumerG = 0;
    int loopNumerB = 0;

    // process
    for (loopNumerR = 0; loopNumerR < 256; loopNumerR++) {
        for (loopNumerG = 0; loopNumerG < 256; loopNumerG++) {
            for (loopNumerB = 0; loopNumerB < 256; loopNumerB++) {
                // output
                std::cout << "RGB" << "(" << loopNumerR
                << "," << loopNumerG << "," << loopNumerB << ")" << std::endl;
            }
        }
    }
    std::cout << "\nDone." << std::endl;
}
