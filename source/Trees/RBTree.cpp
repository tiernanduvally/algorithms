#include "RBTree.hpp";

RBTree::~RBTree() {
  clear();
}
/** insert(int data)
 * Inserts the given data into the tree.
 * Does nothing if the data is already in the tree.
 */

Node* RBTree::insert(int data, Node* n) {
  Node* temp = new Node(data);
  if (!n) {
    return temp;
  } else if (data < n->data) {
    n->left = insert(data, n->left);
    if(n->color = 1 && !n->color){
        temp = rotateLeft(n);
        flipColors(n);
    }
  } else if (data > n->data) {
    n->right = insert(data, n->right);
  } 
  return n;
}
void RBTree::insert(int data) {
  root = insert(data, root);
}

Node* RBTree::rotateRight(Node* node) {
  Node* temp = node->right;
  temp->right = node;
  node->left = temp;
}
Node* RBTree::rotateLeft(Node* node) {
  Node* temp = node->left;
  temp->left = node;
  node->right = temp;
}
void RBTree::flipColors(Node* node) {
  node->color = 1;
  node->right->color = 0;
  node->left->color = 0;
}

void RBTree::clear(Node* n) {
  if (!n) {
    clear(n->left);
    clear(n->right);
    delete n;
  }
}

/** preorder()
 * Recursively prints the contents of the subtree rooted at n to the
 * ostream using a pre-order traversal.
 */

bool RBTree::search(int data, Node* n) {
  return 0;
}

/** remove(int data, Node* n)
 * Recursively searches for data in the subtree rooted at n, removing it
 * if it exists and preserving the BST properties.
 * Returns...
 *   nullptr if data was not found or n was a leaf.
 *   the pointer to the child if n has only one child.
 *   the pointer to the right child (successor) if n has two children.
 */
Node* RBTree::remove(int data, Node* n) {

}

void RBTree::preorder(Node* n, std::ostream& oss) {
  preorder(n, oss);
  oss << '\n';
}

/** inorder()
 * Recursively prints the contents of the subtree rooted at n to the
 * ostream using an in-order traversal.
 */
void RBTree::inorder(Node* n, std::ostream& oss) {
  inorder(n, oss);
  oss << '\n';
}

/** postorder()
 * Recursively prints the contents of the subtree rooted at n to the
 * ostream using a post-order traversal.
 */
void RBTree::postorder(Node* n, std::ostream& oss) {
  postorder(n, oss);
  oss << '\n';
}

/** is_empty()
 * Returns true if the tree is empty and false otherwise
 */
bool RBTree::is_empty() {
  return !root;
}

/** search(int data)
 * Searches the tree for the given data, returning true if the data
 * is found and false otherwise.
 */
bool RBTree::search(int data) {
  return 0;
}

/** remove(int data)
 * Removes the given data from the tree, provided it exists.
 */
void RBTree::remove(int data) {}

/** height()
 * Determines and returns the height of the tree.
 * Returns -1 if the tree is empty.
 */
int RBTree::height() {
  return 0;
}

/** clear()
 * Removes every element from the tree.
 */

void RBTree::clear() {}

/** preorder()
 * Prints the contents of the tree to the ostream using a pre-order
 * traversal.
 */
void RBTree::preorder(std::ostream& oss) {
  preorder(root, oss);
  oss << '\n';
}

/** inorder()
 * Prints the contents of the tree to the ostream using an in-order
 * traversal.
 */
void RBTree::inorder(std::ostream& oss) {
  inorder(root, oss);
  oss << '\n';
}

/** postorder()
 * Prints the contents of the tree to the ostream using a post-order
 * traversal.
 */
void RBTree::postorder(std::ostream& oss) {
  postorder(root, oss);
  oss << '\n';
}

void RBTree::deleteMax() {}

void RBTree::deleteMin() {}
