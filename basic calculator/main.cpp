#include <iostream>
#include "libs/my_math.h"


using namespace std;

double calculator(int opeation, double num1, double num2)
{
    switch (opeation)
    {
    case 1:
        return sum(num1, num2);

    case 2:
        return subt(num1, num2);
        break;

    case 3:
        return divi(num1, num2);
        break;

    case 4:
        return mult(num1, num2);
        break;

    default:
        cout << "The calculator failed!!" << endl;
        return 0;
    }
}


int main()
{

    long double number1;
    long double number2;

    cout << "Give me a number! ==> " << endl;
    cin >> number1;
    cout << "Give me another number! ==> " << endl;
    cin >> number2;

    long double result = calculator(1, number1, number2);
    cout << "Suma " << result << endl;

    result = calculator(2, number1, number2);
    cout << "Resta " << result << endl;

    result = calculator(3, number1, number2);
    int rest_result = rest(number1, number2);

    cout << "Division " << result << " con resto " << rest_result << endl;

    result = calculator(4, number1, number2);
    cout << "Multiplicacion " << result << endl;

    return 0;
}
