/* Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7. 

Approch 1 : Sort and get the K-1 index;
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define INT_MAX 100000;
using namespace std;

/* 
int kthSmallest(vector<int> &nums, int k) {
    int ans;
    std::sort(std::begin(nums), std::end(nums)); // O(nlogn)
    ans = nums[k-1];
    return ans;
} */
int kthSmallest(vector<int> &nums, int k) {
    priority_queue<int> pq; // Using Max Heap;
    int ans;
    int size =  nums.size();
    
    for(int i= 0; i < k; i++) {

        pq.push(nums[i]);
    }

    for(int i = k; i < size; i++) {
        if(nums[i] < pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }        
    }
    return pq.top();

}   


int main() {
    vector<int> nums ={7,10, 4, 3, 20, 15};
    int k = 3, expAns=7;
    int size = nums.size();
    int ans = kthSmallest(nums, k);
        if( ans == expAns ) {
            cout << "True" <<endl;
        } else {
            cout << "False" <<endl;
        } 
    return 0;
}