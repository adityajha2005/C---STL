#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    cout<<vec.size()<<endl;
    cout<<vec.size()<<endl;
    vec.resize(5);
    cout<<endl;
    cout<<vec.size()<<endl;
    cout<<*(vec.begin())<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"";
        /* code */
    }
    cout<<endl;
    vec.erase(vec.begin()+1);
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"";
        /* code */
    }
    cout<<endl;

    vec.insert((vec.begin()+2),9);
      for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"";
        /* code */
    }
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[  i]<<"";
        /* code */
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
      for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"";
        /* code */
    }
    cout<<endl;
return 0;
}