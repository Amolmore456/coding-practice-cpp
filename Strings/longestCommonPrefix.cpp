/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings. */


#include <iostream>
#include <vector>


using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    string ans ="";

    

}

int main () {
    
    vector<string> strs = {"flower","flow","flight"}    ;

    cout << longestCommonPrefix(strs) << endl;

    return 0;
}