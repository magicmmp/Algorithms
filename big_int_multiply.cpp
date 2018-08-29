#include <iostream>
#include <vector>
#include <string>
using namespace std;

string BigMutiple(string num1, string num2)
{

    string res="";
	int m = num1.size();
	int n = num2.size();
	vector<int> tmp(m + n - 1);
	for (int i = 0; i < m; i++)
	{
		int a = num1[i] - '0';
        for (int j = 0; j < n; j++)
		{
            int b = num2[j] - '0';
            tmp[i + j] += a*b;
        }
    }
	int carry = 0;
    for (int i = tmp.size() - 1; i >= 0; i--)
	{
        int t = tmp[i] + carry;
        tmp[i] = t % 10;
        carry = t / 10;
    }
	while (carry != 0)
	{
        int t = carry % 10;
        carry /= 10;
        tmp.insert(tmp.begin(), t);
    }
	for (auto a : tmp)
	{
        res = res + to_string(a);
    }
    if(res.size()>0&&res[0]=='0') 
		return "0";
    return res;

}
int main()
{
    string num1, num2;
    while (cin >> num1 >> num2)
	{
        cout << BigMutiple(num1, num2) << endl;
    }
    return 0;
}
