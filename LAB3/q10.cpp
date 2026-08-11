//Dynamic employee salary analysis
#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;
    float *earning;
    int months;

public:
    Employee(int n)
    {
        months = n;
        earning = new float[months];
    }

    void accept()
    {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> salary;

        cout << "\nEnter monthly earnings:\n";

        for(int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> earning[i];
        }
    }

    void analysis()
    {
        float total = 0;
        int highest = 0;

        for(int i = 0; i < months; i++)
        {
            total += earning[i];

            if(earning[i] > earning[highest])
                highest = i;
        }

        cout << "\nCalculating salary analysis...\n";

        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << salary;

        cout << "\nTotal Earnings: " << total;
        cout << "\nAverage Earning: " << total / months;

        cout << "\nHighest Earning: Month " << highest + 1;
        cout << "\nHighest Amount: " << earning[highest] << endl;
    }

    ~Employee()
    {
        cout << "\nReleasing memory...\n";
        delete[] earning;
    }
};

int main()
{
    int n;

    cout << "Enter number of months: ";
    cin >> n;

    cout << "\nAllocating memory...\n";

    Employee e(n);

    e.accept();
    e.analysis();

    return 0;
}