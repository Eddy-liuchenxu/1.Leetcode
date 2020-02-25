/*************************************************************************
	> File Name: 83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时48分20秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode * H = (struct ListNode *) malloc(sizeof(struct ListNode));
    H->next = head;
    struct ListNode * p = H, *q = H->next, *l;
    int length = 0, temp = 0;
    while(q) {
        length++;
        q = q->next;
    }
    q = H;
    for(int i = 1; i <= length - 1; i++) {
        l = q;
        q = q->next;
        p = q->next;
        for(int j = 1; j <= length - i; j++) {
            if(q -> val == p -> val){
                q->next = p->next;
                free(p);
                p = q->next;
                temp ++;
            }else{
                p = p->next;
            }
        }
        if(temp) {
            length -= temp; 
            temp = 0;
        } 
    }
    return H->next;
}
