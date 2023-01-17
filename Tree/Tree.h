
#include <iostream>

#ifndef TREECPP_TREE_H
#define TREECPP_TREE_H

using  namespace std;
template<class T>
struct Noeud{
    T val;
    struct Noeud *left;
    struct Noeud *right;
     Noeud(T val1){
        val=val1;
        left= NULL;
        right=NULL;
    }
};
template<class T>
class Tree {
public:
    Noeud<T>* root;
    Tree(){
        root= NULL;
    };
    Noeud<T>* insert(Noeud<T>* root,T data);
    long double calculer_Fib(long double key,Noeud<T>* root);
    bool cleeexist(long double key,Noeud<T>* root);
};


#endif //TREECPP_TREE_H