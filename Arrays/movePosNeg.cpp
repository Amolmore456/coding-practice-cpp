/* An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5 */


#include <iostream>
#include<vector>

using namespace std;

vector<int> movePosNeg(vector<int> &nums) {
    int size = nums.size();
    int j=0;
    for(int i =0; i < size; i++) {
        if(nums[i] < 0) {
            if(i !=j) {
                swap(nums[i], nums[j]);
            }
            j++;
        }
    }
    return nums;
}
int main () {
    vector<int> arr ={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    movePosNeg(arr);
    for(int i =0; i < arr.size(); i++){
        cout<< arr[i]<< " " ;
    } cout<< endl;
    return 0;
}