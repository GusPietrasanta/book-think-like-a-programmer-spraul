//
// Created by GusPietrasanta on 10/11/2022.
//

#include <iostream>

int squareSize;

int main() {

    std::cout << "Please enter the side of the required square:" << std::endl;
    std::cin >> squareSize;

    for (int row = 0; row < squareSize; row++)
    {
        for(int column = 0; column < squareSize; column++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}