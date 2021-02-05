#include<iostream>
#include<math.h>
int add(int num1, int num2){
    /**
     * @brief function to perform addition with two arguments
     * 
     */
    int sum;
    sum=num1+num2;
    return sum;
}
int sub(int num1, int num2){
    /**
     * @brief function to perform subtraction with two arguments
     * 
     */
    int diff;
    diff=num1-num2;
    return diff;
}
int mult(int num1, int num2){
    /**
     * @brief function to perform multiplication with two arguments
     * 
     */
    int product;
    product=num1*num2;
    return product;
}
int div(int num1, int num2){
    /**
     * @brief function to perform division with two arguments
     * 
     */
    int rem;
    rem=num1+num2;
    return rem;
}
int main(){
    
    /**
     * @brief Calling the functions
     * 
     */
    std::cout<<"Addition:"<<add(1,2)<<add(30,20)<<add(5,6)<<std::endl;
    std::cout<<"Subtraction:"<<sub(2,1)<<sub(10,20)<<sub(4,3)<<std::endl;
    std::cout<<"Muliplication:"<<mult(4,5)<<mult(5,20)<<mult(20,10)<<std::endl;
    std::cout<<"Division:"<<div(4,3)<<div(20,10)<<div(5,4)<<std::endl;
    return 0;
}