#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Eduardo German Ruiz Mamani
//CUI: 2019061

int median (vector<int> &v)
{
	int t = v.size();
	if (t == 1) return v[0];
	
	sort(v.begin(),v.end());
	if (t%2 != 0) return v[t/2];
	return (v[t/2]+v[(t/2)-1])/2;
}

int main()
{
	int x;
	vector<int> v;
	
	while (cin >> x)
	{
		v.push_back(x);
		cout << median(v) << endl;
	}
	return 0;
}
