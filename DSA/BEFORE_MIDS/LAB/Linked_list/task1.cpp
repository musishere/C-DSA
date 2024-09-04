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

    void insert(int val)
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

    void displayNode()
    {
        if (head == NULL)
        {
            cout << "link list is empty " << endl;
        }
        else
        {
            Node *temp;
            temp = head;
            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

    void searchingData(int x)
    {
        Node *temp;
        temp = head;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == x)
            {
                found = true;
            }
            temp = temp->next;
        }
        if (found == true)
        {
            cout << "Number " << x << " available" << endl;
        }
        else
        {
            cout << x << " not availble " << endl;
        }
    }

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
        cout << "Sum of nodes: " << sum << endl;
    }

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

    void FrequencyOfElements(int val)
    {
        Node *temp;
        temp = head;
        int count = 0;
        if (head == NULL)
        {
            cout << " Link List is empty " << endl;
        }
        while (temp != NULL)
        {
            if (val == temp->data)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "Number " << val << " does not exists" << endl;
        }
        else
        {

            cout << "Frequency of element is: " << count << endl;
        }
    }

    void negPostivieElements()
    {
        Node *temp;
        temp = head;
        int positive = 0;
        int negative = 0;
        int zero = 0;
        while (temp != NULL)
        {
            if (temp->data > 1)
            {
                positive++;
            }
            else if (temp->data < 1)
            {
                negative++;
            }
            else
            {
                zero++;
            }
        }
        cout << "Positive values are: " << positive << endl;
        cout << "Negative values are: " << negative << endl;
        cout << "Number of zeros are: " << zero << endl;
    }

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
        }
        cout << "Even count: " << endl;
        cout << "Odd Count" << endl;
    }

    void maxMinimun()
    {
        Node *temp;
        temp = head;
        int max = INT32_MAX;
        int min = INT32_MAX;
        while (temp != NULL)
        {
            if (temp->data > max)
            {
                max = temp->data;
            }
            if (temp->data < min)
            {
                min = temp->data;
            }
            temp = temp->next;
        }
        cout << "Max value: " << max << endl;
        cout << "Min value: " << min << endl;
    }

    void deleteNode(int n)
    {
        if (head == NULL)
        {
            cout << "Linked List is empty. Nothing to delete";
        }
        else
        {
            // if user wants to delete first node.
            if (head->data == n)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }
            else
            {
                Node *temp = head->next;
                Node *prev = head;
                while (temp != NULL)
                {
                    if (temp->data == n)
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
    }
};
int main()
{
    LinkedList l1;
    l1.insert(5);
    l1.insert(6);
    l1.insert(7);
    l1.insert(8);
    l1.insert(9);
    l1.insert(10);
    l1.sumNode();
    l1.FrequencyOfElements(5);
    l1.searchingData(5);
    l1.ProductOfNode();
    l1.negPostivieElements();
    l1.evenOdd();
    l1.maxMinimun();
    l1.deleteNode(6);
    l1.displayNode();
}