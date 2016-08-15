// the called function uses the SAME address as the
// passed variable when passing by address
#include <iostream>
using namespace std;

void count(int *);    // shows count will take an int ADDRESS argument

void main()
{
    int max = 5;


    cout << "\nAt the start of main() max is: " << max;
    count(&max);   // call count() passing the address of max
    cout << "\n\nAt the end of main()   max is: " << max<< "\n\n";

	system("pause");
}

void count(int *pmax)
// Display squares and change *pmax
{
    int i;

    cout << "\n\nAt the start of count() *pmax is: " << *pmax;
    cout << "\nHere is the task count() does\n";
    for (i = 1; i <= *pmax; i++)   //just to use *pmax
    {
        cout << i * i << " ";
    }
    *pmax = 12345;                 //change the value
    cout << "\nAt the end of count()   *pmax is: " << *pmax;
}

