#include<bits/stdc++.h>
using namespace std;

int main(){

    // FIFO (first in first out)

    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(6);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


return 0;
}