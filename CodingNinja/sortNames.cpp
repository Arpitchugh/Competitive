#include <bits/stdc++.h>
using namespace std;

bool func(string a, string b){
	return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
  //stl sort in ascending
	sort(a.begin(),a.end(),func);
	return a;
}

int main()
{
	int n;
	cout << "enter number of names to be added: ";
	cin >> n;

	vector<string> names;
	string name;
	cout << "enter names: " << endl;
	//input
	for(int i=0;i<n;i++){
		cin>>name;
		names.push_back(name);
	}

	//logic
	names=alphabaticallySort(names);

  //output
  cout << endl;
	for(int i=0;i<names.size();i++)
		cout<<names[i]<<endl;

	return 0;
}
