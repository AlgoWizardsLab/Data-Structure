#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec;                              // type : 1
    vector<int> vec2(5);                          // type :2
    vector<int> vec3(5, 0);                       // type : 3
    vector<int> vec4(vec3);                       // type : 4
    vector<int> vec5(arr, arr + 5);               // type : 5
    vector<int> vec6 = {100, 200, 300, 400, 500}; // type : 6

    for (int i = 0; i < vec6.size(); i++)
    {
        cout << vec6[i] << " ";
    }
    // cout << vec2.size() << " ";
    return 0;
}