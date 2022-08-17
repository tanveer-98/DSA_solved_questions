// LEETCODE : 133
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL)
            return NULL;
        vector<Node*> visited(1000, NULL);
        Node * rootnode = new Node(node->val);
        visited[node->val] = rootnode;
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) {
            Node* front = q.front();
            q.pop();
            for (int i = 0; i < front->neighbors.size(); i++)
            {
                if (visited[(front->neighbors[i])->val] == NULL) {
                    // create a new childnode and push into clone parent
                    Node *newchild = new Node(front->neighbors[i]->val);
                    // make child visited and set visited of childvalue to newchlid
                    visited[front->neighbors[i]->val] = newchild;

                    visited[front->val]->neighbors.push_back(newchild);

                    q.push(front->neighbors[i]);
                }
                else {
                    // this case no need to push back to queue
                    // create a new childnode and push to clone parent
                    visited[front->val]->neighbors.push_back(visited[front->neighbors[i]->val]);
                }
            }
        }
        return rootnode;
    }
};