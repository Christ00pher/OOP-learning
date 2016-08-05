#include <iostream>
#include "Generator.h"

using namespace std;

int main()
{
    Generator gen;
    while (gen.toRepeat())
    {
        gen.generatePassword();
        gen.show();
        
    }
    gen.saveToFile();
    return 0;
}
