// https://lightoj.com/problem/greetings-from-lightoj

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        arr[i] = first + second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i + 1 << " : " << arr[i] << endl;
    }

    return 0;
}