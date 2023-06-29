#include <iostream>
#include "libs/log.h"
#include <iomanip>
using namespace std;

// black        30         40
// red          31         41
// green        32         42
// yellow       33         43
// blue         34         44
// magenta      35         45
// cyan         36         46
// cyan         37         47

// int get_color (string color){
//     if(){

//     }
// }

int perro()
{
    return -20;
}

void change_precision(int precision)
{
    cout << setprecision(precision);
}

int main()
{

    // TRABAJANDO CON FLOATS
    //  change_precision(10);
    //     long double numer = 16.00;
    //      log(numer);
    //  numer = 16.01;
    //      log(numer);

    // TRABAJANDO CON CHAR NUMBS
    //  char cosa  =12;
    //  log(cosa);
    //  cout << static_cast<int>(cosa) << endl;

    // TABAJANDO CON AUTO
    //  auto cosa = false;
    //  log(cosa);
    //  cosa = "perro";
    //  log(cosa);
    //  auto cosa2 = "perro";
    //  log(cosa2);
    //  //err
    //  // cosa2 = 22;
    //  cosa2 = "22";
    //  log(cosa2);

    unsigned int cosa3 = -21;
    log(cosa3);

    signed int cosa4 = -21;
    log(cosa4);

    // err
    //     signed auto cosa5= -21;
    //      log(cosa5);

    return 0;
}
