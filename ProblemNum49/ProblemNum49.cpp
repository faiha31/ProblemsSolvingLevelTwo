
#include <iostream>

using namespace std;

/*Write a program to print ceil of numbers, don't use built in round function.*/

float ReadNmber()
{
    float Number;
    cout << "Please enter a number ? " << endl;
    cin >> Number;


    return Number;
}
float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyCeil(float Number)
{
    if (GetFractionPart(Number) > 0)
    {
        if (Number > 0)
            return (int)Number + 1;

        else
            return (int)Number;
    }
    else
        return Number;

}
int main()
{
    float Number = ReadNmber();
    cout << "c++ ceil Result " << ceil(Number) << endl;
    cout << "My ceil Result : " << MyCeil(Number) << endl;
}