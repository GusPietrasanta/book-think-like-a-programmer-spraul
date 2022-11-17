//
// Created by GusPietrasanta on 15/11/2022.
//
#include <iostream>

void printCharacters();

int spacesOnTheLeft = 0;

int hashesOnTheLeft;

int spacesInTheMiddle;
int hashesOnTheRight;

int main(){

    int requiredNumberOfRows;
    std::cout << "Number of rows:";
    std::cin >> requiredNumberOfRows;
    int rowNumber = 1;

    spacesInTheMiddle = requiredNumberOfRows * 2;
    int halfOfTheShape = requiredNumberOfRows / 2;
    while (rowNumber <= requiredNumberOfRows){
        if (rowNumber <= halfOfTheShape) {
            hashesOnTheRight = hashesOnTheLeft = rowNumber;
            spacesInTheMiddle = spacesInTheMiddle - 4;
            printCharacters();
            spacesOnTheLeft++;
        }
        else if(rowNumber == (halfOfTheShape + 1)){
            spacesOnTheLeft--;
            printCharacters();
            spacesInTheMiddle = 0;
        }
        else{
            spacesOnTheLeft--;
            hashesOnTheRight--;
            hashesOnTheLeft--;
            spacesInTheMiddle = spacesInTheMiddle + 4;
            printCharacters();
        }
        rowNumber++;

    }
}

void printCharacters() {
    for (int i = 0; i < spacesOnTheLeft; i++) {
        std::cout << " ";
    }
    for (int j = 0; j < hashesOnTheLeft; j++) {
        std::cout << "#";
    }
    for (int k = 0; k < spacesInTheMiddle; k++) {
        std::cout << " ";
    }
    for (int l = 0; l < hashesOnTheRight; l++) {
        std::cout << "#";
    }
    std::cout << "\n";
}
