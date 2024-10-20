#include<iostream>
using namespace std;
int no_of_dots(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
    {
        return (n + no_of_dots(n - 1));
    }
}
main()
{
    int n;
    cout <<"Enter the number of triangle: ";
    cin >>n;
    int res = no_of_dots(n);
    cout <<"Dots in the Triangle: "<<res;
}
