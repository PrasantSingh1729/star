#include <bits/stdc++.h> 
using namespace std;

void solve(int n){
    if(n==0) return;
    solve(n-1);
    for(int i=0;i<n;i++) cout<<"* ";
    cout<<"\n";
    
}

int main()
{
    int n=5;
    solve(n);
    
    
    return 0;
}
