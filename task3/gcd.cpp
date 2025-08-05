#include <iostream>
#include <vector>
using namespace std;

int bcd(int num);

int main()
{
    int tests, casee;
    cout << "Enter no. of tests :" << endl;
    cin >> tests;
    vector<int> answers(tests);
    for (int i = 0; i < tests; i++)
    {
        cout << "Enter upper bound :" << endl;
        cin >> casee;
        answers[i] = bcd(casee);
    }
    for (int i = 0; i < tests; i++)
    {
        cout << answers[i] << endl;
    }
}

int bcd(int num)
{
    if (num % 2 == 0)
    {
        return (num / 2);
    }
    else
    {
        return ((num - 1) / 2);
    }
}
