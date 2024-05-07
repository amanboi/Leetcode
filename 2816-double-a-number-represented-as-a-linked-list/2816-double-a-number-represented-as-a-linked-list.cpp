/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {

         ListNode* temp2;
        ListNode* prev=NULL;
        ListNode* cur = head;
        while(cur!=NULL){  
         temp2 =cur->next;
        cur->next=prev;
        prev=cur;
        cur = temp2;
        
        }
        // reversed the given LL
      
        ListNode* newhead = prev;
        ListNode* temp = newhead;
        ListNode* previous;
        int carry = 0;
        while(temp!=NULL){
          int a = (temp->val)*2+carry;
            temp->val = a%10;
          if(a>9){
           
             carry = 1;
          }
          else{
            carry = 0;
          }

          previous=temp;
          temp = temp->next;
           
        }

        if(carry!=0){
      ListNode* newnode = new ListNode(carry);
       
        newnode->next = NULL;
        previous->next= newnode;
        }

        ListNode* temp1;
        ListNode* prev1=NULL;
        ListNode* cur1 = newhead;
        while(cur1!=NULL){  
        temp1=cur1->next;
        cur1->next=prev1;
        prev1=cur1;
        cur1 = temp1;
        
        }
    





       return prev1;

    }
};