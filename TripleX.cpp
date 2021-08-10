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

    const int CodeA = 3;
    const int CodeB = 2;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << "--> The terminal requires you to input 3 codes in total" << std::endl;
    std::cout << "--> The numbers add up to " << CodeSum << std::endl;
    std::cout << "--> And when multiplied, gives a product of " << CodeProduct << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the 3-number code below:" << std::endl;

    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << std::endl;
    std::cout << "You have entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}