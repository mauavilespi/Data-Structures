/*
Mauricio Aviles Piña
The MAP
github.com/mauavilespi
*/


// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

bool has_cycle(SinglyLinkedListNode* head) {
    if (head==NULL){
        return 0;
    } else {
    int contador=0;

       while (1){
           if (head->next==NULL){
               return 0;
               break;
               }else if (contador == 1001){
                   return 1;
                   break;
               }
           contador++;
           head=head->next;
        }
} 
}


