#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<pair<string,pair<int,int>>> vp;
    while (n--)
    {
        /* code */
        string s;
        int d,u;
        cin>>s;
        cin>>d>>u;
        vp.push_back(make_pair(s,make_pair(d,u)));
        
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
return 0;
}