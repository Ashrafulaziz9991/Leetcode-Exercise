// problem link : https://leetcode.com/problems/add-two-numbers/description/


/*
#include <bits/stdc++.h>
#define nll NULL
using namespace std;

vector<int>s, s2, s3;
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

    // void inserthead(int value){
    //     auto Newnode = new node(value);
    //     if(head == nll){
    //         head = Newnode;
    //         tail = Newnode;
    //         return;
    //     }
    //     tail->next = Newnode;
    //     tail = Newnode;
    // }

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

    listt h, k;

    //  l1 = [2,4,3], l2 = [5,6,4]
    h.inserthead(3);
    h.inserthead(4);
    h.inserthead(2);

    h.print();

    listt j;

    j.inserthead(4);
    j.inserthead(6);
    j.inserthead(5);

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

    reverse(s.begin(), s.end());
    reverse(s2.begin(), s2.end());

    for(auto val : s2){
        cout << val << " ";
    }

    int num = 0, num2 = 0;

    // convert vector to integer
    for (int d : s)
        num = num * 10 + d;

    for (int d : s2)
        num2 = num2 * 10 + d;

    cout << num << endl;
    cout << num2 << endl;
    int num3 = num + num2;
    cout << num3 << endl;
    while (num3 > 0)
    {
        int temp = num3 % 10;
        s3.push_back(temp);
        num3 /= 10;
    }

    for(int i : s3) cout << i <<" ";

    reverse(s.begin(), s.end());

    cout << endl;
    for(int i : s3)
        k.inserthead(i);

    k.print();
    
    return 0;
}
*/


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

    vector<int> v1, v2, v3;

    ListNode* node3 = new ListNode(3);
    ListNode* node2 = new ListNode(4, node3);
    ListNode* node1 = new ListNode(2, node2);

    // Step 2️⃣: Head points to first node
    ListNode* head = node1;

    ListNode* curr = head;

    

    // Step 3️⃣: Print the linked list
    cout << "Linked List: 1 :";
    
    while (curr != nullptr) {
        v1.push_back(curr->val);
        curr = curr->next;
    }
    cout << endl;

    auto n1 = new ListNode(4);
    auto n2 = new ListNode(6, n1);
    auto n4 = new ListNode(5, n2);

    auto head2 = n4;
    auto curr2 = head2;

    while (curr2 != nullptr)
    {
        v2.push_back(curr2->val);
        curr2 = curr2->next;
    }

    curr2 = head2;
    while (curr2 != nullptr)
    {
        ListNode* temp = curr2;
        curr2 = curr2->next;
        delete temp;
    }

    for(int i : v1)cout << i <<" ";

    cout << endl << "Linked List: 2 :" << endl;
    for(int i : v2)cout << i <<" ";

    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());

    int num = 0, num2 = 0;

    for(int d : v1) num = num * 10 + d;
    for(int d : v2) num2 = num2 * 10 + d;

    cout << num <<endl;
    cout << num2 <<endl;

    int num3 = num + num2;

    while (num3 > 0)
    {
        int temp = num3 % 10;
        v3.push_back(temp);
        num3 /= 10;
    }
    
    for(int i : v3) cout<< i << " ";

    // if(v3.empty()) return 0;

    ListNode* head3 = new ListNode(v3[0]);
    ListNode* curr3 = head3;
    for(int i = 1; i < v3.size(); i++){
        curr3->next = new ListNode(v3[i]);
        curr3 = curr3->next;
    }

    ListNode *temp = head3;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

 
    return 0;
}