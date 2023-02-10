/* Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

 */
#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> &nums) {
    vector<int> ans;
    int start = 0, end = nums.size() -1;
    int tmp;
    while(start <= end) {
        tmp =  nums[start];
        nums[start] = nums[end];
        nums[end] = tmp;
        start++; end--;
    }
    return nums;
}
void print(vector<int> &nums) {
    for(int i = 0; i < nums.size() ; i++) 
        cout << nums[i] << endl;
}
int main() {

    vector<int> nums = {4, 5, 1, 2};
    vector<int> ans= reverse(nums);
    print(ans);
    return 0;
}