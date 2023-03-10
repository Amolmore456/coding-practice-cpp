/* Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

Examples:

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
        Maximum element is: 35 
*/


#include<iostream>
#include<vector>

using namespace std;
struct Pair {
    int min;
    int max;
};

Pair findMaxMinEl(vector<int> &nums) {
    struct Pair minmax;
    int size =  nums.size();
    if(size == 1) {
        minmax.min = nums[0];
        minmax.max = nums[0];
        
        return minmax;
    }
        if(nums[0] > nums[1]) {
            minmax.min = nums[1];
            minmax.max = nums[0];
        } else {
            minmax.min = nums[0];
            minmax.max = nums[1];
        }


    for (int i =2; i < size; i++) {
        if(nums[i] >  minmax.min) {
            minmax.max = nums[i];
        } else if(nums[i] < minmax.min) {
            minmax.min = nums[i];
        }
    }

    return minmax;

}

Pair getMinMax(vector<int> nums) {
    struct Pair minMax;
    int i;
    int size = nums.size();
    

    if(size%2 == 0) {
        if(nums[0] > nums[1]) {
            minMax.max = nums[0];
            minMax.min = nums[1];
        } else {
            minMax.min = nums[0];
            minMax.max = nums[1];
        }
        i=2;
    } else {
        minMax.min = nums[0];
        minMax.max = nums[0];
        i=1;
    }

    while (i < size-1) {
        if(nums[i] >nums[i+1]) {
            if(nums[i] > minMax.max) {
                minMax.max = nums[i];
            }
            if(nums[i + 1] < minMax.min) {
                minMax.min =  nums[i + 1];
            }
        } else {
            if(nums[i + 1] > minMax.max) {
                minMax.max = nums[i + 1]; 
            }
            if(nums[i] < minMax.min) {
                minMax.min = nums[i]; 
            }
        }
        i= i+2;
    }
    return minMax;
}

int main( ) {
    vector<int> nums = {3,5, 4, 1, 9};
    struct Pair ans =  getMinMax(nums);
    cout << "Min:" << ans.min <<  "   " << "Max:" << ans.max << endl;

    return 0;

}