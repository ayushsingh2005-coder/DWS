// When a function calls itself 
// until a specified condition is met 


/*
void f(){
    print(1)
    f();
}

main(){
    f();
}

*/

// the above function doesn't have any conditon to stop so it is a infinite recursion and it will stop when the program ran out of memory and give the segmentation error (stack overflow error)

// so we have to specify the condition and it is called BASE CONDITION 

/*
cnt = 0;

f(){
if(cnt === 4) return;
print(cnt);
cnt++;
f();
}

main(){
    f();
}
*/

// -------------------------------------

#include<bits/stdc++.h>
using namespace std;

// Problems on Recursion

// print Name 5 times using recursion
// print linearly from 1 to N
// Print from N to 1
// print linearly from 1 to N (but by backtrack)
// Print from N to 1 (by backtrack)


// 1.

/*
void hii(int i, int n){
    if(i > n) return ;
    cout << " hey";

    hii(i+1 , n);
}

int main(){
    int n;
    int i;
    cout << "enter the number";
    cin >> n;
    hii(1,n);
    return 0;
}
*/

// 2.

