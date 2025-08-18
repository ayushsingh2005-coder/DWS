// #include<iostream>
// #include<math.h>
// #include<string>

// so these are the libraries each for I/O operations , for math functions and for string respectively

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     std::cout << "hey string"<<std::endl;
//     std::cout << "hey string"<<"\n";
//     return 0;
// }

// ----------------
// using namespace std;
// int main(){
//     int x , y;
//     cin>>x>>y; //taking input
//     cout<<"value of " << x << y;
//     return 0;
// }

// DATA TYPES

// 1.int (4 bytes)
// 2.unsigned short (2 bytes ){0 -->> 65,535}
// long (4 bytes)
// unsigned long ( 4 bytes)
// long long (8 bytes)
// float (4 byte)
// double (8 byte)
// long double (10 byte)

// string and getline

// string ---
// int main(){
//     string s1;
//     string s2 ;
//     cin >> s1 >>s2;
//     cout<<s1<<" "<<s2;
//     return 0;
// }
// word after space is considered as new string
// always in double quotes

// if we want to group strings and bring it to line ,use getline (internal function)

// int main(){
//     string str;
//     getline(cin , str);
//     cout << str;
//     return 0;
// }

// exmaple : input :hey i am this
// ohhh

// the first line will be printed and second doesn't due to termination

// CHAR : there are 256 charcters in english dictionary ,it can store all of them

// in single quotes

// int main(){
//     char ch ;
//     cin>>ch;
//     cout <<ch;
//     return 0;
// }

// IF-ELSE STATEMENT

/*
int main(){
    int age;
    cin >> age;
    if(age > 18){
        cout << "you are an adult ";

    }else{
        cout << "you are not an adult ";
    }
    return 0;
}
*/

// problem solution :

// int main(){
//     int marks ;
//     cin >> marks;
//     if(marks < 25){
//         cout << "F"
//     }
//     else if (marks >= 25 && marks <=44){
//         cout << "E";
//     }
//     else{
//         cout <<" fail";
//     }

// }

// SWITCH Statement

// int main()
// {
//     int day;
//     cin >> day;
//     switch (day)
//     {
//     case 1:
//         cout << "monday";
//         break;
//     case 2:
//         cout << "tuesday";
//         break;

//     case 3:
//         cout << "wednesday";
//         break;

//     case 4:
//         cout << "thrusday";
//         break;

//     case 5:
//         cout << "friday";
//         break;

//     case 6:
//         cout << "saturday";
//         break;

//     case 7:
//         cout << "sunday";
//         break;

//     default:
//         cout << "invalid";
//     }

//     return 0;
// }


// ARRAY : use when you have similar data types multiple times.
// every data should have same data type 

/*
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >>arr[3] >> arr[4] ;

    arr[0] += 10;  //we can modify after creating the array

    cout << arr[0];
    return 0;
}
*/

// array elements are stored in consecutive manner or we can say it is stored in contiguous memory address location in the memory but we can't say anthing about the first one


// 2-D ARRAY :
// int main(){

//     int arr[3][5];  //3 rows 5 columns
//     arr[1][3] = 45;

//     cout << arr[1][3];

//     return 0;
// }

// NOTE : the location that we have not defined contain some garbage value
// array always starts with 0th index

// STRING : 

int main(){

    string s = "striver";
    cout << s[1];
    cout << endl;
    int len = s.size();
    cout << s[len -1];
    return 0;
}


