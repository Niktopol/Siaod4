#include <iostream>
#include "tree.h"

int main(){
    tree tr;
    
    for(int i = 1; i < 16; i++){
        tr.add_item(i);
    }
    tr.print_brach_mean();
    std::cout << tr.count_elements(3) << std::endl;
    return 0;
}