#include<iostream>
using namespace std;
void Hospital(int);
int main()
{
    int no_of_days;
    cout <<"Enter the number of days you visited hospital : ";
    cin >> no_of_days;
    Hospital(no_of_days);
    return 0;
}
void Hospital(int n)
{
    int patient,treated=0,untreated=0,no_of_doctors=7;
    for (int day = 1;day <= n; day++)
    {
        if (day % 3 == 0 && untreated > treated)
        {
            no_of_doctors++; 
        }
        cout << "Number of Patients who visited the hospital on Day " << day << ": ";
        cin >> patient;
        
        if (patient > no_of_doctors)
        {
            treated += no_of_doctors;
            untreated += patient - no_of_doctors;
        }
        else 
        {
            treated += patient;
            untreated += 0;
        }
    }
    cout <<"Treated Patients : "<<treated<<endl;
    cout <<"Untreated Patients : "<<untreated<<endl;
}
