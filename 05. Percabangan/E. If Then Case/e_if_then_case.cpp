#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    if (N > 9999){
        cout << "puluhribuan" << endl;
    }
    else if (N > 999){
        cout << "ribuan" << endl;
    }
    else if (N > 99){
        cout << "ratusan" << endl;
    }
    else if (N > 9){
        cout << "puluhan" << endl;
    }
    else{
        cout << "satuan" << endl;
    }
    return 0;
}
