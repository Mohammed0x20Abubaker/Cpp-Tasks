#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int k2, k3, k4, k5;
    cout << "Enter no. of digits as follows : k2\"no.of 2 digits\" k3\"no.of 3 digits\" k4\"no.of 4 digits\" k5\"no.of 5 digits\"" << endl;
    cin >> k2 >> k3 >> k4 >> k5;
    while ((k2 > 0) && (k4 > 0) && (k5 > 0))
    {
        sum += 256;
        k2--;
        k4--;
        k5--;
    }

    while ((k2 > 0) && (k3 > 0))
    {
        sum += 32;
        k2--;
        k3--;
    }

    cout << sum << endl;

    return 0;
}