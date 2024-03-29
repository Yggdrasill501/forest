//
// Created by Filip Žitný on 17/03/2024.
//
#include "BinaryTree.h"

BinaryTree::BinaryTree(){
    root = nullptr;
}

BinaryTree::~BinaryTree(){
    empty();
}

bool BinaryTree::empty(){
    return root == nullptr;
}

void BinaryTree::clear(){
    popSubTree(root);
}

void BinaryTree::popSubTree(uNode rootSubTree){
    if (rootSubTree){
        popSubTree(rootSubTree -> getRight());
        popSubTree(rootSubTree -> getLeft());
        delete rootSubTree;
    }
}


