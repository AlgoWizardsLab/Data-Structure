#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec = {10,20,30,40};
    vec.insert( vec.end(), 100);
    for(int x: vec){
        cout<<x<<" ";
    }
    return 0;
}