# include <iostream>
using namespace std;

int main(){

    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=5;

    int low=0;
    int high=n-1;

    // Binary Seach 

    while(low<=high){
        
        int mid=low+(high-low)/2;

        if(arr[mid]==x)
        {
            cout<<"Element present at index : "<<mid;
            break;
        }
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }

    return 0;
}