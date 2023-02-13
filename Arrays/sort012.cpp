/* Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order. */


#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int> &nums, int size) {
    int  low = 0;
    int  mid = 0;
    int  high = size -1;

    while(mid <= high) {

        switch (nums[mid])
        {
        case 0:
            std::swap(nums[mid], nums[low]);
            mid++; low++;
            break;
        case 1:
            mid++;
            break;
        
        case 2:
            std::swap(nums[mid], nums[high]);
            high--;
            break;
        
        default:
            break;
        }
    }
}
int main() {
    vector<int> arr = {0, 2, 1, 2, 0};
    int size= arr.size();
    sort012(arr, size);
    for(int i =0; i < size; i++) {
        cout<< arr[i] << endl;
    }

    return 0;
}