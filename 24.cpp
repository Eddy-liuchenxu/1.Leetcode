/*************************************************************************
	> File Name: 24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时46分56秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode * H = (struct ListNode * ) malloc(sizeof(struct ListNode));
    H->next = head;
    struct ListNode * p , *q,*l;
    p = H->next, q = H;
    int length = 0;
    while(p) {
        length++;
        p = p->next;
    }
    p = H;
    for(int i = 1; i <= length/2; i ++) {
        l = p;
        p = p->next;
        q = p->next;
        p->next = q->next;
        q->next = p;
        l->next = q;
    }
    return H->next;
    

}
