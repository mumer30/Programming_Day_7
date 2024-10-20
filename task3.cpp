#include<iostream>
using namespace std;
void amplify(int num)
{
    for (int i=1;i<=num;i++)
    {
        if (i%4 == 0 && i!=num)
        {
            cout <<i*10<<" ,";
        }
        else if (i%4 == 0 && i==num)
        {
            cout <<i*10;
        }
        else if (i!=num)
        {
            cout <<i<<" ,";
        }
        else 
        {
            cout <<i;
        }
    }
}
main()
{
    int num;
    cout <<"Enter a number :";
    cin >>num;
    amplify(num);
}