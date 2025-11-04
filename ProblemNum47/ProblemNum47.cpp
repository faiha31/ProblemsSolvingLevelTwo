
#include <iostream>

using namespace std;

/*Write a program to print round of numbers, don't use built in round function.*/

float ReadNmber()
{
    float Number;
    cout << "Please enter a number ? " << endl;
    cin >> Number;


    return Number;
}

float FetFractionPart(float Number)
{
	return Number - (int)Number;

}
int MyRound(float Number)
{
    int IntPart = 0;
	IntPart = (int)Number;

	float FractionPart = 0;
	FractionPart = FetFractionPart(Number);

    if (abs(FractionPart) >= .5)
    {
        if (Number > 0)
            return ++IntPart;

        else
            return --IntPart ;

    }
    else
		return IntPart;
}
int main()
{
    float Number = ReadNmber();
    cout << "c++ round Result " << round(Number) << endl;
    cout << "My round Result : " << MyRound(Number) << endl;
}
