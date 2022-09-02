

/*

Level order traversal in spiral form 

Complete the function to find spiral order traversal of a tree. For below tree, function should return 1, 2, 3, 4, 5, 6, 7.
*/

vector<int> findSpiral(Node *root)
{
     //Your code here
    vector<int> ans;
    stack<Node *> leftS;
    stack<Node *> rightS;
    bool right=1;
    if(root==NULL){
        return ans;
    }
    leftS.push(root);
    while((!leftS.empty())||(!rightS.empty())){
        while(!leftS.empty()&&right){
            Node * node = leftS.top();
            if(node->right!=NULL){
                rightS.push(node->right);
            }
            if(node->left!=NULL){
                rightS.push(node->left);
            }
            ans.push_back(node->data);
            leftS.pop();
        }
        right=0;
        
        while(!rightS.empty()&&(!right)){
            Node * node = rightS.top();
            if(node->left!=NULL){
                leftS.push(node->left);
            }
            if(node->right!=NULL){
                leftS.push(node->right);
            }
            ans.push_back(node->data);
            rightS.pop();
        }
        right=1;
        
    }
}