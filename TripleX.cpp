#include<iostream>
#include<ctime>

void PrintIntroduction(int Difficulty)
{
    // Print opening messages to the terminal
    std::cout << "\nYou are breaking into J&A to steal Matsumoto Jun's HDD...\n";
    std::cout << "It seems to be locked behind the walls of the J&A building...\n";
    std::cout << "You need to enter the correct codes to the level " << Difficulty;
    std::cout << " security terminal on the door to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty); // PlayDifficulty goes into Difficulty and prints thru PrintIntroduction in PlayGame

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n\n*** The light on the door turned green... KEEP GOING! ***\n";

        return true;
    } 
    else
    {
        std::cout << "\n\n*** You entered the wrong code and almost tripped the alarm! Careful now! Try Again! ***\n";

        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    int const MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();   // Clears any errors
        std::cin.ignore();  // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "*** CONGRATULATIONS! You escaped with Jun's HDD. YOU WIN! ***\n";

    return 0;
}