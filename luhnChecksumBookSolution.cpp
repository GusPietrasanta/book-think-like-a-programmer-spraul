//
// Created by GusPietrasanta on 10/11/2022.
// Totally copied from "Think like a programmer" - V. Anton Spraul book.
//

#include <iostream>

char digit;
int oddLengthChecksum = 0;
int evenLengthChecksum = 0;
int position = 1;

int doubleDigitValue(int digitToDouble);

int main(){
    std::cout << "Enter a number: ";
    digit = std::cin.get();
    // While digit is not end of line
    while (digit != 10){
        if(position % 2 == 0){
            oddLengthChecksum += doubleDigitValue(digit - '0');
            evenLengthChecksum += digit - '0';
        }
        else{
            oddLengthChecksum += digit - '0';
            evenLengthChecksum += doubleDigitValue(digit - '0');
        }
        digit = std::cin.get();
        position++;
    }
    int checksum;
    if ((position - 1) % 2 == 0){
        checksum = evenLengthChecksum;
    }
    else{
        checksum = oddLengthChecksum;
    }
    std::cout << "Checksum is " << checksum << ". \n";

    if(checksum % 10 == 0){
        std::cout << "Checksum is divisible by 10. Valid.\n";
    }
    else{
        std::cout << "Checksum is not divisible by 10. Invalid.\n";
    }

}

int doubleDigitValue(int digitToDouble){
    int doubleDigit = digitToDouble * 2;
    if(doubleDigit >= 10){
        doubleDigit = 1 + (doubleDigit - 10);
    }
    return doubleDigit;
}
