#include<iostream>
using namespace std;

class Solution 
{
public:
	int Fibonacci(int n) 
	{
		int f[40];
		f[0] = 0;
		f[1] = 1;
		f[2] = 1;
		for(int i = 3; i <= n; i++)
		{
			f[i] = f[i - 1] + f[i-2];
		}
		return f[n];
	}
};

int main()
{

}