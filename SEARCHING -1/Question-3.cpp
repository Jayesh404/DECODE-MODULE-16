#include <iostream>
using namespace std;

int main(){

    // Define a 4x4 binary matrix
    int arr[4][4] = {
        {0, 0, 0, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 1, 1}
    };

    int m = 4, n = 4; // Number of rows and columns
    int x = 1; // Value to search for
    int maxr = -1; // Row index with the maximum count of 1s
    int maxOnes = 0; // Maximum count of 1s

    // Loop through each row of the matrix
    for(int i = 0; i < m; i++){
        
        int low = 0;
        int high = n - 1;
        int firstidx = -1; // Index of the first occurrence of 1
        int count = 0; // Count of 1s in the current row

        // Binary search within the row
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[i][mid] == x){
                if(mid == 0 || arr[i][mid - 1] != x){
                    firstidx = mid;
                    break;
                } else {
                    high = mid - 1;
                }
            } else if(arr[i][mid] < x){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if(firstidx == -1) {
            count = 0;
        } else count = n - firstidx;
        if(maxOnes < count){
            maxOnes = count;
            maxr = i;
        }
    }
    cout << maxr;
    return 0;
}
