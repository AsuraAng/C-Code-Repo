#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
private:
    int Emp_id;
    char Name[25];

public:
    void setRecord(void);
    void getRecord(void);
};


void Employee::setRecord(void)
{
    cout << "Enter Employee ID : " << endl;
    cin >> Emp_id;
    cout << "Enter Employee Name : " << endl;
    cin >> Name;
}
void Employee::getRecord(void)
{
    cout << "Employee ID is : " << Emp_id << endl;
    cout << "Employee Name is : " << Name << endl;
}

void mainMenu(void)
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 50)
        {
            cout << "Main Menu";
        }
        else
        {
            cout << "-";
        }
    }
    cout << endl;
    cout << "1.Set Records" << endl;
    cout << "2.Get Records" << endl;
    cout << "3.Exit" << endl;
}
int main()
{
    while (true)
    {
        Employee headoffice;
        mainMenu();
        int ch = 0;
        cin >> ch;

        if (ch == 1)
        {
            headoffice.setRecord();
        }
        else if (ch == 2)
        {
            headoffice.getRecord();
        }
        else if (ch == 3)
        {
            cout << "Thanks For Execution " << endl;
            exit(0);
        }
    }

    return 0;
}