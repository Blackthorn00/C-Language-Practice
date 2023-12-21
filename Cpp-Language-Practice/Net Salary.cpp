#include <iostream>

using namespace std;
int main()
{
    float basic, netSalary, allowance, deduction;

    cout<<"Enter the basic salary: ";
    cin>>basic;
    cout<<"Enter percentage of Allowances: ";
    cin>>allowance;
    cout<<"Enter percentage of Deductions: ";
    cin>>deduction;

    netSalary = basic + (basic *allowance/100) - (basic * deduction/100);
    cout<<"Your Net Salary value is "<<netSalary<<"\n\n"<<endl;
    

    system("pause");
    return 0;
}