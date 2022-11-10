//
// Created by GusPietrasanta on 27/08/2022.
//

#include <iostream>

void awfullyNestedTernaryOperators();

int main() {
    std::string name;
    std::cout << "What's your name?:"<<std::endl;
    std::cin >> name;
    std::cout << "Hello World! This is " << name << ", programming C++.\n";


    int a = 1;
    int b = 2;

    int temp = b;
    b = a;
    a = temp;

    std::cout << "\n" << a << "\n";
    std::cout << "\n" << b << "\n\n";

    awfullyNestedTernaryOperators();

}

void awfullyNestedTernaryOperators()

{
    for (int i = 1; i < 100; i++)
    {
        std::string number = std::to_string(i) + "\n";
        std::string toPrint = (i % 5 == 0 && i % 3 == 0)
                              ? "FizzBuzz\n" : (i % 5 == 0)
                                               ? "Buzz\n" : (i % 3 == 0)
                                                            ? "Fizz\n" : number;
        std::cout << toPrint;
    }
}
