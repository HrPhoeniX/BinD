Inorder - Recursion

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder;
    Travers(root, inorder);
    return inorder;
}
    
void Travers(TreeNode* root, vector<int> &inorder){
    if(root==nullptr)
        return;
    Travers(root->left, inorder);
    inorder.push_back(root->val);
    Travers(root->right, inorder);
}

Inorder - Stack

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder;
    stack<TreeNode*> s;
    TreeNode* curr = root;
    while(curr != nullptr || !s.empty()){
        while(curr != nullptr){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        inorder.push_back(curr->val);
        curr = curr->right;
    }
    return inorder;
}

Inorder - Morris Travers

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder;
    TreeNode* curr = root;
    TreeNode* pre;
    while(curr != nullptr){
        if(curr->left == nullptr){
            inorder.push_back(curr->val);
            curr = curr->right;
        }else{
            pre = curr->left;
            while(pre->right != nullptr){
                pre = pre->right;
            }
            pre->right = curr;
            TreeNode* temp = curr;
            curr = curr->left;
            temp->left = nullptr;
        }
    }
    return inorder;
}