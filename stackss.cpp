#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(11);
    s.push(22);
    s.push(31);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }


return 0;   
}