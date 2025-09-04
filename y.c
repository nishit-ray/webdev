// // #include<stdio.h>
// // main()
// // {
// //     int n;
// //     scanf("%d",&n);

// //     char a[n];
// //     scanf("%s",&a);
// //      int x=strlen(a);
// //      if((x-2)>=10){
// //         printf("%c%d%c\n",a[0],(x-2),a[x-1]);
// //      }
// //      else{
// //      printf("%s\n",x);
// //      }
// //      return 0;
   
// // }
// #include<stdio.h>
// main()
// {
//     int n;
//     scanf("%d",&n);
//     while(n--){
//     char a[100];
//     scanf("%s",&a);
     
//      if((strlen(a)-2)>9){
//         printf("%c%d%c\n",a[0],(strlen(a)-2),a[strlen(a)-1]);
//      }
//      else{
//      printf("%s\n",a);
//      }
//     }
//      return 0;
   
// }
// #include <stdio.h>

// int main()
// {
//    int arr[4] = {25, 50, 75, 100};
//    printf("%d", arr[0]);
//    return 0;
// }
// #include<stdio.h>
// int main()
// {
//    char a[50];
//    scanf("%s",a);
//    printf("%d",a[0]);
//    int x= a[0]
//    if(x>96)
//    printf("%d",x+32);
// }

#include <stdio.h>

int main() 
{    
    
    char str1[100];
    char str2[100];
    int len1 = 0, len2 = 0;
    int i = 0, j = 0, count = 0;

    printf("Enter 1st string : ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0') {
        len1++; 
        i++;
    }
    if (str1[i - 1] == '\n') {
        str1[i - 1] = '\0';
        len1--; 
    }

    printf("Enter 2nd string : ");
    fgets(str2, sizeof(str2), stdin);

    while (str2[j] != '\0') {
        len2++; 
        j++;
    }
    if (str2[j - 1] == '\n') {
        str2[j - 1] = '\0';
        len2--; 
    }

    if (len1 != len2) {
        printf(" not equal.\n");
        return 0;
    }
   
    for (int k = 0; k < len1; k++) {
        if (str1[k] != str2[k]) {
            count = 1;
            break;   
        }
    }

    if (count) {
        printf("not equal\n");
    } else {
        printf(" equal\n");
    }
    
    return 0;
}
