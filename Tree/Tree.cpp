

#include "Tree.h"

using namespace std;
template<typename T>
Noeud<T>* Tree<T>::insert(Noeud<T>* root,T val) {

    if (root==NULL) {
        root=new Noeud<T>(val);

    }else if(val>root->val)
        root->right=insert(root->right,val);
    else
        root->left=insert(root->left,val);
    return root;
}

template<typename T>
long double Tree<T>::calculer_Fib(long double key,Noeud<T>* root){
    if (root)
    {
        if (root->val.first>key)
            return  calculer_Fib(key,root->left);
        else if(root->val.first<key)
            return calculer_Fib(key,root->right);
        else
            return root->val.second;
    }
    return -1;

}
template<typename T>
bool Tree<T>::cleeexist(long double key,Noeud<T>* root){
    if (root)
    {
        if (root->val.first>key)
            return  cleeexist(key,root->left);
        else if(root->val.first<key)
            return cleeexist(key,root->right);
        else
            return true;
    }
    return false;
}
template<typename T>
long double  fibonnachi(long double value,Tree<T> *tree){
    if(tree->cleeexist(value,tree->root))
        return tree->calculer_Fib(value,tree->root);
    if(value==0) {
        return  0;
    }
    if(value==1) {
        return  1;
    }
    tree->root=tree->insert(tree->root,make_pair(value,fibonnachi(value-1,tree)+fibonnachi(value-2,tree)));
    return tree->calculer_Fib(value,tree->root);
}