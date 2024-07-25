#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(4); //4,5
    s.insert(3); //3,4,5
    s.insert(2); //2,3,4,5
    s.insert(1); //1,2,3,4,5
    s.insert(7); //7,1,2,3,4,5


    // auto x = s.find(7);
    // cout<<*x<<endl;

    if(s.count(4)){
        cout<<"4 is present"<<endl;
        s.erase(4);
    }
    else{
        cout<<"4 is not present"<<endl;
    }
    

    for(auto x:s){
        cout<<x<<" ";
    }

return 0;
}