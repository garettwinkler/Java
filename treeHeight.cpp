// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
#include <queue>

int solution(tree * root) {

    //  RECURSIVE (counts nodes as height tho)
    //
    // if (T == NULL) {
    //     return 0;    
    // }
    // else {
    //     return 1 + max(solution(T->l), solution(T->r)); 
    // }
    
    //
    
    //  ITERATIVE
    //
    // Base Case
    if (root == NULL)
        return 0;
 
    // Create an empty queue for level order tarversal
    queue<tree *> nodeQ;
 
    // Enqueue Root and initialize height
    nodeQ.push(root);
    int height = 0;
 
    while (1)
    {
        // nodeCount (queue size) indicates number of nodes
        // at current lelvel.
        int nodeCount = nodeQ.size();
        if (nodeCount == 0)
            return height-1;    //minus 1 b/c is counting # of nodes. 1-2-3 is actually just 2 not 3
 
        height++;
 
        // Dequeue all nodes of current level and Enqueue all
        // nodes of next level
        while (nodeCount > 0)
        {
            tree *currentTree = nodeQ.front();
            nodeQ.pop();
            if (currentTree->l != NULL)
                nodeQ.push(currentTree->l);
            if (currentTree->r != NULL)
                nodeQ.push(currentTree->r);
            nodeCount--;
        }
    }
 
}
