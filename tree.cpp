#include "tree.h"
tree::tree_item::tree_item(double value){
    this->left = nullptr;
    this->right = nullptr;
    this->value = value;
};
void tree::add_item(double value){
    int next_rec = records -1;
    tree_item* cur = root;
    if (next_rec < 0){
        root = new tree_item(value);
    }else{
        for()
    }
    records += 1;
}
tree::tree(){
    root = nullptr;
    height = 0;
    records = 0;
};
tree::tree(double* arr, int size){
    root = new tree_item(arr[0]);
    height = 1;
    records = 1;
    for (int i = 0; i < size-1; i++){
        add_item(arr[i+1]);
    }
}