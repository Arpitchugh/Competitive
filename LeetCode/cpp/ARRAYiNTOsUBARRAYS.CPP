#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
int logic(int a) {
	int ans = 0;
	if (a / 2 != 2 ||a/2 !=1) {
		logic(a + 1);
		ans += 1;
	}
	return ans;
}
int main() {
	int testCases;
	cin >> testCases;

	while (testCases > 0)
	{
		int size;
		cin >> size;

		vector<int>arr;
		int var;
		for (int i = 0; i < size; i++)
		{
			cin >> var;
			arr.push_back(var);
		}

		sort(arr.begin(), arr.end());



		//logic
		int ans = 0;

		if (arr.at(0) == 1 && arr.at(1) == 2 && arr.at(2) == 3) {
			ans = 1;
			cout << ans;

		}
		else
		{

			for (int i = 0; i < arr.size() - 1; i++)
			{
				std::stringstream ss;

				ss << arr[i];

				int result;
				ss >> result;
				cout << logic(result);

			}
		}
		testCases--;
	}
	return 0;
}
