#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_set>
#include<sstream>
using namespace std;

int main()
{
	int user_num=0;
	int id;
	string str;
	getline(cin,str);
	istringstream sstr0(str);
	sstr0>>user_num>>id;
	
	vector< unordered_set<int> > v;
	int tmp=0;
	for(int i=0;i<user_num;i++)
	{
		unordered_set<int> s;
		getline(cin,str);
		istringstream sstr(str);
		while(sstr>>tmp)
		{
			s.insert(tmp);
		}
		v.push_back(s);
	}
	vector<int> fnum(user_num,0);
	tmp=0;
	for(int i=0;i<user_num;i++)
	{
		if(v[id].count(i) || i==id)
			continue;
		for(unordered_set<int>::iterator it=v[i].begin();it!=v[i].end();it++)
			if(v[id].count(*it))
				fnum[i]++;
		if(fnum[tmp]<fnum[i])
			tmp=i;
	}
		
	cout<<tmp<<endl;

}
