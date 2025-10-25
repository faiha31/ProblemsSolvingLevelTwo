
#include <iostream>
#include <iomanip>

using namespace std;

/*"Write a program print the multiplication table from 1 to 10 as follows:"*/
void PrintTableHeader()
{
	cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n" << endl;
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout  << i<<"\t";
	}
	cout << endl;
	cout << "___________________________________________________________________________________" << endl;

}
string ColumSperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";

}
void PrintMultiplicationTable()
{
	PrintTableHeader();


	for (int j = 1; j <= 10; j++)
	{ 
		cout << " " << j << ColumSperator(j) << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout <<  j * i<<"\t";
		
	}
	cout << endl;
	}
}

int main()
{
	PrintMultiplicationTable();
	
}

