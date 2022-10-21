
node* mergesort(node* head){
    //Base case
    if(!head or !head->next){
        return head;
    }
    //Recursive case
    node* m=midll(head);
    node* a=head;
    node* b=m->next;
    m->next=NULL;
    //2. Sort
    a=mergesort(a);
    b=mergesort(b);
    node* nh=merger(a,b);
    return nh;
}