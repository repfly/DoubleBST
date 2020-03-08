//
// Created by Alper Yıldırım on 8.03.2020.
//

#ifndef DOUBLEBST_BINARY_SEARCH_TREE_H
#define DOUBLEBST_BINARY_SEARCH_TREE_H

using namespace std;

class binary_search_tree {
private:
    static double * tree;
public:

    binary_search_tree();

    int size;
    static void insertElement(double x);
    static void searchElement(double x);
    static void inOrder(int currentIndex);
    void preOrder(int currentIndex);
    void postOrder(int currentIndex);
    void parent(double x);
    double extendSize(double x);


};

#endif //DOUBLEBST_BINARY_SEARCH_TREE_H
