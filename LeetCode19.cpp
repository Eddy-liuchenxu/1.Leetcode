/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时43分03秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
        int length = 0;
        struct ListNode * l = (struct ListNode *) malloc(sizeof(struct ListNode));
        l->next = head;
        struct ListNode * p = l->next, *q = l;
        while(p){
            length++;
            p = p->next;
        }
        p  = l->next;

        for(int i = 1; i <= length - n; i++){
            p = p->next;
            q = q->next;
        }
        q->next = p->next;
        free(p);
        return l->next;
}
