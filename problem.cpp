#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int primeFactors(int num, int factors[100]){
    if(num <2){
        return -1;
    }

    int count = 0;
    int orig_num = num;
    while (num > 1) {
        for(int i = 2; i < orig_num; i++){
            if(num % i == 0){
                factors(count++) = i;
                num /= i;
            }
        }
    }
    return count;
}

int main() {
    
    for(;;){ //infinite loop
        cout<< "Enter a number (-1 to exit): "; 
        int x;
        cin >> x;
        if (x == -1){
            break;
        }
    }
    int factors[100];
    int cout = primeFactors(x, factors);
    
    for(int i = 0; i < count; i++){

        cout << factors[i] << " , ";
    }
    
    cout << endl;



    return 0;
}