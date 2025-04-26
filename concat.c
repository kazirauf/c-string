#include <stdio.h>

int main (){
    char a[101], b[101];

    scanf("%s %s", &a, &b);
    //  system 1 
    int length1 = strlen(a);
    int length2 = strlen(b);

    for(int i = 0; i <= length2; i++){
        a[i + length1] = b[i];
    }
    // system-2 sortcut / function
    // const concat = strcat(a, b);
    printf("%s", a);
    return 0;
}