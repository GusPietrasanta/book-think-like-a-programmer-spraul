//
// Created by GusPietrasanta on 10/11/2022.
//

#include <iostream>

int userInput;

int output;

int inputLength = 0;

int doubleDigit(int digit);

int main(){
    std::cout << "Please enter the number to check:";
    std::cin >> userInput;

    int checkLength = userInput;

    do{
        inputLength++;
        checkLength = checkLength/10;
    }while (checkLength != 0);

    //output = doubleDigit(userInput);

    std::cout << inputLength << " digits in this number.\n";

    int printIndividually = userInput;

    int position = 1;

    std::string outputMessage;

    int outputNumber;

    int totalSum;

    while(printIndividually > 0)
    {
        int digit = printIndividually % 10;
        printIndividually = printIndividually / 10;
        if(position % 2 == 0){
            outputNumber = doubleDigit(digit);
            outputMessage = ". It's modified. Output = ";
        }
        else{
            outputNumber = digit;
            outputMessage = ". Stays the same. Output = ";
        }
        totalSum = totalSum + outputNumber;
        std::cout << digit << " is in position " << position << outputMessage << outputNumber << "\n";
        position++;
    }

    std::cout << "The total sum is: " << totalSum << "\n";

    if(totalSum % 10 == 0){
        std::cout << "Number checks. Valid number!\n";
    }
    else{
        std::cout << "Number doesn't check. Invalid number.\n";
    }
}

int doubleDigit(int digit){
    int doubleDigit = digit * 2;
    if(doubleDigit >= 10){
        doubleDigit = 1 + (doubleDigit - 10);
    }
    return doubleDigit;
}