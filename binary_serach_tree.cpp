//
// Created by Alper Yıldırım on 8.03.2020.
//
#include "binary_search_tree.h"
#include <iostream>
#include "stdio.h"

binary_search_tree::binary_search_tree() {
    this -> size = extendSize(size);
    //cout << this -> size << endl;
    this -> tree = new double[this -> size];
    for(int x = 0; x < this -> size; x++){
        tree[x] = NULL;
    }
}

double binary_search_tree::extendSize(double x) {
    int value = 0;
    for(int y = 0; y < x + 1; y++) {
        value = (2 * value) + 2;
    }
    return value;
}

void binary_search_tree::insertElement(double x) {
    int currentIndex = 0;
    cout << "Adding: " << x;
    while(true) {
        if(tree[currentIndex] == NULL){
            tree[currentIndex] = x;
            cout << " Inserted at index: " << currentIndex << endl;
            break;
        }else if(tree[currentIndex] <= x) {
            if(tree[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
                cout << " Right ";
            currentIndex = (2 * currentIndex + 2);
        }else if(tree[currentIndex] >= x) {
            if(tree[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
                cout << " Left ";
            currentIndex = (2 * currentIndex + 1);
        }
    }
}

void binary_search_tree::searchElement(double x) {
    int currentIndex = 0;
    while (true) {
        if (tree[currentIndex] == NULL) {
            cout << "Not Found" << endl;
            break;
        }
        if (tree[currentIndex] == x) {
            cout << "Found at index: " << currentIndex << endl;
            break;
        }
        else if(tree[currentIndex] < x) {
            currentIndex = (2 * currentIndex + 2);
        }
        else if(tree[currentIndex] > x) {
            currentIndex = (2 * currentIndex + 1);
        }
    }
}

void binary_search_tree::parent(double x) {
    while (x != 0) {
        x = (x-1) / 2;
        cout << "---";
    }
}

void binary_search_tree::inOrder(int currentIndex) {
    if(tree[currentIndex] != NULL) {
        inOrder(2 * currentIndex + 1);
        parent(currentIndex);
        cout << tree[currentIndex] << endl;
        inOrder(2 * currentIndex + 2);
    }
}

void binary_search_tree::postOrder(int currentIndex) {
    if(tree[currentIndex] != NULL){
        postOrder(2 * currentIndex + 1);
        postOrder(2 * currentIndex + 2);
        parent(currentIndex);
        cout << tree[currentIndex] << " " << endl;
    }
}

void binary_search_tree::preOrder(int currentIndex) {
    if(tree[currentIndex] != NULL) {
        preOrder(2 * currentIndex + 1);
        parent(currentIndex);
        cout << tree[currentIndex] << " " << endl;
        preOrder(2 * currentIndex + 2);
    }
}}