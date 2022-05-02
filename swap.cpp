    /*
    node* temp;

    if (A->next == B){
        
        A->next = B->next;
        B->next = A;

        if (A->next != nullptr)
            A->next->prev = A;

        temp = A->prev;
        A->prev = B;
        B->prev = temp;

        if (B->prev != nullptr)
            B->prev->next = B;  
    }
    else{
        temp = A->next;
        A->next = B->next;
        B->next = temp;

        if (A->next != nullptr)
            A->next->prev = A;
        if (B->next != nullptr)
            B->next->prev = B;

        temp = A->prev;
        A->prev = B->prev;
        B->prev = temp;

        if (A->prev != nullptr)
            A->prev->next = A;
        if (B->prev != nullptr)
            B->prev->next = B;
    }
*/