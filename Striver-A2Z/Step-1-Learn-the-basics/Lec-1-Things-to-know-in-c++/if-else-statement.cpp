//
// Created by Animesh Gandhi on 01/07/25.
//

 // Write a program that takes an input of age and prints if you are an adult or not.
#include<iostream>
using namespace std;

int main() {
 int age;
 cin>>age;

 if (age>=18) {
  cout<<"Yot are an adult "<<endl;
 }else {
  cout<<"You are a minor";
 }
 return 0;
}




//Q on grade system
#include<bits/stdc++.h>
using namespace std;

int main() {
 int marks;
 cin>>marks;

 if (marks<25) {
  cout<<"F";
 }
 else if (marks<=44) {
  cout<<"E";
 }
 else if (marks<=49) {
  cout<<"D";
 }
 else if (marks<=59) {
  cout<<"C";
 }
 else if (marks<=79) {
  cout<<"B";
 }
 else {
  cout<<"A";
 }
 return 0;
}



//Take the age from the user and then decid eaccordingly
//1.If ag e<18 print not eligile for job
//2.If age > 18 print eligiblr for job
//3.If age>=55 and <=57 print eligible for job but retirement soon
//4.If age >57 print retirement soon

#include<bits/stdc++.h >
using namespace std;

int main() {
 int age;
 cin>>age;
 if (age<18) {
  cout<<"Not eligibe for job";
 }
 else if (age<=54) {
  cout<<"eligibe for job";
 }
 else if (age<57) {
  cout<<"Eligible for job but retirement soon";
 }
 else {
  cout<<"Retirement soon";
 }

 return 0;
}

