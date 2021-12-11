//Singly Linked list with all the Crud operations
#include <iostream>
using namespace std;

// Define Node
struct node
{
    int data;
    struct node *next;
};

//LinkedList
class Singly_Linked
{
private:
    //create a head pointer
    node *head;
    

public:
    // Default constructor
    Singly_Linked()
    {
        head = NULL;
    }

    //Creation of LinkedList
    void insertion(int val)
    {
        // Creating new node
        node *new_node = new node;
        //Or create it using
        // new_node = (struct node*)malloc(sizeof(struct node));
        
        //assigning values to newly created node
        new_node->data = val;
        new_node->next = NULL;


        // check if node is empty and if it is assign it to newly created node.
        if (head == NULL)
        {
            head = new_node;
        }
        // if it doesnot point to next element
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty." << endl;
        }
        else
        {
            struct node *temp = NULL;
            temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Singly_Linked list;
    list.insertion(5);
    list.insertion(50);
    list.insertion(500);
    list.insertion(5000);
    list.display();
    return 0;
}