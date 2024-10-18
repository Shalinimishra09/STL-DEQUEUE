#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq;
    deq.push_back(5);
    deq.push_front(4);
    deq.push_back(6);
    deq.push_front(3);
    cout<<"elements present \n"<<endl;
    for(int i:deq){
         cout<<i<<endl;
   
   
    }
   
   
   deq.pop_back();
   deq.pop_front();   
   
     cout<<"elements present \n"<<endl;
    for(int i:deq){
         cout<<i<<endl;
   
   
    }
    deq.erase(deq.begin(),deq.begin()+1);
   
    cout<<"elements present \n"<<endl;
    for(int i:deq){
         cout<<i<<endl;
   
   
    }
   
    return 0;
}