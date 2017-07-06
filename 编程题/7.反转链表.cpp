//#include<iostream>
//using namespace std;
//
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead) 
//	{
//		//ListNode *real_head = NULL;
//		if(pHead == NULL || pHead ->next == NULL)
//		{
//			return pHead;
//		}
//
//		ListNode *now = pHead;
//		ListNode *next = pHead->next;
//		now->next = NULL;
//		while(next)
//		{
//			ListNode *temp = next->next;
//			next->next = now;
//			now = next;
//			next = temp;
//		}
//		//real_head = now;
//		//return real_head;
//		return now;
//	}
//};