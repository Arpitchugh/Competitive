#include <iostream>
#include <vector>
using namespace std;

int containerSize(vector<int>& height) {
	int max_area = 0;
	int curr_area = 0;
	int l = 0;
	int r = height.size() - 1;
	while (l<r)
	{
		curr_area = (r - l) * min(height[l], height[r]);
		if (max_area < curr_area) max_area = curr_area;
		if (height[r] < height[l]) {
			r--;
		}
		else
		{
			l++;
		}
	}
	return max_area;
}

int main(int argc, char const* argv[]) {
	vector<int> v = { 1,8,6,2,5,4,8,3,7 };
	cout << containerSize(v);
	return 0;
}
