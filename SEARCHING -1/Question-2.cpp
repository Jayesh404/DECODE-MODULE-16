# include <iostream>
using namespace std;

int main(){

    int arr[]={0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=1;

    int low=0;
    int high=n-1;
    int firstidx=-1;

    while(low<=high){
        
        int mid=low+(high-low)/2;

        if(arr[mid]==x)
        {
            if(mid==0){
                firstidx=mid;
                break;
            }
            else if(arr[mid-1]!=x){
                firstidx=mid;
                break;
            }
            else{ // arr[mid-1]==x
                high=mid-1;
                break;
            }
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(firstidx==-1) cout<<0;
    else cout<<n-firstidx;

    return 0;
}