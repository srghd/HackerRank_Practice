SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

 if(!head1) return head2;
    if(!head2) return head1;
    SinglyLinkedListNode *p1 = head1, *p2 = head2, *h, *p;
    if(p1->data < p2->data) {
        h = p1;
        p1 = p1->next;
    } else {
        h = p2;
        p2 = p2->next;
    }
    p = h;
    while(p1!=NULL || p2!=NULL) {
        if(!p2 || (p1 && p1->data < p2->data)) {
            p->next = p1;
            p1 = p1->next;
        } else {
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    return h;

}
