/*
Mauricio Aviles Piña
The MAP
github.com/mauavilespi
*/


// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if (head==NULL){
        head = malloc (sizeof(struct SinglyLinkedListNode));
        head->data=data;
        head->next==NULL;
        return head;
    }

    struct SinglyLinkedListNode *tmp = malloc (sizeof(struct SinglyLinkedListNode));

    tmp->data=data;
    tmp->next=NULL;

    struct SinglyLinkedListNode *aux = malloc (sizeof(struct SinglyLinkedListNode));

    aux=head; 

    if (head -> next == NULL){
        head->next=tmp;
    } else {
        while (aux!=NULL){
            if(aux->next ==NULL)
            break;
            else 
            aux= aux->next;
        }
        aux->next =tmp;
    }
    return head;
}


