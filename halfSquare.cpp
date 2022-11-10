//
// Created by GusPietrasanta on 10/11/2022.
//

#include <iostream>

int longerRow;

int main(){


    std::cout << "Please enter the desired longer row:";
    std::cin >> longerRow;

    for(int row = longerRow; row > 0; row--)
    {
        for(int column = 0; column < row; column++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }

}