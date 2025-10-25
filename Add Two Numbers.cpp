// problem link : https://leetcode.com/problems/add-two-numbers/description/

#include <bits/stdc++.h>
#define nll NULL
using namespace std;

//   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

vector<int>s, s2;
string str = "", str2 = "";

class node {
public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = nll;
    }
};

// void print(){
//     node* head = 
// }

class listt{
public:
    int sz;
    node* head;
    node* tail;

    listt()
    {
        sz = 0;
        head = nll;
    }
    
    void inserthead(int value){
        auto Newnode = new node(value);
        if(head == nll){
            head = Newnode;
            tail = Newnode;
            return;
        }
        Newnode->next = head;
        head = Newnode;
    }

    void insert_tail(int value){
        auto Newnode = new node(value);
        if(head == nll){
            head = Newnode;
            tail = Newnode;
            return;
        }
        tail->next = Newnode;
        tail = Newnode;
    }

    void print(){
        auto a = head;
        while (a != nll)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }
};

queue<int>A;

// listt added_new(listt a, listt b){  
//     auto x = a.head;
//     while (x != nll)
//     {
//         // A.push(a.head);
//         A.push(x);
//         x = x->next;
//     }
// }
// class comb{
// public:
// };

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    listt h;

    h.inserthead(7);
    h.inserthead(6);
    h.inserthead(8);
    h.inserthead(6);
    h.inserthead(3);
    h.inserthead(2);
    h.inserthead(9);

    h.print();

    listt j;

    j.insert_tail(5);
    j.insert_tail(4);
    j.insert_tail(55);
    j.insert_tail(53);
    j.insert_tail(7);
    j.inserthead(1);

    j.print();

    // cout << h.head->data << endl;
    // cout << j.head->data << endl;

    auto a = h.head;
    auto b = j.head;

    // s.push_back(h.head->data);

    while (a != nll)
    {
        s.push_back(a->data);
        a = a->next;
    }

    // s2.push_back(j.head->data);

    while (b != nll)
    {
        s2.push_back(b->data);
        b = b->next;
    }

    // cout << s << endl;

    // for(auto val : s){
    //     cout << val << " ";
    //     // str.push_back(val);
    //     str += val;
    // }
    // cout << s2 << endl;

    // cout << endl;

    for(auto val : s2){
        cout << val << " ";
        // str2.push_back(val);
        // str2 += val;
    }

    int num = 0, num2 = 0;

    for (int d : s)
    {
        num = num * 10 + d;
    }

    for (int d : s2)
    {
        num2 = num2 * 10 + d;
    }
    
    cout << num << endl;
    cout << num2 << endl;

    // cout << str << endl;
    // cout << str2 << endl;
    
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {
    // Step 1️⃣: Create nodes

    string s1, s2;

    ListNode* node3 = new ListNode(3);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* node1 = new ListNode(1, node2);

    // Step 2️⃣: Head points to first node
    ListNode* head = node1;

    ListNode* curr = head;

    

    // Step 3️⃣: Print the linked list
    cout << "Linked List: ";
    
    while (curr != nullptr) {
        // cout << curr->val << " ";
        // s1.push_back(curr->val);
        curr = curr->next;
    }
    cout << endl;

    curr = head;

    s1.push_back(head);

    // Step 4️⃣: Free memory (optional but good practice)
    // curr = head;
    // while (curr != nullptr) {
    //     ListNode* temp = curr;
    //     curr = curr->next;
    //     delete temp;
    // }

    auto n1 = new ListNode(8);
    auto n2 = new ListNode(6, n1);
    auto n3 = new ListNode(8, n2);
    auto n4 = new ListNode(9, n3);

    auto nx = n4;

    s2.push_back(nx);

    auto curr2 = nx;

    while (curr2 != nullptr)
    {
        // cout << curr2->val << " ";
        s2.push_back(curr2->val);
        curr2 = curr2->next;
    }

    curr2 = nx;
    while (curr2 != nullptr)
    {
        ListNode* temp = curr2;
        curr2 = curr2->next;
        delete temp;
    }

    cout << s1 <<endl;
    cout << s2 <<endl;
 
    return 0;
}

*/