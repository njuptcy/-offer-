//#include<stack>
//#include<limits>
//#include<queue>
//#include<iterator>
//#include<iostream>
//using namespace std;
//
//class MaxStack
//{
//private:
//	stack<int> sta;
//	stack<int> max_sta;
//public:
//	void push(int num)
//	{
//		sta.push(num);
//		if(!max_sta.empty())
//		{
//			max_sta.push(std::max(max_sta.top(), num));
//		}
//		else
//		{
//			max_sta.push(num);
//		}
//	}
//	int top()
//	{
//		return sta.top();
//	}
//	void pop()
//	{
//		sta.pop();
//		max_sta.pop();
//	}
//	int max()
//	{
//		if(max_sta.empty())
//		{
//			return numeric_limits<int>::min();
//		}
//		return max_sta.top();
//	}
//	bool empty()
//	{
//		return sta.empty();
//	}
//};
//
//
////O(1) 的时间获得队列中的最大值
//class QueueMax
//{
//private:
//	MaxStack s1;
//	MaxStack s2;
//	void dump()
//	{
//		while(!s1.empty())
//		{
//			s2.push(s1.top());
//			s1.pop();
//		}
//	}
//	//queue<int> q1;
//	//queue<int> max;
//public:
//	void push_back(int num)
//	{
//		/*q1.push(num);
//		if(!max.empty() && num > )
//		{
//
//		}*/
//		s1.push(num);
//	}
//	int front()
//	{
//		if(s2.empty())
//		{
//			dump();
//		}
//		return s2.top();
//	}
//	void deque()
//	{
//		if(s2.empty())
//		{
//			dump();
//		}
//		s2.pop();
//	}
//
//	int max()
//	{
//		
//		return std::max(s1.max(), s2.max());
//	}
//};
//
//class Solution 
//{
//	QueueMax mq;
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		vector<int> result;
//		if(num.empty() || size > num.size() || size == 0)
//		{
//			return result;
//		}
//		auto it = num.begin();
//		while(size--)
//		{
//			mq.push_back(*it);
//			it++;
//		}
//		result.push_back(mq.max());
//		while(it != num.end())
//		{
//			mq.deque();
//			mq.push_back(*it);
//			result.push_back(mq.max());
//			it++;
//		}
//		return result;
//	}
//};
//int main()
//{
//	/*QueueMax qm;
//	qm.push_back(1);
//	cout << qm.max() << endl;
//	qm.push_back(3);
//	cout << qm.max() << endl;
//	qm.push_back(7);
//	cout << qm.max() << endl;
//	qm.push_back(2);
//	cout << qm.max() << endl;
//	qm.push_back(1);
//	cout << qm.max() << endl;
//
//	cout << "************" << endl;
//	cout << qm.max() << endl;
//	qm.deque();
//	cout << qm.max() << endl;
//	qm.deque();
//	cout << qm.max() << endl;
//	qm.deque();
//	cout << qm.max() << endl;
//	qm.deque();
//	cout << qm.max() << endl;*/
//
//	vector<int> input = {  2,3,4,2,6,2,5,1  };
//	Solution s;
//	auto result = s.maxInWindows(input, 3);
//	
//	ostream_iterator<int> os_it(cout, " ");
//	copy(result.begin(), result.end(), os_it);
//	getchar();
//}
