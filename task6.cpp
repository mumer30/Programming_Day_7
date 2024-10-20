#include<iostream>
using namespace std;
bool isPrime(int number);
int primoorial(int num);
main()
{
    int num ;
    cout <<"Enter a Number : ";
    cin >> num;
    int res = primoorial(num);
    cout <<res;
}
bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }
    else if (number == 2)
    {
        return true;
    }
    else 
    {
        for (int i = 2; i <=int(number/2); i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    
}
int primoorial(int num)
{
    int prod=1,i=1,value=2;
    while(i<=num)
    {
        bool state=isPrime(value); 
        if(state)
        {
            prod*=value;
            i++;
        }
        value++;
    }
    return prod;
}