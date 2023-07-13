#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Eduardo German Ruiz Mamani
//CUI: 2019061

float min (vector<int> &px, vector<int> &py)
{
    float temp, m = -1;
    for (int i = 1; i < px.size(); i++)
    {
        for (int j = i+1; j < py.size(); j++)
        {
            temp = sqrt(pow(px[i]-px[j],2) + pow(py[i]-py[j],2));
            if (temp < m || m < 0) m = temp;
        }
        temp = sqrt(pow(px[i],2) + pow(py[i],2));
    }
    return m;
}

int main()
{
    int key = 1;
    vector<int> px;
    vector<int> py;
    float m;

    std::cin >> key;
    while (key != 0)
    {
        px.clear();
        py.clear();
        while (key != 0)
        {
            px.push_back(0);
            std::cin >> px.back();
            py.push_back(0);
            std::cin >> py.back();
            key--;
        }
        m = min(px,py);

        if (m > 10000) std::cout << "INFINITY";
        else std::cout << min(px,py);
        std::cout << endl;
        std::cin >> key;
    }

    return 0;
}