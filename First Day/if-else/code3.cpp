#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and decide accordingly
1. if age < 18,
print-> not eligible for job
2. If age >= 18,
print-> eligible for job.
3. If age >= 55 and age <= 57,
print-> eligible for job , but retirement soon.
4. If age > 57,
print-> retirement time.
*/
int main(){
    int age;
    cin >> age;
    if(age < 18) {
        cout << "Not elgible for job";
    }
    // using if-else
    else if (age <= 54) {
        cout << "eligible for job";
    }
    else if (age <= 57) {
        cout << "eligble for job, but retirement soon";
    }
    // using nested if 
    else if (age <= 57){
        cout << "elgible for job";
        if(age >= 55) {
            cout << ", but retirement soon";
        }
    }
    else {
        cout << "retirement time.";
    }
    
    return 0;
}
