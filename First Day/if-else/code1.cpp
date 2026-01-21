#include<bits/stdc++.h>
using namespace std;
// Write an program that takes an input of age and prints if you are adult or not
int main() {
    int age;
    cin >> age;
    if(age >= 18){
        cout << "You Are An Adult";
    }
    else if(age<18){
        cout << "You Are Not An Adult";
    }
    return 0; 
}
