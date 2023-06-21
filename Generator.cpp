#include "testlib.h"

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int n = rnd.next(1,3);
    println(n);
    int a1,a2,a3,a4;
    for(int i=0;i<n;i++){
        a1=rnd.next(0,10);
        a2=rnd.next(0,10);
        a3=rnd.next(0,10);
        a4=rnd.next(0,10);
        if(a1==0 && a2==0 && a3==0 && a4==0){
            int x=rnd.next(1,4);
            if(x==1)
                a1++;
            else if(x==2)
                a2++;
            else if(x==3)
                a3++;
            else if(x==4)
                a4++;
        }
        println(a1,a2,a3,a4);
    }
}