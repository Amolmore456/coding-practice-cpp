// 66. Plus One

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &digits) {
    
    int size = digits.size();
    if(!size) {
        return digits;
    }
    for(int i = size -1 ; i >= 0; --i) {

        if(digits[i] + 1 > 9) {
            digits[i] = digits[i] + 1 - 10;
            if(i==0) {
                digits.insert(digits.begin(),1);
            }
                
        } else {
            digits[i] =  digits[i] +1;
            break;
        }
        
    }    
    return digits;

}



int main() {

    vector<int> arr{8,9,9,9};

 

    plusOne(arr);
   
   cout<<"Ans:";
   for(auto el:arr) {
    cout<<el;
   }
   cout<<endl;

   
    
    return 0;
}