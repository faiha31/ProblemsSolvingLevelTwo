
#include <iostream>

using namespace std;

/*Write a program to print abs of numbers, don't use built in abs function.*/

float ReadNmber()
{
    float Number;
        cout << "Please enter a number ? " << endl;
        cin >> Number;


	return Number;
}
float MyABS(float Number)
{
    if (Number < 0)
        return Number * -1;

    else
    return Number;
}
int main()
{
    float Number = ReadNmber();
	cout << "c++ abs Result " << abs(Number) << endl;
	cout<<"My abs Result : "<<MyABS(Number) << endl;
}

