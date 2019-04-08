//
//  Merge Two Sorted Lists.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/4/8.
//
/*
 Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 
 Example:
 
 Input: 1->2->4, 1->3->4
 Output: 1->1->2->3->4->4
 
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* newNode;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    if(l1->val<l2->val)
    {
        newNode=l1;
        newNode->next=mergeTwoLists(l1->next,l2);
    }
    else
    {
        newNode=l2;
        newNode->next=mergeTwoLists(l1,l2->next);
    }
    return newNode;
}
