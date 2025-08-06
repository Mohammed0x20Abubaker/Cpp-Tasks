#include <iostream>
#include <vector>
using namespace std;

int In_house(int start, int end, vector<int> arr);

int main()
{
    int endofhouse, start_of_house, apple_tree_dis, orange_tree, no_of_apples, no_of_oranges;

    cout << "Enter First distance " << endl;
    cin >> start_of_house;

    cout << "Enter Second distance " << endl;
    cin >> endofhouse;

    cout << "Enter Apple distance " << endl;
    cin >> apple_tree_dis;

    cout << "Enter Orange distance " << endl;
    cin >> orange_tree;

    cout << "Enter no. of apples in apple tree " << endl;
    cin >> no_of_apples;

    cout << "Enter no. of orange in orange tree " << endl;
    cin >> no_of_oranges;

    vector<int> apples(no_of_apples, apple_tree_dis);
    vector<int> orange(no_of_oranges, orange_tree);

    cout << "Apples distance :" << endl;
    for (int i = 0; i < no_of_apples; i++)
    {
        int tmp;
        cout << "dist :" << endl;
        cin >> tmp;
        apples[i] += tmp;
    }

    cout << "orange distances " << endl;
    for (int i = 0; i < no_of_oranges; i++)
    {
        int tmp;
        cout << "dist :" << endl;
        cin >> tmp;
        orange[i] += tmp;
    }
    cout << In_house(start_of_house, endofhouse, apples) << endl;
    cout << In_house(start_of_house, endofhouse, orange) << endl;

    return 0;
}

int In_house(int start, int end, vector<int> arr)
{
    int tmp = 0, size;
    size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] >= start) && (arr[i] <= end))
        {
            tmp++;
        }
    }

    return tmp;
}