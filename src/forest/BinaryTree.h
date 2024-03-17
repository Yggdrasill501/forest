//
// Created by Filip Žitný on 17/03/2024.
//
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

clas BinaryTree{
private:
    uNode root;
    void appendSubTree(Data key, uNode rootSubTree);
    uNode search(Data key, uNode &ancesstor, uNode rootSubTree);
    void popLeave(uNode this, uNode ancesstor);
    void popSingle(uNode this, uNode ancesstor);
    void popCouple(uNode this, uNode ancesstor);
    void popSubTree(uNode rootSubTree);
public:
    BinaryTree();
    ~BinaryTree();
    bool empty();
    void append(Data key);
    void clear();
    uNode search(Data key, uNode &ancesstor);
    void pop(Data key);
};

#endif // BINARYTREE_H
