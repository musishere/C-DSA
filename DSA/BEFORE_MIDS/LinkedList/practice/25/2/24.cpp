// // #include <iostream>
// // using namespace;
// // // 1- strcuture (dataType)
// // struct Node
// // {
// //     int data;
// //     Node *next_address;
// // };
// // class LinkedList
// // {
// //     Node *head;
// //     // head --> Linked list ka first element
// //     LinkedList()
// //     {
// //         head = NULL;
// //     }
// // };

// // int main()
// // {
// //     // LinkedList l1;
// // }
// void DeleteNode(int val)
// {
//     // if LinkedList is Empty
//     if (head == NULL)
//     {
//         cout << "Linked List is empty. Nothing to delete";
//     }
//     else
//     {
//         // if user wants to delete the first node(head)
//         if (head->data == val)
//         {
//             Node *temp = head;
//             head = head->next;
//             delete temp;
//         }
//         else
//         {
//             Node *temp = head->next;
//             Node *prev = head;
//             while (temp != NULL)
//             {
//                 if (temp->data == val)
//                 {
//                     prev->next = temp->next;
//                     delete temp;
//                     break;
//                 }
//                 prev = temp;
//                 temp = temp->next;
//             }
//         }
//     }
// }