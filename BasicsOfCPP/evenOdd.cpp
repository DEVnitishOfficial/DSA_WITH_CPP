

#include <iostream>

int main(){

    int number;

    std::cout<<"Enter the number you want to checkout even or odd : ";
    std::cin>> number;
    
    if(number % 2 == 0){
        std::cout<<"Given number " << number << " is even ";
    }else{
        std::cout<<"Given number " << number << " is odd ";
    }

    return 0;
}