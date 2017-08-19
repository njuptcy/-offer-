//#include<iostream>
//using namespace std;
//struct ListNode 
//{
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) 
//	{
//	}
//};
//
//class Solution 
//{
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		ListNode *real_head = pHead;
//		if (pHead == NULL)
//			return NULL;
//		ListNode *cur = pHead;
//		ListNode*preNode = NULL;
//
//		while(cur != NULL)
//		{
//			ListNode *next = cur->next;
//			if (next == NULL)
//				return real_head;
//			if(cur->val == next->val)
//			{
//				int value = cur->val;
//				ListNode*to_be_del = cur;
//				//Á¬ĞøÉ¾³ı
//				while(to_be_del!=NULL && to_be_del->val == value)
//				{
//					cur = to_be_del->next;
//					delete to_be_del;
//					to_be_del = cur;
//				}
//				if(preNode == NULL)
//				{
//					real_head = cur;
//				}
//				else
//				{
//					preNode->next = cur;
//				}
//			}
//			else
//			{
//				preNode = cur;
//				cur = cur->next;
//			}
//		}
//		return real_head;
//	}
//};
//
//int main()
//{
//
//}