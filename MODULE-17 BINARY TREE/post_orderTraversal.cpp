#include <bits/stdc++.h>
using namespace std;
class b_node
{
public:
    int val;
    b_node* left;
    b_node* right;
    b_node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

b_node* input_tree()
{
    int val;
    cin >> val;
    b_node* root;
    if (val == -1)
        root = NULL;
    else
        root = new b_node(val);
    queue<b_node*> q;
    if (root) q.push(root);
    while (!q.empty())
    {
        b_node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        b_node* newLeft;
        b_node* newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new b_node(l);
        if (r == -1)
            newRight = NULL;
        else
            newRight = new b_node(r);
        p->left = newLeft;
        p->right = newRight;
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

int sumOfChildNodes(b_node* root)
{
    if (root == NULL)
        return 0;
    return (root->left ? root->left->val : 0) + (root->right ? root->right->val : 0);
}

void checkRootValueAndSum(b_node* root)
{
    if (root == NULL)
    {
        cout << "Same" << endl;
        return;
    }

    int sum = sumOfChildNodes(root);
    if (root->val == sum)
        cout << "Same" << endl;
    else
        cout << "Not same" << endl;
}

int main()
{
    b_node* root = input_tree();
    checkRootValueAndSum(root);

    return 0;
}
