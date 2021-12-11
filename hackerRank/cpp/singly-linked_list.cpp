#include <iostream>

using namespace std;


struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;  // Calling struct Node here also define pointer of same data type
        tmp->data = n; // arrow operator assign value to val from " struct Node "
        tmp->next = NULL;

        // If list is empty
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        // If there is an element in list
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}