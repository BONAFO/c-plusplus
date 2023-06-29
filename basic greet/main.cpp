#include <iostream>
#include "libs/functions.h"
#include "cctype"

using namespace std;

int main()
{
    string name = get_name();
    greet(name);
    ask(name);
    return 0;
}