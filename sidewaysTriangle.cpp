//
// Created by GusPietrasanta on 10/11/2022.
//

#include <iostream>

int rowsRequired;
int emptyBoxes;
int halfPlusOne; // Not a Boquita reference
int numberOfHashesToPrint;

int main (){

    do {
        std::cout << "Please enter the number of lines required for the sideways triangle (has to be an odd number):";
        std::cin >> rowsRequired;
    }while(rowsRequired % 2 == 0);

    halfPlusOne = (rowsRequired / 2) + 1;

    for(int row = 1; row <= rowsRequired; row++)
    {
        emptyBoxes = abs(halfPlusOne - row);
        numberOfHashesToPrint = halfPlusOne - emptyBoxes;

        for(int column = 1; column <= numberOfHashesToPrint; column++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }

}