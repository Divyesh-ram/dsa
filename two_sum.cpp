 /*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int tar,f,n;
    cin>>tar;
    for(int i=0;i<10;i++){
        if(tar-arr[i+1]==arr[i]){
            f=i;
            n=i+1;
            cout<<"{"<<f<<" ,"<<n<<"}"<<endl;

        }
        else{
            cout<<"no output"<<endl;
            break;
        }
        
    }
    

}
/*                      ######Original c++ code######

#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, size_t> N;
        vector<int> res;
        for(size_t i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if(N.count(target - num)) {
                res.push_back(i);
                res.push_back(N[target - num]);
            } else {
                N.insert({ num, i });
            }
        }
        return res;
    }
};
*/
