//
// Created by GusPietrasanta on 15/11/2022.
//
#include <iostream>


int main(){
    int numberOfRows;
    int numberOfHashes;
    std::cout << "How many rows do you want for your upside-down triangle?:";
    std::cin >> numberOfRows;
    numberOfHashes = numberOfRows * 2;
    //for(int i = 0; i < numberOfRows; i++){
    //    std::cout << i << "\n";
    //}

    for(int i = 0; i < numberOfRows; i++){
        for(int j = 0; j < i; j++){
            std::cout << " ";
        }
        for(int k = 0; k < numberOfHashes;  k++){
            std::cout << "#";
        }
        numberOfHashes = numberOfHashes - 2;
        std::cout << "\n";
    }
}