#include<bits/stdc++.h>
using namespace std;
int main() {
    //int (range - -2,147,483,648 to 2,147,483,648)
    int x = 10;
    //long (range - -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    long x = 15;
    cin >> x;
    // unsigned short (range - 0 to 65,535)
    // unsigned long (range - 0 to 4,294,967,295)
    long long x = 15000000;
    //float (storage size - 4 byte , range - 1.2E-38 to 3.4E+38)
    //double (storage size - 8 byte , range - 2.3E-308 to 1.1E+308)
    // long double (storage size - 10 byte , range - 3.4E-4932 to 1.1E+4932)
    float x = 5.6;
    float y = 5;
    cout << "Va;ue of y:" << y;
    // String 
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;
    // getline (Picks up  single line)
    string str;
    getline(cin, str);
    cout << str;
    // char (256)
    char ch = 'h';
    cout << ch;
    return 0;
}
