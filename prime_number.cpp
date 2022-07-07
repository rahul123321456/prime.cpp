#include <iostream>

using namespace std;

// 1 -> Prime No
// 0 -> Not Prime No

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Is a Prime number" << endl;
    }
    else
    {
        cout << "Is not a Prime number" << endl;
    }
    return 0;
}
