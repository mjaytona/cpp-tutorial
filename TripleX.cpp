#include<iostream>

int main()
{
    // Print opening messages to the terminal
    std::cout << "You are breaking into J&A to steal Matsumoto Jun's HDD...";
    std::cout << std::endl;
    std::cout << "It seems to be locked behind the walls of J&A...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to get into the building undetected..." << std::endl;
    std::cout << std::endl;

    const int CodeA = 5;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << "--> The terminal requires you to input 3 codes in total" << std::endl;
    std::cout << "--> The numbers add up to " << CodeSum << std::endl;
    std::cout << "--> And gives a product of " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}