#include <iostream>
int main(){
    int idx = 0, arr[101];
    while (std::cin >> arr[idx]){
        idx++;
    }
    while(idx--){
        std::cout << arr[idx] << std::endl;
    }
    return 0;
}
