#include<iostream>
using namespace std;
bool isPrime(int number);
main()
{
    int num;
    cout <<"Enter Number : ";
    cin >>num;
    bool res = isPrime(num);
    cout <<res;
}
bool isPrime(int number)
{
    if (number == 1)
    {
        return 0;
    }
    else if (number == 2)
    {
        return 1;
    }
    else 
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    
}