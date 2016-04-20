#include "listnode.h"

Node::Node(int data, Node *next) {
    this->data = data;
    this->next = next;
}

ListNode::ListNode(int ignore) {
    head = cursor = NULL;
}

ListNode::ListNode(const ListNode &toCopy) {

}

ListNode::~ListNode() {

}

bool ListNode::insertAfter(int data) {
    if (!isFull()) {
        if (isEmpty()) {
            head = cursor = new Node(data, NULL);
        } else {
            Node *tmp = new Node(data, NULL); // Create new node
            if (cursor->next == NULL) { // at the end
                cursor->next = tmp; // Point (node at cursor)'s next to it
                cursor = tmp; // Set cursor to the the new node;
                tmp = NULL; // Remove the tmp node pointer;
            } else { // not at the end
                tmp->next = cursor->next; // attach this to what the one after the cursor
                cursor->next = tmp; // point next of cursor to this new node
                cursor = tmp; // Set cursor to the the new node;
                tmp = NULL; // Remove the tmp node pointer;
            }
        }
        return true;
    } else {
        return false;
    }
}

bool ListNode::insertBefore(int data) {
    if (!isFull()) {
        if (isEmpty()) {
            head = cursor = new Node(data, NULL);
        } else {
            if (cursor == head) { // at first node
                cursor = head = new Node(data, head);
            } else {
                Node *tmp = new Node(cursor->data, cursor->next); // Create copy of node at cursor
                cursor->next = tmp;
                cursor->data = data;
                tmp = NULL; // Remove the tmp node pointer;
            }
        }
        return true;
    } else {
        return false;
    }
}

bool ListNode::get(int &current) const {
    if (!isEmpty()) {
        current = cursor->data;
        return true;
    } else {
        return false;
    }
}

bool ListNode::remove(int &removed) {
    if (!isEmpty()) {
        // add case for the first node
        Node *tmp = cursor; // leave tmp node pointer at cursor
        goToPrior();
        cursor->next = tmp->next; // link cursor to next one
        tmp = NULL;
        return true;
    } else {
        return false;
    }
}

bool ListNode::goToNext() {
    if (!isEmpty()) {
        if (cursor->next != NULL) { // as long as its not at the end
            cursor = cursor->next;
            return true;
        } else {
            return false; // as nancy said
        }
    } else {
        return false;
    }
}

bool ListNode::goToPrior() {
    if (!isEmpty()) {
        if (cursor != head) { // not at first node
            Node *traverser = head;
            while(traverser->next != cursor) {
                traverser = traverser->next;
            }
            cursor = traverser;
            traverser = NULL;
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool ListNode::isEmpty() const {
    return (head == NULL);
}

bool ListNode::isFull() const {
    return false;
}



ostream& operator << (ostream &fin, const ListNode &toPrint) {
    Node *traverser = toPrint.head;
    while(traverser) {
        if (traverser == toPrint.cursor) {
            fin << "[" << traverser->data << "] ";
        } else {
            fin << "|" << traverser->data << "| ";
        }
        traverser = traverser->next;
    }
    traverser = NULL;

    return fin;
}
