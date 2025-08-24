// Rules to remember :

// ALL the patterns will have nested loops

// for the OUTER LOOP --->> count the number of LINES/ROWS

// for the INNER LOOP --->> focus on the COLUMNS and connect them somehow to rows 

// whatever we are printing ,print inside the inner loop 

// Observe symmetry 


#include<bits/stdc++.h>
using namespace std;

// problems ------------------------

/*
****
****
****
****
*/ 

// 4 lines / rows 
// 4 columns

// solution : 

void print1(){

    int i ,j;
    for(i = 0 ; i<4;i++){
        for(j=0 ; j<4;j++){
            cout<<"*";

        }
        cout << endl;
    }
}


/*
*
* *
* * *
* * * *
* * * * *
*/

void print2(int n){
    for(int i=0 ;i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/

void print3(int n){
    for(int i=1 ;i<=n;i++){
        for(int j=1 ; j<=i ; j++){
            cout << j <<" ";   
        }
        cout <<endl;
    }
}


/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void print4(int n){
    for(int i= 1 ; i<=n ;i++){
        for(int j=1 ; j<=i ;j++){
            cout << i;
        }
        cout <<endl;
    }
}

/*

* * * * *
* * * *
* * *
* *
*

*/
void print5(int n){
    for(int i = n; i>= 1 ;i--){
        for(int j=1 ; j<=i ; j++){
            cout << "* "; 
        }
        cout << endl;
    }
}


/*      *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
void print6(int n) {
    for(int i = 0; i < n; i++) {
        // leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

/* 
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *
*/

void print7(int n){
    for (int i=0 ; i < n ;i++){
        // space
            for(int j=0 ; j<i ; j++){
                cout << " ";
            }
        // star

            for(int j=0 ; j < 2*n-(2*i + 1) ; j++){
                cout << "*";
            }

        // space
           for(int j=0 ; j < i;j++){
            cout << " ";
           }

           cout << endl;
    }
}





int main(){
     int t;
    cout << "enter the number of test cases";
    cin >> t;
    for(int i = 0 ; i<t;i++){
        int n;
        cin >> n;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        print7(n);
    }
    return 0;
}
