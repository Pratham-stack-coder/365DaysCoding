#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Striver";
    // length of string
    int len = s.size();
    // changing a string 
    s[len-1] = 'z';
    cout << s[len - 1];
    return 0;
}
