
#include <iostream>

using namespace std;

/*Write a program to print sqrt of numbers, don't use built in round function.*/

float ReadNmber()
{
    float Number;
    cout << "Please enter a number ? " << endl;
    cin >> Number;


    return Number;
}


float MySqrt(float Number)
{
	return pow(Number,0.5) ; 

}
int main()
{
    float Number = ReadNmber();
    cout << "c++ sqrt Result " << sqrt(Number) << endl;
    cout << "My sqrt Result : " << MySqrt(Number) << endl;
}