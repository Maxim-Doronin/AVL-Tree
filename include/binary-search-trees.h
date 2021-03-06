#ifndef BINARY_SEARCH_TREES_H
#define BINARY_SEARCH_TREES_H

class Node {
public:
    float key;
    Node* left;
    Node* right;
    Node* parent;
    void* data;
};

class BinarySearchTree {
protected:
    Node* root;

public:
    BinarySearchTree();
    virtual ~BinarySearchTree();

    Node* searchMin(Node* const node = 0) const;
    Node* searchMax(Node* const node = 0) const;
    Node* searchPrev(Node* const node) const;
    Node* searchNext(Node* const node) const;
    Node* search(const float key) const;

    virtual int insert(Node*& node);
    virtual int insert(const float key);
    virtual int remove(const float key);
    virtual Node* pull(const float key);

    const int isEmpty() const;
    const int size() const;

protected:
    void recursiveDel(Node* node); //for destructor
    int recursiveSize(const Node* const node) const; //for size()
};

#endif //BINARY_SEARCH_TREES_H
