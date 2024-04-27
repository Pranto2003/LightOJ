
// https://lightoj.com/problem/opposite-task

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<pair<int, int>> results;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int problems;
        cin >> problems;
        if (problems <= 10)
        {
            results.push_back(make_pair(0, problems));
        }
        else
        {

            results.push_back(make_pair(10, problems - 10));
        }
    }

    for (const auto &result : results)
    {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}