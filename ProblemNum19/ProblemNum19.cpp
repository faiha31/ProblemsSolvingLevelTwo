
#include <iostream>
#include<cstdlib>
using namespace std;

/*Write a program to print 3 random numbers from 1 to 10.*/
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;


}

