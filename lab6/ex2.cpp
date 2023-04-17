#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node *next;

    Node(char c) : data(c), next(nullptr) {}
};

Node *createList(std::string letters)
{
    Node *head = nullptr;
    Node *tail = nullptr;

    for (char c : letters)
    {
        Node *newNode = new Node(c);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void insertNode(Node *&head, char c, int pos)
{
    Node *newNode = new Node(c);

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *prev = nullptr;
        Node *curr = head;
        int i = 0;
        while (curr != nullptr && i < pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = newNode;
        newNode->next = curr;
    }
}

void insertNodeAtEnd(Node *&head, char c)
{
    Node *newNode = new Node(c);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void removeNode(Node *&head, int pos)
{
    if (head == nullptr)
    {
        return;
    }

    Node *nodeToRemove = nullptr;

    if (pos == 0)
    {
        nodeToRemove = head;
        head = head->next;
    }
    else
    {
        Node *prev = nullptr;
        Node *curr = head;
        int i = 0;
        while (curr != nullptr && i < pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr != nullptr)
        {
            nodeToRemove = curr;
            prev->next = curr->next;
        }
    }

    if (nodeToRemove != nullptr)
    {
        delete nodeToRemove;
    }
}

void removeNode(Node *&head, char value)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr && curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        return;
    }
    if (prev == nullptr)
    {
        head = curr->next;
    }
    else
    {
        prev->next = curr->next;
    }
    delete curr;
}

void replaceNode(Node *head, char oldValue, char newValue)
{
    Node *curr = head;
    while (curr != nullptr && curr->data != oldValue)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        return;
    }
    curr->data = newValue;
}

void reverseList(Node **head)
{
    Node *prev = nullptr;
    Node *curr = *head;
    while (curr != nullptr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void displayList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void deleteList(Node **head)
{
    Node *curr = *head;
    while (curr != nullptr)
    {
        Node *next = curr->next;
        delete curr;
        curr = next;
    }
    *head = nullptr;
}

int main()
{
    // Create a linked list representing the first 10 letters of the alphabet
    Node *head = createList("abcdefghij");
    displayList(head);

    // Expand the list by adding 3 more random letters
    insertNodeAtEnd(head, 'k');
    insertNodeAtEnd(head, 'l');
    insertNodeAtEnd(head, 'm');
    displayList(head);

    // Remove 2 of the letters from the middle of the list
    removeNode(head, 'e');
    removeNode(head, 'f');
    displayList(head);

    // Replace 3 of the letters with their capitalized versions
    replaceNode(head, 'c', 'C');
    replaceNode(head, 'h', 'H');
    replaceNode(head, 'm', 'M');
    displayList(head);

    // Reverse the list
    reverseList(&head);
    displayList(head);

    // Clean up memory by deleting all nodes
    deleteList(&head);

    return 0;
}
