#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n ;
    cin>>n;
    long long a[n];
    
    for(int i = 0;i<n;i++)
    cin>>a[i];
    
    
    long long mini = INT_MAX;
    for(int i = 0;i<n;i++)
    mini=min(mini,abs(a[i]));
    
    cout<<mini<<endl;
    
    return 0;
}