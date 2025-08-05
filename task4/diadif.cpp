#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int left_to_right_diagonal(vector<vector<int>> nums, int size);

int right_to_left_diagonal(vector<vector<int>> nums, int size);

int main()
{
    int size, rdiagonal, ldiagonal, absolute;
    do
    {
        cout << "Enter size of square array : " << endl;
        cin >> size;
    } while (size <= 0);
    vector<vector<int>> nums(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> nums[i][j];
        }
    }
    rdiagonal = left_to_right_diagonal(nums, size);
    ldiagonal = right_to_left_diagonal(nums, size);
    absolute = rdiagonal - ldiagonal;

    cout << abs(absolute) << endl;

    return 0;
}

int left_to_right_diagonal(vector<vector<int>> nums, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i][i];
    }
    return sum;
}

int right_to_left_diagonal(vector<vector<int>> nums, int size)
{
    int sum = 0, tmp = size;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i][tmp - 1];
        tmp--;
    }
    return sum;
}