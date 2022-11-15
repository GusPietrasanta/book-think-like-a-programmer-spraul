//
// Created by GusPietrasanta on 15/11/2022.
//
#include <iostream>
int requiredNumberOfRows;

int main(){
    std::cout << "Number of rows:";
    std::cin >> requiredNumberOfRows;
    int rowNumber = 1;
    int numberOfSpaces;
    int numberOfHashes;
    int numberOfSpacesToPrint;
    int halfOfTheShape = requiredNumberOfRows / 2;
    while(rowNumber <= requiredNumberOfRows){
        if(rowNumber <= halfOfTheShape) {
            numberOfHashes = rowNumber * 2;
            numberOfSpaces = (requiredNumberOfRows - numberOfHashes);
            numberOfSpacesToPrint = numberOfSpaces / 2;
        }
        else if(rowNumber == (halfOfTheShape + 1)){
            ; // Do nothing
        }
        else{
            numberOfHashes = numberOfHashes - 2;
            numberOfSpaces = (requiredNumberOfRows - numberOfHashes);
            numberOfSpacesToPrint = numberOfSpaces / 2;
        }
        for(int i = 1; i <= numberOfSpacesToPrint; i++){
            std::cout << " ";
        }
        for(int j = 1; j <= numberOfHashes; j++){
            std::cout << "#";
        }
        std::cout << "\n";
        rowNumber++;
    }
}