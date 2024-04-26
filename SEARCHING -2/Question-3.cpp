# include <iostream>
using namespace std;

int main(){

    int m=3;
    int n=4;

    int matrix[m][n]={1,3,5,7,10,11,16,20,23,30,34,60};

    int target=2;
    int k=0;
    bool flag=false;
    while(k<m){
        if(target>=matrix[k][0] && target<=matrix[k][n-1]){
            // Binary search
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(matrix[k][mid]==target){
                    flag=true;
                    break;
                }
                else if(matrix[k][mid]>target) high=mid-1;
                else low=mid+1;
            }
            k++;
            }
            else{
                k++;
                continue;
            }
        }
        if(flag) cout<<"True";
        else cout<<"False";

    return 0;
}