//
// Created by GusPietrasanta on 19/11/2022.
//
// ISBN-13 Validator or Check Digit generator

#include <iostream>

int main(){
    int digitsCount = 0;
    int currentValueToAdd;
    int currentDigit;
    int totalSum;
    int checkDigit = 0;

    std::cout << "Please enter an ISBN number (12 characters to generate the check digit or 13 to validate it):\n";
    currentDigit = std::cin.get();
    while(currentDigit != 10){
        digitsCount++;
        if(digitsCount == 13){
            checkDigit = currentDigit - '0';
            break;
        }
        currentDigit = currentDigit - '0';
        if(digitsCount % 2 == 1){
            currentValueToAdd = currentDigit * 1;
        }
        else{
            currentValueToAdd = currentDigit * 3;
        }
        totalSum = totalSum + currentValueToAdd;
        currentDigit = std::cin.get();
    }

    if(digitsCount == 13){
        std::cout << "The total sum is " << totalSum << " and the check digit is " << checkDigit << ".\n";
        if(((totalSum + checkDigit) % 10) == 0){
            std::cout << "The entered ISBN number is VALID.\n";
        }
        else{
            std::cout << "The entered ISBN number is INVALID.\n";
        }
    }
    else if(digitsCount == 12){
        checkDigit = 10 - (totalSum % 10);
        std::cout << "The generated check digit for the entered ISBN number is " << checkDigit << ".\n";
    }
    else{
        std::cout << "Invalid ISBN number entered.\n";
    }
    // TODO: ISBN 10 generator/validator
    // TODO: ISBN 10 to 13 converter
}