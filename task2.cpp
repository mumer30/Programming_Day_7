#include<iostream>
using namespace std;
void Print_diamond_up(int);
void Print_diamond_down(int);
main() 
{
    int row;
    cout <<"Enter the number of rows: ";
    cin >> row;
    Print_diamond_up(int(row/2));
    Print_diamond_down(int(row/2));
}
void Print_diamond_up(int row)
{
    for (int i=1; i<=row;i++)
    {
        for (int j=1;j<=row-i;j++)
        {
            cout <<" ";
        }
        for (int k=1;k<=i;k++)
        {
            cout <<"*";
        }
        
        cout <<endl;
    }
}
void Print_diamond_down(int row)
{
    for (int i=row;i>=1;i--)
    {
        for (int k=1;k<=row-i;k++)
        {
            cout <<" ";
        }
        for (int j=1;j<=i; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}