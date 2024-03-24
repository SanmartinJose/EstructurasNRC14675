#include "repaso.h"
recursividad::recursividad(){

}
int recursividad::factorialRecursiva(int n){
    if(n==0){
        n=1;
    }else{
        n=n*factorialRecursiva(n-1);
    }
    return n;
}