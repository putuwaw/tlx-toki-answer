#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 9999){
        printf("puluhribuan\n");
    }
    else if (N > 999){
        printf("ribuan\n");
    }
    else if (N > 99){
        printf("ratusan\n");
    }
    else if (N > 9){
        printf("puluhan\n");
    }
    else{
        printf("satuan\n");
    }
    return 0;
}
