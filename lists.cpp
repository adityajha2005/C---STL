#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(10);
    l.push_back(2);

    list<int> :: iterator it;
    for(it=l.begin();it!=l.end(); it++){
        cout<<*(it)<<" ";
    }   
    cout<<endl;
    l.sort();
    for(it=l.begin();it!=l.end(); it++){
        cout<<*(it)<<" ";
    }  
    cout<<endl;
    l.reverse();
    for(it=l.begin();it!=l.end(); it++){
        cout<<*(it)<<" ";
    }  
    cout<<endl;


return 0;
}