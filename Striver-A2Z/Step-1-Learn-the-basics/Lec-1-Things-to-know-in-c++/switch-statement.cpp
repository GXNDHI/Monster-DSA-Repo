//
// Created by Animesh Gandhi on 01/07/25.
//
//Take the day number and print the corresponding day for 1 print Monday , for 2 print Tuesday and so on
#include <iostream>
#include<bits/stdc++.h>
#include <__ostream/basic_ostream.h>
using namespace std;

int main() {
    int day;
    cin>>day;

    switch(day) {
            case 1:
            cout<<"Monday"<<endl;
            break;
            case 2:
            cout<<"Tuesday"<<endl;
            break;
            case 3:
            cout<<"Wednesday"<<endl;
            break;
            case 4:
            cout<<"Thursday"<<endl;
            break;
            case 5:
            cout<<"Friday"<<endl;
            break;
            case 6:
            cout<<"Saturday"<<endl;
            break;
            case 7:
            cout<<"Sunday"<<endl;
            break;
            default:
            cout<<"Invalid Input"<<endl;
    }
    return 0;
}