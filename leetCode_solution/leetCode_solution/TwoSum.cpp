#include <iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> map;
	int size = nums.size();
	int complement = 0;
	for (int i = 0; i < size; i++) {
		map[nums[i]] = i;
	}

	for (int i = 0; i < size; i++) {
		complement = target - nums[i];
		if (map.count(complement) && map[complement] != i) {
			return { map[complement] ,i };
		}
	}
	return { 0,0 };
}

int main()
{
	map<int, int> map;
	map[1] = 1;
	map[1] = 2;
	cout << map.count(1);
}

