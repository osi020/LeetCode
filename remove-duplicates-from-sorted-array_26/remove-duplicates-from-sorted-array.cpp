#include <iostream>
#include <vector>
using namespace std;

class Solution {
public : 
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 1 ; i< nums.size() ; i++){
                if(nums[k] != nums[i]){
                    k++;
                    nums[k] = nums[i] ;
                }
            }
        return k+1 ;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3};
    int result = solution.removeDuplicates(nums);
    cout << "Nouveau k : " << result << endl;
    return 0;
}