# include <iostream>
using namespace std;

int main(){

    int n=15;
    
    int low=0;
    int high=n;
    bool flag=false;
    while(low<=high){
        int k=low+(high-low)/2;
        int m=k*(k+1)/2;
        if(m==n){
            flag=true;
            cout<<k;
            break;
        }
        else if(m<n) low=k+1;
        else high=k-1;
    }
    if(!flag) cout<<high;
    
    return 0;
}