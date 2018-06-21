#include <cstdio>
#include "TreeNode.h"
#include "94.h"
#include "100.h"
#include "101.h"

int main(int argc, char **argv) {
    TreeNode t1(1);
    t1.left = new TreeNode(2);
    t1.right = new TreeNode(3);

    TreeNode t2(1);
    t2.left = new TreeNode(2);
    t2.right = new TreeNode(3);

    TreeNode t3(2);
    t2.left = new TreeNode(3);
    t2.right = new TreeNode(3);

    printf("94. inorderTraversal\n");
    vector<int> result = inorderTraversal(&t1);
    printf("%d\n", result.size() == 3 && result[0] == 2 && result[1] == 1 && result[2] == 3);

    printf("100. isSameTree\n");
    printf("%d\n", isSameTree(&t1, &t2) == 0);
    printf("%d\n", isSameTree(&t1, &t3) == 0);

    printf("101. isSymmetric\n");
    printf("%d\n", isSymmetric(&t1) == 0);
    printf("%d\n", isSymmetric(&t3) == 1);

    return 0;
}