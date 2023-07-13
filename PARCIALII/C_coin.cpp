#include <iostream>
#include <vector>
using namespace std;

//Eduardo German Ruiz Mamani
//CUI: 2019061

int maximo (vector<int> &c)
{
	int cont = 0;
	int total = 0;
	
	for (int i=0; i < c.size();i++)
	{
		if (c[i] <= total) continue;
		cont++;
		total += c[i];
	}
	
	return cont;
}

int main()
{
	int T, n;
	vector<int> c;
	std::cin >> T;
	
	while (T != 0)
	{
		std::cin >> n;

		c.clear();
		while (n != 0)
		{
			c.push_back(0);
			std::cin >> c.back();
			n--;
		}
		
		std::cout << maximo(c) << endl;
		T--;
	}
	return 0;
}

