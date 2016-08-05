#pragma once
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

class Generator
{
private:
    unsigned amount;
    std::vector <char> password;
    enum Sign{letter};
    enum Letter{great};
    bool repeat;
public:
    Generator();
    ~Generator();
    void show();
    void getLength();
    void generatePassword();
    void saveToFile();
    bool toRepeat();
};
