//#include<vector>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//  struct ListNode 
//  {
//        int val;
//        struct ListNode *next;
//        ListNode(int x) :
//              val(x), next(NULL) 
//		{
//        }
//  };
//
//class Solution 
//{
//public:
//	vector<int> printListFromTailToHead(ListNode* head) 
//	{
//		vector<int> result;
//		stack<int> temp;
//		ListNode *curr = head;
//		while(curr != nullptr)
//		{
//			temp.push(curr->val);
//			curr = curr->next;
//		}
//
//		while( !temp.empty() )
//		{
//			result.push_back(temp.top());
//			temp.pop();
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	/*stack<int> test;
//	int a = test.top();
//	cout << a << endl;*/
//	getchar();
//}