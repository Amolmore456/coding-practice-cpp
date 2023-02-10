#include <iostream>
#include<algorithm>
using namespace std;

/* 

67. Add Binary
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/


string addBinary(string a, string b) {
    if(a.length() > b.length()) {
        return addBinary(b,a);
    }

    int diff = b.length() - a.length();

    string padding;

    for(int i=0; i< diff; i++){
        padding.push_back('0');
    }

    a = padding + a;
    string res;
    char carry = '0';

    for(int i =a.length() - 1; i >=0; i--) {
        if(a[i]=='1' && b[i]=='1') {
            if(carry=='1'){
                res.push_back('1');
                carry='1';
            } else {
                res.push_back('0');
                carry='1';
            }
        } else if(a[i] =='0' && b[i] == '0') {
            if(carry=='1') {
                res.push_back('1');
                carry='0';
            } else {
                res.push_back('0');
                carry='0';
            }
        } else if(a[i] != b[i]) {
            if(carry == '1') {
                res.push_back('0');
                carry='1';
            } else {
                res.push_back('1');
                carry='0';
            }
        }
    
    }

    if(carry == '1') {
        res.push_back(carry);
    }
    reverse(res.begin(), res.end());

   
    return res;
    
}



int main() {

    string a ="100";
    string b ="10010";
    cout << addBinary(a, b) << endl;

    return 0;
}