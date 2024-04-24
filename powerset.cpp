#include<bits/stdc++.h>
using namespace std;
#include<vector>
//#define pb push_back
int main()
{
    int n;
    cin>>n;
    vector<int>v[(1<<n)];
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        //a[i]=i;
    for(int i=0;i<=(1<<n)-1;i++){
        for(int bit=0;bit<n;bit++){
            if(i & (1<<bit)){
                v[i].push_back(a[bit]);
            }
        }
    }
        for(int i=0;i<=(1<<n)-1;i++){
            for(auto j:v[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }

}
