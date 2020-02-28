/*************************************************************************
	> File Name: LeetCode160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时03分34秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode * p = headA, *q = headB,temp;
    while(p && q) {
        p = p->next;
        q = q->next;
    }
    if(p == NULL) {
        p = q;
        q = headA;
        headA = headB;
        headB = q;
    }
    while(p) {
        headA = headA->next;
        p = p->next;
    }
    while(headA != headB) {
        headA=headA->next;
        headB=headB->next;
    }
    return headA;
}
