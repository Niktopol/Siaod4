#ifndef TREE
#define TREE
#include <cmath>
class tree{
    struct tree_item{
        tree_item* left;
        tree_item* right;
        double value;
        tree_item(double);
    };
    
    int height;
    int records;
    tree_item* root;
    public:
    void add_item(double);
    tree();
    tree(double*, int);
};
#endif