#include<bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask User To Enter Marks And Print The Corresponding grade.
*/
int main() {
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "F";
    }
    else if( 25 <= marks && marks <= 44){
        cout << "E";
    }
    else if( 45 <= marks && marks <= 49){
        cout << "D";
    }
    else if( 50 <= marks && marks <= 59 ){
        cout << "C";
    }
    else if( 60 <= marks && marks <= 79){
        cout << "B";
    }
    else if( 80 <= marks && marks <= 100){
        cout << "A";
    }
    else {
        cout << "The Given Output is wrong";
    }

    return 0;
}
