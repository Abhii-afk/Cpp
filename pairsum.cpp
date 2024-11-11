//NOT OPTIMISED 
//BRUTE FORCE APPROACH

#include<iostream>
#include<vector>
using namespace std;

    vector<int> PairSum(vector<int> nums,int target){

    vector<int> ans;
    int n  = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int  j = i+1; j <n; j++)
        {
            if (nums[i]+nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
        
    return ans;
    }
    }

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = PairSum(nums,target);
    cout << ans[0] <<"," << ans[1] << endl;
    return 0;
}


//OPTIMAL APPROACH
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSumFunction(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = nums[i] + nums[j]; // Local variable inside the function
        if (pairSum > target) {
            j--;
        } else if (pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pairSumFunction(nums, target);
    cout << ans[0] << ","<<ans[1] << endl;
    return 0;
}
