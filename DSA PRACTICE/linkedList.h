
class LinkedList;

class Node
{
    int data;

public:
    Node *next;

    friend class LinkedList;

    int getData()
    {
        return data;
    }

    Node(int data) : data(d), next(NULL) {}

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "Deleting Node with Data" << data << endl;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;
    int searchHelper(Node *start, int key)
    {
        // base case
        if (start == NULL)
        {
            return -1;
        }

        // value matches
        if (start->data == key)
        {
            return 0;
        }
        // remaining part of the Linked List
        int idx = searchHelper(start->next, key);
        if (idx == -1)
        {
            return -1;
        }
        return idx + 1;

        // Here we are shorting the Linked List by constantly iterating the Loop to the next element from head until we got he key or
        // the Linked List is finished ;
    }

public:
    List() : head(NULL), tail(NULL) {}

    Node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = n = tail;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
            [Node *n = new Node(data);
                head = tail = n;
            ] else
            {
                Node *n = new Node(data);
                tail->next = n;
                tail = n;
            }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        // otherwiwse
        Node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    // Recursive Search
    int recursiveSearch(int key)
    {
        // Make private helper Method
        int idx = searchHelper(head, key);
        return idx;
    }

    ~LinkedList()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *n = head;
        // Loop to get the pen - ultimate element in the Linked List
        while (n->next != tail)
        {
            n = n->next;
        }

        Node *New = tail;
        tail = n;
        tail->next = NULL;
        delete New;
    }

    void remove(pos)
    {
        Node *temp = head;
        for (int jump = 1; jump <= pos - 2; jump++)
        {
            temp = temp->next;
        }
        Node *n = temp->next;
        temp->next = n->next;
        n->next = NULL;
        delete n;
    }

    // Function to reverse the Linked List
    void reverse(Node *head)
    {
        Node *C = head;
        Node *P = NULL;
        Node *N;

        while (C != NULL)
        {
            N = C->next; // Save the next Node
            C->next = P; // Make Current Point Previous
            P = C;       // Make previous point current
            C = N;       // update P & C take them / 1 step Forward
        }
        head = P;
    }
};