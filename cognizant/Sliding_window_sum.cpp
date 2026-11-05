#include<bits/stdc++.h>
#define l long long 
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    l x,a,b,c;
    cin>>x>>a>>b>>c;
    vector<l>arr(n);
    for(int i=0;i<n;i++){
       if(i==0){
        arr[i]=x;
       }else{
        arr[i]=(a*arr[i-1]+b)%c;
       }
    }
    l sum=0;
    l ans=0;
    int i=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
        if(j-i+1<k)continue;
        else{
            ans=ans^sum;
            sum-=arr[i];
            i++;
        }
    }
    cout<<ans<<"\n";
    
    return 0;
}