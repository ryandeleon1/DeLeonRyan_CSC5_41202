
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void fill(char Array[10][10]);

    int xRan;
    int choicei = 12;
    int choicej = 12;

int main()
{
    char Array[10][10];

    srand(time(0));

    xRan = rand() % 15 + 1;

    while (choicei > 10 || choicej > 10)
    {
        cout << "Enter The Row Number Less Than 10!" << endl;
        cin >> choicei;
        cout << endl;
        cout << "Enter The Column Number Less Than 10!" << endl;
        cin >> choicej;
        cout << endl;
    }

    fill(Array);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }   

    if (xRan > 11)
    {
        cout << "\nCongratulations! You Won!\n" << endl;
    }
    else
    {
    cout << "\nBetter Luck Next Time!\n" << endl;
    }

}


void fill(char Array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Array[i][j] = '*';
        }
    }

    if (xRan > 11)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                Array[choicei - 1][choicej - 1] = 'X';
            }
        }
    }
    else
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                Array[choicei - 1][choicej - 1] = 'O';
            }   
        }
    }

}