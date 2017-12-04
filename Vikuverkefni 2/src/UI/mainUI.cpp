#include "mainUI.h"


void MainUI::MainMenu()
{

    while(true)
    {
        char input;
        cout << "1 Add salary to record" << endl;
        cout << "2 Get total salary for year" << endl;
        cout << "3 Get employee with the highest salary" << endl;
        cin >> input;
        userInput(input);
    }
}

void MainUI::userInput(char input)
{
    if (input == '1')
    {

    }
    else if (input == '2')
    {

    }
    else if (input == '3')
    {

    }
    else
    {
        cout << "Input is invalid" << endl;
    }
}
