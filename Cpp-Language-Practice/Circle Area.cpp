#include <iostream>

using namespace std;
int main()
{
    float area, radius;

    cout<<"Enter the circle radius: ";
    cin>>radius;

    area = 3.14 * radius * radius;
    cout<<"The area of the circle is "<<area<<endl;

    system("pause");
    return 0;
}