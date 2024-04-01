/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        unordered_map<Node*, Node*> nodeMap;
        Node* newHead = new Node(head->val);
        nodeMap[head] = newHead;
        Node* travNode = head->next;
        Node* prevNewNode = newHead;
        while (travNode) {
            Node* newNode = new Node(travNode->val);
            prevNewNode->next = newNode;
            prevNewNode = newNode;
            nodeMap[travNode] = newNode;
            travNode = travNode->next;
        }
        travNode = head;
        Node* copyTravNode = newHead;
        while (travNode) {
            copyTravNode->random = nodeMap[travNode->random];
            travNode = travNode->next;
            copyTravNode = copyTravNode->next;
        }
        return newHead;
    }
};