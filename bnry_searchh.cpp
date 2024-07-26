#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int num;
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
    int o = sizeof(a)/sizeof(a[0]);
    sort(a,a+o);
    if(binary_search(a,a+n,num)){
        cout<<"Present , index : "<<lower_bound(a,a+n,num)-a;
    }
    else{
        cout<<"Not Present";
    }

return 0;
}