#include <iostream>
#include <Windows.h>
#include <mmstream.h>
#include "Calculator.h"
#pragma comment(lib, "winmm.lib")
using namespace std;
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Math error: Attempted to divide by zero!\n Dumbass." << endl;
            continue;
        }
        else
        {
            result = c.calculate(x, oper, y);
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
        PlaySound(TEXT("notification.wav"), NULL, SND_FILENAME);
    }
    return 0;
}