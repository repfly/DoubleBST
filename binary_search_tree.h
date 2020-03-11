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
    static void preOrder(int currentIndex);
    static void postOrder(int currentIndex);
    static void parent(double x);
    static double extendSize(double x);

};

#endif //DOUBLEBST_BINARY_SEARCH_TREE_H
