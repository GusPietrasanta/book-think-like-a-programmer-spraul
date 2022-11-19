//
// Created by GusPietrasanta on 19/11/2022.
//
// Own symmetrical pattern of hash marks.
// Let's make it a square.

#include <iostream>

int squareSize;

int main(){
    std::cout << "Please enter square side size:";
    std::cin >> squareSize;

    for(int rowNumber = 1; rowNumber <= squareSize; rowNumber++){
        if(rowNumber == 1 || rowNumber == squareSize){
            for(int columnNumber = 1; columnNumber <= squareSize; columnNumber++){
                std::cout << "# ";
            }
        }
        else{
            for(int columnNumber = 1; columnNumber <= squareSize; columnNumber++){
                if(columnNumber == 1 || columnNumber == squareSize){
                    std::cout << "# ";
                }
                else{
                    std::cout << "  ";
                }
            }
        }
        std::cout << "\n";
    }
}