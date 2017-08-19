
#include<string>
#include<iostream>
using namespace std;

string multipy(const string& a ,const string & b)
{
	string result(a.size()+b.size(), '0');
	string num1(a.rbegin(), a.rend());
	string num2(b.rbegin(), b.rend());
	int carry = 0;
	for(int i = 0; i < a.size(); i++)
	{
		for(int j = 0; j < b.size(); j++)
		{
			int index = i + j;
			int temp = (num1[i] - '0') * (num2[j] - '0') + (result[index] - '0');
			result[index] = temp % 10 + '0';
			carry = temp / 10;
			while(carry)
			{
				temp = result[index + 1] - '0' + carry;
				result[index + 1] = temp % 10 + '0';
				carry = temp / 10;
				index++;
			}
		}
	}
	auto it = result.rbegin();
	for (; it != result.rend() && *it == '0'; it++);

	return string(it, result.rend());
}

int main()
{
	string a = "99";
	string b = "99";
	string result = multipy(a, b);
	cout << result << endl;
	getchar();
}