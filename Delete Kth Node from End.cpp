Node* removeKthNode(Node* head, int K)
{
    Node* n = new Node();
    n->next = head;
    
    Node* p1 = n;
    Node* p2 = n;
    
    for(int i = 1; i <= K; i++){
        p1 = p1->next;
    }
  
    while(p1->next != NULL){
        p1 = p1->next;
        p2 = p2->next;
    }

    p2->next = p2->next->next;
    return n->next;
}
