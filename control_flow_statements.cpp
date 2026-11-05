//if statement
#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // if (a == 5) {
    //     cout << "a is equal to 5";
    // }
    
//if-else statements 
//     int a = 10;
//     if (a == 5) {
//         cout << "a is equal to 5";
//     }
//     else {
//         cout << "a is not equal to 5";
//     }
//     return 0;
//if-else-if statements
// int a = 15;
//     if (a == 5) {
//         cout << "a is equal to 5";
//     }
//     else if (a == 10) {
//         cout << "a is equal to 10";
//     }
//     else {
//         cout << "a is not equal to 5 or 10";
//     }

//Ternary Operator or Conditional operator
// #include <iostream>
// using namespace std;


//     int a = 10;
//     cout << (a == 5 ? "a is equal to 5"
//                     : "a is not equal to 5");
//     return 0;


//for loop
// for (int i = 0; i < 5; i++) {
//         cout << i << endl;
//     }

//while loop
// int count = 0;
//     while (count < 5) {
//         cout << count << endl;
//         count++;
//     }

//do-while
// int count = 0;
// do{
//    cout << count << endl;
//    count ++; 
// }
// while(count <3);
// }

//switch 
int days;
cout<< "1. Monday 2. Tuesday 3.Wednesday 4.Thursday 5.Friday 6.Saturday 7.Sunday";
cout << "\nEnter an choice";
cin >> days;
switch(days){
    case(1):
        cout<<"Monday";
        break;
    case(2):
        cout<<"Tuesday";
        break;
    case(3):
        cout<<"Wednesday";
        break;
    case(4):
        cout<<"Thursday";
        break;
    case(5):
        cout<<"Friday";
        break;
    case(6):
        cout<<"Saturday";
        break;
    case(7):
        cout<<"Sunday";
        break;
    default:
        cout<<"Enter number between  to 7";
        break;
        

}
}
