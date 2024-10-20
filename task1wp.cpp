#include<iostream>
using namespace std;
void Print_shape(int num)
{
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}
main()
{
    int num;
    cout <<"Enter the number of desired rows : ";
    cin >>num;
    Print_shape(num);
}