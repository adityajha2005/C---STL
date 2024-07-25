#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<int> pq;
pq.push(1);
pq.push(2);
pq.push(7);

while(!pq.empty()){
    int val = pq.top();
    cout<<val<<" ";
    pq.pop();

}
cout<<endl;
//Reverse
priority_queue<int,vector<int>,greater<int> > pq1;
pq1.push(1);
pq1.push(2);
pq1.push(7);

while(!pq1.empty()){
    int val = pq1.top();
    cout<<val<<" ";
    pq1.pop();

}
return 0;
}