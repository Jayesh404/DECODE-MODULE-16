# include <iostream>
using namespace std;

int main(){

    int nums[]={2,5,6,0,0,1,2};
    int target=6;

    int n=7;
    int low=0;
    int high=n-1;
    bool flag =false;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                flag=true;
                break;
            }
            else if(nums[mid]==nums[high] && nums[mid]==nums[low]){
                low++;
                high--;
            }
            else if(nums[mid]<=nums[high]){
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
            else{
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
        }
        
        if(flag) cout<<"True";
        else cout<<"False";

    return 0;
}