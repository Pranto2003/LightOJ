// https://lightoj.com/problem/drunk

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input == 2)
        {
            string a, b;
            cin >> a >> b;
            arr[i] = "Yes";
        }
        else
        {
            string a, b, c;
            cin >> a >> b >> c;
            if (a != "soda water" || b != "water wine")
            {
                arr[i] = "No";
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}