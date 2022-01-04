cmake_minimum_required(VERSION 3.19)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(data_structure
        link_list/link_list.cpp
        link_list/link_list.h
        main.cpp tree/AVL/avl_tree.cpp tree/AVL/avl_tree.h tree/BST/bst_tree.cpp tree/BST/bst_tree.h tree/Red-black_tree/rb_tree.cpp tree/Red-black_tree/rb_tree.h)
