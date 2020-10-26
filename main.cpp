#include <iostream>

bool isPrime(int n){
   if(n == 1)
   return false;
  for(int i = 2; i*i <= n; ++i) {
      if (n % i == 0) 
          return false;
  }
  return true;
     
}

int main(){
    
    
    int size;
    std::cin >> size;
    int* dynArr = new int[size];

    for(int i = 0; i < size; ++i){
        std::cin >> dynArr[i]; 
        int count = 0; 
        for(int j = 2; j < dynArr[i]; j++){ 
           if(isPrime(j)){
             count ++;
            }
        }
        int* b = new int[i];
        b[i] = count;
        std::cout  << b[i] << " " ;
    }
    
 delete[] dynArr;
 return 0;  
}       
