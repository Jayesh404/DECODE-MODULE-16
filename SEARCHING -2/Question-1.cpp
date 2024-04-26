# include <iostream>
using namespace std;

int main(){

    int arr[10]={99,88,84,79,77,67,61,59,57,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=84;

    // Binary Search

    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            cout<<"Element found at index : "<<mid;
            flag=true;
            break;
        }
        else if(arr[mid]>x) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<"Element not found"<<endl;
    }
    return 0;
}