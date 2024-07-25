#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m.insert({1,2}); //key => 1 value =>2
    m[3]=5; // key => 3 value => 5
    m[4]=8;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    auto val = m.find(3);
    cout<<val->first<<" "<<val->second<<endl;

    if(m.find(4)!=m.end()){
        cout<<"4 is present"<<endl;
    }
    else{
        cout<<"4 is not present"<<endl;
    }
        cout<<endl;


    unordered_map<int,int> M; //random order
    M.insert({1,2}); //key => 1 value =>2
    M[3]=5; // key => 3 value => 5
    M[4]=8;
    for(auto x:M){
        cout<<x.first<<" "<<x.second<<endl;
    }


return 0;
}