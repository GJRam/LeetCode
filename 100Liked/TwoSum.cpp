#include <vector>

#include <unordered_map>

std::vector < int > twoSum(std::vector < int > & nums, int target) {
  std::vector < int > result;
  std::unordered_map < int, int > map; // value / index;
  for (int i = 0; i < nums.size(); i++) {
    //if the map contains value == target - current number -> retun the current index and the value found ; 
    //else add to the dictionary
    if (map.contains(target - nums[i])) {
      result.push_back(map[target - nums[i]]);
      result.push_back(i);
      return result;
    }
    map.insert({
      nums[i],
      i
    });
  }
  return result;
}
