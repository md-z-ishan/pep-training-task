#include<iostream>
using namespace std;

int zishan(int n){
    //base case
    if(n==1){
        return 1;
    }
    int ans=n*zishan(n-1); //recursive call
    return ans;


}

int main(){
    int result=zishan(5); // Call the factorial function with 5
    cout<<result; // Output the result
    return 0;
}