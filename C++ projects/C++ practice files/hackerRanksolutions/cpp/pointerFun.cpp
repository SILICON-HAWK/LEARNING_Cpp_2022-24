#include <bits/stdc++.h>

void ptrfun (){
    int a,b;

    std::cin>>a>>b;
    int *ap, *bp;

    *ap = a;
    *bp = b;

    a = *ap + *bp;
    b = std::abs(*ap - *bp);  //idk why abs give warning

    std::cout<<a<<"\n";
    std::cout<<b;
};

int main(){
    ptrfun();
    return 0;
}
/*
sol 1 that didnt work for some reason
#include <bits/stdc++.h>
using namespace std;
void ptrfun (){
    int a,b;

    cin>>a>>b;
    int *ap, *bp;

    *ap = a;
    *bp = b;

    a = *ap + *bp;
    if (b>a){
    b = (*ap - *bp);
    }
    else {
        b = -1*(*ap-*bp);
    }
    cout<<a<<endl;
    cout<<b;
};

int main(){
    ptrfun();
    return 0;
}
*/