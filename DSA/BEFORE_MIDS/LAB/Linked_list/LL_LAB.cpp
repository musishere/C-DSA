#include <iostream>
using namespace;
struct Node
{
    int data;
    Node *next;
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    // 1- insertion at tail
    void insertElement(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    // insert at head
    /*CODE NOT INCLUDED IN LAB TASK:
    void insertAtHead(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        Node *temp = new_node;
        temp->next = head;
        head = temp;
    }

    // insert at positon
    void insertAtPosition(int val, int position)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        Node *temp = head;
        Node *ptr = new_node;

        while (position > 1) // after insert = < , before insert >
        {
            temp = temp->next;
            position--;
        }

        ptr->next = temp->next;
        temp->next = ptr;
    }

    void SortingAcendingOrder()
    {
        // checking head
        if (!head || !head->next)
        {
            cout << "Linked List is empty. Nothing to Sort";
        }

        bool swapped;
        Node *temp;

        do
        {
            swapped = false;
            temp = head;

            while (temp->next != NULL)
            {
                if (temp->data > temp->next->data)
                {
                    swap(temp->data, temp->next->data);
                    swapped = true;
                }
                temp = temp->next;
            }
        } while (swapped);
    }
    */

    // 2- display
    void displayElement()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty ";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL";
            cout << endl;
        }
    }

    // 3- Search
    void SearchingElement(int search)
    {
        Node *temp = head;
        bool Found = false;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            while (temp != NULL)
            {
                if (temp->data == search)
                {
                    Found = true;
                }
                temp = temp->next;
            }
        }
        if (Found == true)
        {
            cout << "Element " << search << " Found" << endl;
        }
        else
        {
            cout << "Element not Found";
        }
    }

    // 4- sum
    void sumNode()
    {
        int sum = 0;
        if (head == NULL)
        {
            cout << " Link List is empty " << endl;
        }
        else
        {
            Node *temp;
            temp = head;

            while (temp != NULL)
            {
                sum += temp->data;
                temp = temp->next;
            }
        }
        cout << "Sum of Elements of Nodes are: " << sum << endl;
    }

    // 5- product
    void ProductOfNode()
    {
        if (head == NULL)
        {
            cout << " Link List is empty " << endl;
        }
        Node *temp;
        temp = head;
        int product = 1;
        while (temp != NULL)
        {
            product = product * temp->data;
            temp = temp->next;
        }
        cout << "Product of Nodes are: " << product << endl;
    }

    // 6- frequency
    void FrequencyOfElement(int val)
    {
        Node *temp = head;
        int count = 0;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            while (temp != NULL)
            {
                if (temp->data == val)
                {
                    count++;
                }
                temp = temp->next;
            }
        }
        if (count == 0)
        {
            cout << "Element " << val << " does not exists" << endl;
        }
        else
        {
            cout << "Frequency of element " << val << " is: " << count << endl;
        }
    }

    // 7- negative positve or zero
    void NegPos_Value()
    {
        Node *temp = head;
        int negative = 0, positive = 0, zero = 0;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            while (temp != NULL)
            {
                if (temp->data >= 1)
                {
                    positive++;
                }
                else if (temp->data < 0)
                {
                    negative++;
                }
                else
                {
                    zero++;
                }
                temp = temp->next;
            }
            cout << "Frequency of positive elements are: " << positive << endl;
            cout << "Frequency of negative elements are:" << negative << endl;
            cout << "Frequency of zeros are: " << zero << endl;
        }
    }

    // 8- even odd
    void evenOdd()
    {
        Node *temp;
        temp = head;
        int even = 0;
        int odd = 0;

        while (temp != NULL)
        {
            if (temp->data % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            temp = temp->next;
        }
        cout << "Even count: " << even << endl;
        cout << "Odd count: " << odd << endl;
    }

    // 10- max min
    void maxMinimun()
    {
        Node *temp;
        temp = head;
        int max = INT32_MAX;
        int min = INT32_MIN;
        while (temp != NULL)
        {
            if (temp->data > max)
            {
                max = temp->data;
            }
            else if (temp->data < min)
            {
                min = temp->data;
            }
            temp = temp->next;
        }
        cout << "Max value: " << max << endl;
        cout << "Min value: " << min << endl;
    }

    void findSecondLargest()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {

            int firstMax = head->data;
            int secondMax = INT32_MIN;

            Node *temp = head->next;

            while (temp)
            {
                if (temp->data > firstMax)
                {
                    secondMax = firstMax;
                    firstMax = temp->data;
                }
                else if (temp->data > secondMax && temp->data != firstMax)
                {
                    secondMax = temp->data;
                }
                temp = temp->next;
            }

            cout << secondMax;
        }
    }

    // 11- Delete
    void DeleteNode(int val)
    {
        if (head == NULL)
        {
            cout << "Nothing to Delete. Linked List is Empty";
        }
        else
        {
            // if User wants to Delete First Node
            if (head->data == val)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }
            else // user wants to delete middle or last node
            {
                Node *temp = head->next;
                Node *prev = head;
                while (temp != NULL)
                {
                    if (temp->data == val)
                    {
                        prev->next = temp->next;
                        delete temp;
                        break;
                    }
                    prev = temp;
                    temp = temp->next;
                }
            }
        }
    };
};
int main()
{
    LinkedList l2;
    l2.insertElement(10);
    l2.insertElement(9);
    l2.insertElement(8);
    l2.insertElement(7);
    l2.insertElement(6);
    l2.insertElement(5);
    // l2.insertAtPosition(15, 2);
    // l2.insertAtHead(0);
    l2.displayElement();
    l2.sumNode();
    l2.ProductOfNode();
    l2.FrequencyOfElement(20);
    l2.SearchingElement(10);
    l2.NegPos_Value();
    l2.evenOdd();
    // l2.maxMinimun();
    l2.DeleteNode(5);
    cout << "After deleting node: " << endl;
    l2.displayElement();
    // l2.SortingAcendingOrder();
    cout << "After soritng: " << endl;
    l2.displayElement();
}