//
// Created by Animesh Gandhi on 08/07/25.
//
#include <iostream>
#include <list>
#include<bits/stdc++.h>
#include <__ostream/basic_ostream.h>
using namespace std;

//Pairs
void explainPairs() {
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int ,int >>p = {1,{2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0]<<" "<<arr[1].first<<" "<<arr[2].second<<endl;


}

//Vectors
void explainVectors() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int>v(v1);


    vector<int>::iterator it = v.begin();
    it++;
    cout<<*it<<endl;

    it=it+2;
    cout<<*it<<endl;

    vector<<int>>::iterator it=v.end();
    vector<int>::iterator it=v1.rend();
    vector<int>::iterator it=v1.rbegin();

    cout<<v[0]<<" "<<v.at[0];
    cout<<v.back();

    for (vector<int>::iterator it = v.begin();it!=v.end();it++) {
        cout<<" "<<*it;
    }

    for (auto it  = v.begin();it!=v.end;it++) {
        cout<<" "<<*it;
    }

    for (auto it : v) {
        cout<<" "<<it;
    }

    v.erase(v.begin()+1);

    v.erase(v.begin()+2,v.begin()+4);

    // Insert Function
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);

    vector<int> copy(2,10);
    v.insert(v.begin(),copy.begin(),copy.end());


    //Size Of Vector
    cout<<v.size();

    //Pop Vector
    v.pop_back();

    //Swap
    v.swap(v1);

    //Clear
    v.clear();
    cout<<v.empty();


}


void explainList() {
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.push_front(4);
    l.emplace_front(3);

    //rest functions are same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

}

void explainDeque() {
    deque<int> d;
    d.push_back(2);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(2);

    d.pop_back();
    d.pop_front();

    d.back();

    d.front();

    //Rest functions are sam eas vector
    //begin,end , rbegin, rend,clear,insert ,size ,swap
}

void explainStack() {
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(4);
    s.emplace(4);

    cout<<s.top();

    s.pop();

    cout<<s.top();

    cout<<s.size();

    cout<<s.empty();

    stack<int>s1,s2;
    s1.swap(s2);
}


void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back()+=4;

    cout<<q.back();

    cout<<q.front();

    q.pop();

    cout<<q.front();

    //Size,swap,empty same as stack

}

void explain_pq() {
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.top();
    q.pop();
    cout<<q.top();
    q.pop();
    cout<<q.top();



}

int main() {
    explainPairs();
    return 0;
}