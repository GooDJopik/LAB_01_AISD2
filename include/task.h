#ifndef LAB1_INCLUDE_TASK_H
#define LAB1_INCLUDE_TASK_H

#include "../include/tree.h"


Tree union_Tree(const Tree& Tree1, const Tree& Tree2) {
    Tree result = Tree1;

    for (size_t i = 0; i < Tree2.size(); ++i) {
        result.insert(Tree2.get_index(i));
    }

    return result;
}

Tree symmetric_difference(const Tree& Tree1, const Tree& Tree2) {
    Tree result;

    for (size_t i = 0; i < Tree1.size(); ++i) {
        int key = Tree1.get_index(i);
        if (!Tree2.contains(key)) {
            result.insert(key);
        }
    }

    for (size_t i = 0; i < Tree2.size(); ++i) {
        int key = Tree2.get_index(i);
        if (!Tree1.contains(key)) {
            result.insert(key);
        }
    }

    return result;
}


#endif