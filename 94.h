#include <vector>
using namespace std;

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    if (root) {
        vector<int> temp = inorderTraversal(root->left);
        result.insert(result.end(), temp.begin(), temp.end());
        result.push_back(root->val);
        temp = inorderTraversal(root->right);
        result.insert(result.end(), temp.begin(), temp.end());
    }
    return result;
}