#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;



int main()
{
    srand(static_cast<int>(time(0)));
    int row;
    cout<<"input rows : ";
    cin>>row;
	int board[row][2]; //creates a 9*9 matrix or a 2d array.

	for(int i=0; i<row; i++)    //This loops on the rows.
	{
		for(int j=0; j<2; j++) //This loops on the columns
		{
			board[][j] = rand()%; 
			
			
		}
	}

	for(int i=0; i<row; i++)    //This loops on the rows.
	{
		for(int j=0; j<2; j++) //This loops on the columns
		{
			cout << board[i][j]  << "  ";
		}
		cout << endl;
	}
}