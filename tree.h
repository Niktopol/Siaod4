#ifndef TREE
#define TREE
#include <cmath>
#include <iostream>
#include <queue>

class tree{
    struct tree_item{
        tree_item* left;
        tree_item* right;
        double value;
        void branch_sum(double&, int&);
        int count_elements(double);
        tree_item(double);
        ~tree_item();
    };
    int records;
    tree_item* root;
    public:
    void print_brach_mean();
    int count_elements(double);
    void add_item(double);
    tree();
    ~tree();
};
#endif