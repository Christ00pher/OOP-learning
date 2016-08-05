#include "Generator.h"

Generator::Generator()
{
    srand(time(NULL));
    getLength();
}

Generator::~Generator()
{
    password.clear();
    amount = 0;
}

void Generator::show()
{
    std::cout << "Generated password is: ";
    for (auto x : password)
        std::cout << x;
}

void Generator::getLength()
{
    system("CLS");
    std::cout << "Number of characters in password: ";
    std::cin >> amount;
}

void Generator::generatePassword()
{
    for (unsigned i = 0; i < amount; i++)
    {
        //if random number == 0, then we generate a letter
        //in other way a number is generated
        if (rand() % 2 == letter)
        {
            //here we choose to generate a great or small letter
            if (rand() % 2 == great)
                password.push_back(char(rand() % 26 + 65));
            else
                password.push_back(char(rand() % 26 + 97));
        }
        else //generate and put down a number
            password.push_back(rand() % 10 + 48);
    }
}

bool Generator::repeat()
{
    char repeat;
    std::cout << "\nCreate other password (y/n): ";
    std::cin >> repeat;
    return (repeat == 'y');
}

void Generator::saveToFile()
{
    std::ofstream file;
    file.open("password.txt", std::ios::out);
    for (auto x : password)
        file << x;
    file << std::endl;
    file.close();
    std::cout << "Password was succesfully saved to file.\n";
    password.clear();
}
