//
// Created by Animesh Gandhi on 02/07/25.
//
#include <iostream>

using namespace std;

//VOID Function
void printNames() {
    cout<<"Name"<<endl;
}
int main() {
    printNames();
}

//void parameterised function
void printName(string name) {
    cout<<name<<endl;
}
int main() {
    string name;
    cin>>name;
    printName(name);
    return 0;
}

//Q. Take two numbers and print its sum using f__cpp_deleted_function
#include <iostream>
using namespace std;

int sum(int a,int b) {
    return a+b;
}
int main() {
    int a , b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}




//Max Function
int maxx(int a,int b) {
    return a>b?a:b;
}
int main() {
    int a , b;
    cin>>a>>b;
    cout<<maxx(a,b)<<endl;
    return 0;
}



//Pass By Value
#include <iostream>
using namespace std;

void doSum(int num) {
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main() {
    int num=10;
    doSum(num);
    cout<<num<<endl;
    return 0;
}




//Pass By Reference
#include <iostream>
using namespace std;

void doSum(int &num) {
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main() {
    int num=10;
    doSum(num);
    cout<<num<<endl;
    return 0;
}



//Pass By Reference in Array
void doSum(int arr[],int n) {
    arr[0]+=100;
    cout<<"Value inside function"<<arr[0]<<endl;
}
int main() {
    int n=5;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    doSum(arr,n);
    cout<<"Value inside main function"<<arr[0]<<endl;
    return 0;
}