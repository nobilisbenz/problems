#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0;; ++i) {
      int x = nums[i];
      int y = target - x;
      if (m.count(y)) {
        return {m[y], i};
      }
      m[x] = i;
    }
  }
};

int main() {
  Solution solution;
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> result = solution.twoSum(nums, target);
  cout << "Indices: [" << result[0] << ", " << result[1] << "]\n";
  cout << "Because: nums[" << result[0] << "] + nums[" << result[1] 
    << "] = " << nums[result[0]] << " + " << nums[result[1]] 
    << " = " << target << endl;
  return 0;
}
