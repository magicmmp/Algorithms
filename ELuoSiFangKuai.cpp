#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>num(n,0);
    vector<int>L(m,0);
    for(int i=0;i<m;i++)
        cin>>L[i];
    unordered_set<int>s;
    for(int i=1;i<=n;i++)
        s.insert(i);
    int res=0;
    for(int i=0;i<m;i++)
    {
        num[L[i]-1]++;
        s.erase(L[i]);
        if(s.empty())
        {
            res++;
            for(int j=0;j<n;j++)
            {
                num[j]--;
                if(num[j]==0)
                    s.insert(j+1);
            }
        }
    }
    cout<<res;
    
}
