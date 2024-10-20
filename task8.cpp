#include<iostream>
#include<iomanip>
using namespace std;
void Cargo(int);
main()
{
    int num;
    cout <<"Enter the count of cargo for transportation: ";
    cin >>num;
    Cargo(num);
}
void Cargo(int n)
{
    int weight,minibus = 0,truck = 0,train = 0,sum = 0;
    for (int i = 1; i <= n ; i++)
    {
        cout <<"Enter the tonnage of cargo "<<i <<" : ";
        cin >> weight;
        sum += weight;
        if (weight <= 3)
        {
            minibus += weight;
        }
        else if (weight <= 11)
        {
            truck += weight;
        }
        else 
        {
            train += weight;
        }

    }
    float avg = float((minibus*200)+(truck*175)+(train*120))/float(sum);
    cout << fixed;
    cout << setprecision(2);
    cout <<avg<<endl;
    cout << (float(minibus)/float(sum))*100<<"%"<<endl;
    cout << (float(truck)/float(sum))*100<<"%"<<endl;
    cout << (float(train)/float(sum))*100<<"%"<<endl;
}