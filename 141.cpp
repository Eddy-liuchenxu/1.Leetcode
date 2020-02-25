/*************************************************************************
	> File Name: 141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时50分14秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast_p = head, *slow_p = head;
    while(fast_p != NULL && fast_p->next != NULL) {
        slow_p = slow_p ->next;
        fast_p = fast_p->next->next;
        if(fast_p == slow_p) return 1;
    }
    return 0;
}
