//
// Created by GusPietrasanta on 10/11/2022.
//
#include <iostream>

int digit;
int buffer = 0;
int asciiNumber;
int currentModulo = 27;
char symbolToPrint;
unsigned char letterToPrint;
std::string currentMode = "uppercase";

void changeMode();
void printAppropriateLetter();
void printASCIILetter(int asciiToPrint);
void printASCIIPunctuation(int asciiToPrint);

int main(){
    std::cout << "Enter the coded message:\n";
    // Coded message: 18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10
    digit = std::cin.get();
    // While digit is not a newline (ASCII 10)...
    while(digit != 10){
        if(digit != ','){
        buffer = buffer * 10;
        buffer = buffer + (digit - '0');
        }
        else{
            if(buffer % currentModulo == 0){
                changeMode();
                buffer = 0;
            }
            printAppropriateLetter();
            buffer = 0;
        }
        digit = std::cin.get();
    }
    printAppropriateLetter();
    std::cout << '\n';
}


void printAppropriateLetter() {
    if(currentMode != "punctuation"){
        printASCIILetter(buffer);
    }
    else{
        printASCIIPunctuation(buffer);
    }
}

void printASCIILetter(int asciiToPrint){
    if(asciiToPrint == 0){
        return;
    }
    asciiNumber = asciiToPrint % 27;
    if(currentMode == "uppercase") {
        letterToPrint = asciiNumber + 'A' - 1;
    }
    else{
        letterToPrint = asciiNumber + 'a' - 1;
    }
    std::cout << letterToPrint;
}

void printASCIIPunctuation(int asciiToPrint){
    if(asciiToPrint == 0){
        return;
    }
    asciiNumber = asciiToPrint % 9;
    switch (asciiNumber) {
        case 1:
            symbolToPrint = '!';
            break;
        case 2:
            symbolToPrint = '?';
            break;
        case 3:
            symbolToPrint = ',';
            break;
        case 4:
            symbolToPrint = '.';
            break;
        case 5:
            symbolToPrint = ' ';
            break;
        case 6:
            symbolToPrint = ';';
            break;
        case 7:
            symbolToPrint = '"';
            break;
        case 8:
            symbolToPrint = '`';
            break;
        default:
            symbolToPrint = '\'';
            break;
    }
    std::cout << symbolToPrint;
}

void changeMode(){
    if(currentMode == "uppercase"){
        currentMode = "lowercase";
    }
    else if(currentMode == "lowercase"){
        currentMode = "punctuation";
        currentModulo = 9;
    }
    else{
        currentMode = "uppercase";
        currentModulo = 27;
    }
}