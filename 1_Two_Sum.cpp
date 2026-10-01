#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size()-1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
    }
};





int main()
{
    vector<int> nums = {5,8,2,1,10};
    int target = 10;

    Solution r = Solution();

    vector<int> result = r.twoSum(nums, target);

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << "\n";
}