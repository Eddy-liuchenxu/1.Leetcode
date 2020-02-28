/*************************************************************************
	> File Name: LeetCode21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时50分54秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l1node = (struct ListNode *) malloc(sizeof(struct ListNode));
     struct ListNode *l2node = (struct ListNode *) malloc(sizeof(struct ListNode));
     l1node->next = l1,l2node->next = l2;
     struct ListNode *p,*q,*s;
     p = l1node,q= l2node;
     while(p->next && q->next) {
         if(p->next->val >= q->next->val){
             s = q->next;
             q->next = q->next->next;
             s->next = p->next;
             p->next = s;
            // q = q->next;  
         }else{
              p = p->next;
         }
     }
     if(q->next) {
         p->next = q->next;
     }
