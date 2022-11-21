//
// Created by GusPietrasanta on 19/11/2022.
//
// ISBN-13 Validator or Check Digit generator

#include <iostream>

int main(){
    int digitsCount = 0;
    int currentValueToAdd;
    int currentDigit;
    int totalSumIfISBN13 = 0;
    int totalSumIfISBN10 = 0;
    int checkDigit = 0;
    std::string ISBNNumber;

    std::cout << "Please enter an ISBN number "
                 "(9 or 12 characters to generate the check digit and 10 or 13 to validate it):\n";
    currentDigit = std::cin.get();

    while(currentDigit != 10){
        if(currentDigit != '\0'){
            ISBNNumber[digitsCount] = char(currentDigit);
        }
        digitsCount++;
        if(digitsCount == 13){
            checkDigit = currentDigit - '0';
            break;
        }
        currentDigit = currentDigit - '0';
        if(digitsCount <= 10){
            totalSumIfISBN10 = totalSumIfISBN10 + (currentDigit * (11 - digitsCount));
        }
        if(digitsCount % 2 == 1){
            currentValueToAdd = currentDigit;
        }
        else{
            currentValueToAdd = currentDigit * 3;
        }
        totalSumIfISBN13 = totalSumIfISBN13 + currentValueToAdd;
        currentDigit = std::cin.get();
    }

    if(digitsCount == 13){
        std::cout << "The total sum of the entered ISBN Number (" << ISBNNumber.c_str() << ") is "
        << totalSumIfISBN13 << " and the check digit is " << checkDigit << ".\n";
        if(((totalSumIfISBN13 + checkDigit) % 10) == 0){
            std::cout << "The entered ISBN-13 number is VALID.\n";
        }
        else{
            std::cout << "The entered ISBN-13 number is INVALID.\n";
        }
    }
    else if(digitsCount == 12){
        checkDigit = 10 - (totalSumIfISBN13 % 10);
        std::cout << "The generated check digit for the entered ISBN Number (" << ISBNNumber.c_str() << ") is "
        << checkDigit << ".\n";
    }
    else if(digitsCount == 10) {
        if (totalSumIfISBN10 % 11 == 0) {
            std::cout << "The total sum of the entered ISBN-10 "
                         "(" << ISBNNumber.c_str() << ") number is " << totalSumIfISBN10 << ".\n";
            std::cout << "The entered ISBN-10 number is VALID.\n";
        } else {
            std::cout << "The total sum of the entered ISBN-10 "
                         "(" << ISBNNumber.c_str() << ") number is " << totalSumIfISBN10 << ".\n";
            std::cout << "The entered ISBN-10 number is INVALID.\n";
        }
    }
    else if(digitsCount == 9){
        checkDigit = 11 - (totalSumIfISBN10 % 11);
        std::cout << "The generated check digit for the entered ISBN-10 "
                     "(" << ISBNNumber.c_str() << ") number is " << checkDigit << ".\n";
    }
    else{
        std::cout << "Invalid ISBN number entered.\n";
    }
    // TODO: ISBN 10 to 13 converter

}