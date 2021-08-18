#include<iostream>

void PrintIntroduction(int Difficulty)
{
    // Print opening messages to the terminal
    std::cout << "\nYou are breaking into J&A to steal Matsumoto Jun's HDD...\n";
    std::cout << "It seems to be locked behind the walls of the J&A building...\n";
    std::cout << "You need to enter the correct codes to the level " << Difficulty;
    std::cout << " security terminal on the door to get into the building undetected...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = 3;
    const int CodeB = 2;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << "--> The terminal requires you to input 3 codes in total\n";
    std::cout << "--> The numbers add up to " << CodeSum;
    std::cout << "\n--> And when multiplied, gives a product of " << CodeProduct;
    std::cout << "\n\nEnter the 3-number code below:\n";

    // Store player inputs
    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "\nYou have entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check whether player answer is right or wrong
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n\nThe light on the door turned green...\n";
        std::cout << "The security measures for the whole lobby has been deactivated...\n";
        std::cout << "The back-door opened...\n";
        std::cout << "You head straight to the elevator to Basement 2 and found Jun's HDD on the table.\n";
        std::cout << "YOU WIN!\n";
        return true;
    } 
    else
    {
        std::cout << "\n\nYour tripped the alarm!\n";
        std::cout << "The guards caught you...\n";
        std::cout << "GAME OVER\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();   // Clears any errors
        std::cin.ignore();  // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    return 0;
}