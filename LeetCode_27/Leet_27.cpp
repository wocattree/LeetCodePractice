#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
	auto count = std::count(nums.begin(), nums.end(), val); 
	for (auto i = 0;i < count; i++)
	{
		auto it = std::find(nums.begin(), nums.end(), val);
		nums.erase(it);
	}
	return nums.size();
}


int main()
{
	std::vector<int> test{ 1,4,2,5,2 };
	int num = 2;
	removeElement(test,num);
	for (auto num : test)
	{
		std::cout << num << std::endl;
	}
	system("pause");
}