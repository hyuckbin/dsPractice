#include <iostream>

void swap(int *n1 , int *n2){
    int temp ;
    temp = *n1;
    *n1 =*n2;
    *n2 = temp;
}

void swap(char *n1 , char *n2){
    char temp ;
    temp = *n1;
    *n1 =*n2;
    *n2 = temp;
}
int main () {
    int num1 =20 , num2 = 30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1 ='A' ;
    char ch2 ='Z';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    
    return 0;
}