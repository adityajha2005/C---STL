#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p;
    p.first=10;
    p.second=20;
    cout<<"{"<<p.first<<","<<p.second<<"}"<<endl;
    pair<int,pair<int,int>> pt;
    pt.first=10;
    pt.second.first=18;
    pt.second.second=20;
    cout<<"{"<<pt.first<<",{"<<pt.second.first<<","<<pt.second.second<<"}"<<"}"<<endl;

    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
return 0;
}