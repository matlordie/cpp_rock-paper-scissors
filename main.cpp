#include <iostream>
#include <ctime>
using std::cout, std::cin, std::endl;

void retry();

int humanPoints = 0;
int computerPoint = 0;
int main()
{
    // computer choice
    srand(time(NULL));
    int computerChoice = (random() % 3) + 1; // 1 = Rock, 2 = Paper, 3 = Scissors
    // human choice
    char humanChoice;
    cout << "⚠ ctrl-c to end game \n";
    cout << "(r) Rock, (p) Paper, (s) Scissors: ";
    cin >> humanChoice;

    if (computerChoice == 1 && humanChoice == 's')
    {
        computerPoint++;
        std::string computerChoice = "rock";
        std::string humanChoice = "scissors";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "❌ You Lose \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 2 && humanChoice == 'r')
    {
        computerPoint++;
        std::string computerChoice = "paper";
        std::string humanChoice = "rock";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "❌ You Lose \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 3 && humanChoice == 'p')
    {
        computerPoint++;
        std::string computerChoice = "scissors";
        std::string humanChoice = "paper";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "❌ You Lose \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 3 && humanChoice == 'r')
    {
        humanPoints++;
        std::string computerChoice = "scissors";
        std::string humanChoice = "rock";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "✅ You Won \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 1 && humanChoice == 'p')
    {
        humanPoints++;
        std::string computerChoice = "rock";
        std::string humanChoice = "paper";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "✅ You Won \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 2 && humanChoice == 's')
    {
        humanPoints++;
        std::string computerChoice = "paper";
        std::string humanChoice = "scissors";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "✅ You Won \n";
        cout << "**********************************************" << endl;

        retry();
    }
    else if (computerChoice == 1 && humanChoice == 'r')
    {
        std::string computerChoice = "rock";
        std::string humanChoice = "rock";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "♾ Tie \n";
        cout << "**********************************************" << endl;
        retry();
    }
    else if (computerChoice == 2 && humanChoice == 'p')
    {
        std::string computerChoice = "paper";
        std::string humanChoice = "paper";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "♾ Tie \n";
        cout << "**********************************************" << endl;
        retry();
    }
    else if (computerChoice == 3 && humanChoice == 's')
    {
        std::string computerChoice = "scissors";
        std::string humanChoice = "scissors";

        cout << "**********************************************" << endl;
        cout << "🙂 " << humanPoints << " ➖ " << "👹 " << computerPoint << endl;
        cout << "♾ Tie \n";
        cout << "**********************************************" << endl;
        retry();
    }

    else if (humanChoice != 'p' || 'r' || 's')
    {
        retry();
    }
    return 0;
}

void retry()
{
    main();
}
