#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Eduardo German Ruiz Mamani
//CUI: 2019061

struct seg
{
    int l;
    int r;
    seg(int templ,int tempr) : l(templ),r(tempr) {};
};

bool operator<=(seg &a, seg &b) { return (a.r - a.l) <= (b.r - b.l); }
bool operator<(seg &a, seg &b) { return (a.r - a.l) < (b.r - b.l); }
bool operator>=(seg &a, seg &b) { return (a.r - a.l) >= (b.r - b.l); }
bool operator>(seg &a, seg &b) { return (a.r - a.l) > (b.r - b.l); }
bool operator==(seg &a, seg &b) { return (a.r - a.l) == (b.r - b.l); }
bool operator!=(seg &a, seg &b) { return (a.r - a.l) != (b.r - b.l); }

void min (int &M,vector<seg> &s,vector<int> &sol)
{
    sort(s.begin(),s.end());

    int tam,llenado = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].l < 0) continue;
        tam = s[i].r - s[i].l;
        if (tam <= M-llenado)
        {
            llenado += tam;
            sol.push_back(i);
        }
    }
}

int main()
{
    int tc = 0;
    int M;
    int r, l;
    vector<seg> s;
    vector<int> sol;

    std::cin >> tc;
    while (tc != 0)
    {
        std::cout << endl;
        std::cin >> M;
        s.clear();
        sol.clear();

        while (true)
        {
            std::cin >> l;
            std::cin >> r;
            if (r == 0 && l == 0) break;
            seg temp = seg(l,r);
            s.push_back(temp);
        }
        min(M,s,sol);

        if (sol.empty()) std::cout << "\n0\n";
        else
        {
            std::cout << endl << sol.size();
            for (int i = 0; i < sol.size(); i++)
            {
                std::cout << endl << s[sol[i]].l << " " << s[sol[i]].r << endl;
            }
        }
        tc--;
    }
}