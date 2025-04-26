#include <stdio.h>
#include <string.h>
int main (){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
        // normal
    // int length = strlen(b);
    // for(int i =0; i < length; i++){
    //     a[i] = b[i];
    // }

    // function / sortcut

    strcpy(a, b);
    printf("%s %s", a, b);
    return 0;
}