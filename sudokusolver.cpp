#include <iostream>
#include <stdio.h>

using namespace std;

class Sudoku
{
protected:
	int input[9];

public:
	void inputValue(void); 	//Takes user input
	void process();			//Processes the given data (This thing does the actual work and has the actual logic) 		
	void display();			//Displays the given data
};

void Sudoku:: inputValue(void)
{
	cout<<"Enter the Values of the box horizontal line wise. For blank boxes put 0"<<endl;
	for (int i=1;i<=10;i++)
	{
		cout<<"\n Value "<<i<<end;  
		cin>>input[i];
	}
}

void Sudoku::process()
{
	for (int i=1;i<=10;i++)
	{
		if (input[i]==0 && i<4)
		{
			
		}
	}
  
}