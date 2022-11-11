//
// Created by GusPietrasanta on 10/11/2022.
//
#include <iostream>
//std::string inputString;

//std::string codedMessage = "18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10";
//std::string outputMessage = "";

int digit;
int buffer = 0;
int asciiNumber;
unsigned char letterToPrint;
std::string currentMode = "uppercase";
int currentModulo = 27;
char symbolToPrint;

void printASCIILetter(int asciiToPrint);
void printASCIIPunctuation(int asciiToPrint);
void changeMode();

void printAppropriateLetter();

int main(){
    std::cout << "Enter the coded message:\n";
    digit = std::cin.get();
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
            symbolToPrint = '*';
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