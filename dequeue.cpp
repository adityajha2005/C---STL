#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(5); //5 1 2
    cout<<dq.size()<<endl;
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();

    }
    cout<<endl;
    cout<<dq.empty()<<endl;

     
return 0;
}