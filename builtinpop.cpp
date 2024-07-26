#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = __builtin_popcount(n);
    cout<<ans<<endl;

    // __builtin_popcount()  is a built-in function of GCC compiler.
    //  This function is used to count the number of set bits in an unsigned integer.
    //  In other words, it counts the number of 1’s in the binary form of a positive integer.

return 0;
}