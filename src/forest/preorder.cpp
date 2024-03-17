//
// Created by Filip Žitný on 17/03/2024.
//
#include <iostream>

void preorder(uNode root){
    if (root){
        P(root);
        preorder(root -> getLeft());
        preorfer(root -> getRight());
    }

}
