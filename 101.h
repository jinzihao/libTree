bool isMirror(TreeNode *left, TreeNode *right) {
    if (!left && !right) {
        return true;
    }
    else if (left && right) {
        return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
    else {
        return false;
    }
}

bool isSymmetric(TreeNode* root) {
    if (!root) {
        return true;
    }
    else {
        return isMirror(root->left, root->right);
    }
}