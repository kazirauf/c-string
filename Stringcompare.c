#include <stdio.h>


int main (){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int i = 0;
    // without funcut or sortcut
    // while (1)
    // {
    //    if(a[i] == '\0' && b[i] == '\0'){
    //     printf("Equal");
    //     break;
    //    }
    //    else if (a[i] == '\0')
    //    {
    //      printf("a is smaller ");
    //      break;
    //    }
    //    else if (b[i] == '\0')
    //    {
    //     printf("b is smaller");
    //     break;
    //    }
    //    else if(a[i] < b[i]){
    //     printf("a is smaller ");
    //     break;
    //    }
    //    else if (a[i] > b[i])
    //    {
    //     printf("b is smaller");
    //     break;
    //    }
    //    else if (a[i] == b[i])
    //    {
    //     i++;
    //    }

       
       
    // }
    
    // with funcut or sortcut

    printf("%d", strcmp(a, b));
    return 0;
}7