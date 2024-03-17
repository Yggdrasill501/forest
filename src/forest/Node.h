//
// Created by Filip Žitný on 17/03/2024.
//
#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node{
private:
    Data data;
    Node *next[];

public:
    Node(Data  key, Node *left, Node *right);
    Node(Data key);
    void set(Data key, Node *left, Node *right);
    void setData(Data key);
    void setLeft(Node *left);
    void setRight(Node *right);
    Data getData();
    Node *getLeft();
    Node getRight();
};

#endif //NODE_H
