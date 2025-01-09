#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int dk(vector<int> &mdk, unordered_map<int, int> &dan, int mdan)
{
    int strt =1;
    int ui21 = strt;
    for(int i=0; i<(int)mdk.size(); i++)
    {
        if (ui21 + mdk[i] <= 100)    ui21 += mdk[i];
        
        while (dan.count(ui21))    ui21 = dan[ui21];
        
    }
    if (dan.count(ui21))    return 0;
    return ui21 == mdan ? 1:0;
}

int main()
{
    int moh;
    cin >> moh;

    vector<vector<int>> up; 
    unordered_map<int, int> ph;
    for (int a = 0; a < moh; ++a)
    {
        int gq, yh;
        cin >> gq >> yh;
        up.pb({gq, yh});
        ph[gq] = yh;
    }

    vector<int> ns;
    int wx;
    while (cin >> wx) ns.pb(wx);
    if (ns.empty())
    {
        cout << "Not reachable";
        return 0;
    }
    int zt = ns.back();
    ns.pop_back();
    vector<int> lp = ns;
    if (dk(lp, ph, zt))
    {
        cout << "Not affected";
        return 0;
    }
int nup = (int)up.size();
    for (int i=0; i<nup; i++)
    {
        int gq = up[i][0], yh = up[i][1], bd = yh, qt = gq;
        ph.erase(gq);
        string hv = (gq > yh) ? "Ladder" : "Snake"; 
        if (bd == 1 || ph.count(bd))
        {
            ph[gq] = yh;
            continue;
        }

        ph[bd] = qt; 

        if (dk(lp, ph, zt))
        {
            cout << hv << " " << bd << " " << qt;
            return 0;
        }

        ph.erase(bd); 
        ph[gq] = yh;    
    }

    cout << "Not reachable";
    return 0;
}
