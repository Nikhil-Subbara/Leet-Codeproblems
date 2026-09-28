struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode *temp;
    struct ListNode *prev;

    if(head == NULL)
        return head;

    // Remove matching nodes from the beginning
    while(head != NULL && head->val == val)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    if(head == NULL)
        return head;

    prev = head;
    temp = head->next;

    while(temp != NULL)
    {
        if(temp->val == val)
        {
            prev->next = temp->next;
            free(temp);
            temp = prev->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}