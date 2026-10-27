#include <iostream>
#include <cmath>
using namespace std;
int sumint(int a, int b);
int sumdouble(double a, double b);
int main()
{
    cout << "Hello, SWE 103!" << endl;
    int x = sumint(1, 2);
    double y = sumdouble(1.5, 2.5);
    cout << "Sum of integers: " << x << endl;
    cout << "Sum of doubles: " << y << endl;
    cout << "Hello, SWE 103!" << endl;
    int i, n;
    i = 1;

    while (i >= 1)
    {
        cout << "enter a number to see its multiplication table: " << endl;
        cin >> n;
        i = 1;
        if (n == 0)
            break;
        if (n >= 1 && n <= 10)
        {

            while (i <= 10)
            {
                cout << n << " * " << i << " = " << n * i << endl;
                i++;
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 10." << endl;
            break;
        }
    }

    return 0;
}
int sumint(int a, int b)
{
    return a + b;
}
int sumdouble(double a, double b)
{
    return a + b;
}