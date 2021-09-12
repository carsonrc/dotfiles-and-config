int height(BTNode* node) const {
    if (node == NULL) {
        return 0;
    } else {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
        {
            return(lheight);
        }
        else {
            return(rheight);
        }
    }
}

std::string printCurrentLevel(BTNode* localRoot, int level) const {
    if (localRoot == NULL) {
        return "Empty!";
    } else if (level == 0) {
        std::string holder;
        holder = localRoot->data;
        return holder + " ";
    } else if (level > 0) {
        printCurrentLevel(localRoot->left, level-1);
        printCurrentLevel(localRoot->right, level-1);
    }
}