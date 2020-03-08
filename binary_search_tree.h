//
// Created by Alper Yıldırım on 8.03.2020.
//

#ifndef DOUBLEBST_BINARY_SEARCH_TREE_H
#define DOUBLEBST_BINARY_SEARCH_TREE_H

using namespace std;

class binary_search_tree {
private:
    double * tree;
public:

    binary_search_tree();

    int size;
    void insertElement(double x);
    void searchElement(double x);
    void inOrder(int currentIndex);
    void preOrder(int currentIndex);
    void postOrder(int currentIndex);
    void parent(double x);
    double extendSize(double x);


};

#endif //DOUBLEBST_BINARY_SEARCH_TREE_H
