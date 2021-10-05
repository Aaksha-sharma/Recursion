#include<iostream>
using namespace std;
string move_all_x(string s)
{
	if (s.length() == 0)
	{
		return " ";
	}
	char ch = s[0];
	string ans = move_all_x(s.substr(1));
	if (ch == 'X' || ch=='x')
	{
		return ans + ch;
	}
	return ch + ans;
}
int main()
{
	string s;
	cout << "Enter a string ";
	cin >> s;
	cout << move_all_x(s);
}