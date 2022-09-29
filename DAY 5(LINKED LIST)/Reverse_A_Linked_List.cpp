/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

#include<bits/stdc++.h>
using namespace std;

   ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *slow=NULL,*mid,*fast=head;
        while(fast)
        {
            mid=fast;
            fast=fast->next;
            mid->next=slow;
            slow=mid;
        }
        return mid;
    }

int main()
{
    
}