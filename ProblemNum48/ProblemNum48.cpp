
#include <iostream>

using namespace std;

/*Write a program to print floor of numbers, don't use built in round function.*/

float ReadNmber()
{
    float Number;
    cout << "Please enter a number ? " << endl;
    cin >> Number;


    return Number;
}


int MyFloor(float Number)
{
        if (Number > 0)
            return (int)Number;

        else
            return (int) Number-1;
  
}
int main()
{
    float Number = ReadNmber();
    cout << "c++ floor Result " << floor(Number) << endl;
    cout << "My floor Result : " << MyFloor(Number) << endl;
}