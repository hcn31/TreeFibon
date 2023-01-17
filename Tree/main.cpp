#include <iostream>
#include "Tree.cpp"

int main() {
    long double  val;

    Tree<pair<long double , long double >> *myTree=new Tree<pair<long double , long double >>();

    cout<<"\t entrez une valeur:";
    cin>>val;
    //calculate the fibonnachi of the value given as input
    cout<<"la reponse ="<<fibonnachi(val,myTree)<<endl;

    return 0;
}