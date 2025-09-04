// // #include <stdio.h>
// // #include <string.h>

// // int main() 
// // {    
    
// //     char str1[100];
// //     char str2[100];
// //     int len1 = 0, len2 = 0;
// //     int i = 0, j = 0, count = 0;

// //     printf("Enter 1st string : ");
// //     fgets(str1, sizeof(str1), stdin);
// //     printf("Enter 2nd string : ");
// //     fgets(str2, sizeof(str2), stdin);
// //     while (str1[i] != '\0') {
// //         len1++; 
// //         i++;
// //     }
// // while (str2[j] != '\0') {
     
// //        len2++; 
// //         j++;
// //     }
// //    if (len1 != len2) {
// //         printf(" not equal.\n");
// //         return 0;
// //     }
// //     // if (str1[i - 1] == '\n') {
// //     //     str1[i - 1] = '\0';
// //     //     len1--; 
// //     // }

   

// //     // if (str2[j - 1] == '\n') {
// //     //     str2[j - 1] = '\0';
// //     //     len2--; 
// //     // }

 
   
// //     for (int k = 0; k < len1; k++) {
// //         if (str1[k] != str2[k]) {
// //             count = 1;
// //             break;   
// //         }
// //     }

// //     if (count) {
// //         printf("not equal\n");
// //     } else {
// //         printf(" equal\n");
// //     }
    
// //     return 0;
// // }


// // #include <stdio.h>

// // int main() 
// // {    
    
// //     char str[50];
// //     char upd[50];
// //     int i=0,j=0;
    
// //     printf("Enter string : ");
// //     fgets(str,sizeof(str),stdin);
// //       while (str[i]!='\0')
// //     {
// //         if(str[i]=='\n')
// //         {
// //             str[i]='\0';
// //             break;
// //         }
    
// //       i++;
// //     }
    
// //     for (j = 0; str[j]!='\0' ; j++)
// //     {
// //        if (str[i] != ' ') {
// //             upd[j] = str[i];
// //             j++;
// //         }
// //     }
// //     upd[j]='\0';

// //     printf("updated string: %s",upd);
// //     return 0;
// // }
// #include <stdio.h>

// int main() 
// {    
//     char str[50];
//     char upd[50];
//     int i = 0, j = 0;

//     printf("Enter string : ");
//     fgets(str, sizeof(str), stdin);

    
//     while (str[i] != '\0') {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }

   
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ') {
//             upd[j] = str[i];
//             j++;
//         }
//     }
//     upd[j] = '\0'; 

//     printf("Updated string: %s\n", upd);

//     return 0;
// }


// #include <stdio.h>

// int main() 
// {    
//     char str1[50];
//     char str2[50];
//     int i=0,j=0;

//     printf("Enter 1st string : ");
//     fgets(str1,sizeof(str1),stdin);
//       while (str1[i]!='\0')
//     {
//       i++;
//     }
//     if (str1[i-1]=='\n')
//     {
//         str1[i-1]='\0';
//     }

//    printf("Enter 2nd string : ");
//    fgets(str2,sizeof(str2),stdin);
   
//    while (str2[j]!='\0' && str2[j]!='\n')
//     {
//       str1[i-1]=str2[j];
//       i++;
//       j++;
//     }
//     printf("after  combining: %s",str1);
//     return 0;
// }
#include <stdio.h>

int main() 
{    
    char str1[100]; // make it bigger to hold both strings
    char str2[50];
    int i = 0, j = 0;

    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline from str1
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    int len1 = i; // store original length

    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str2
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    // Concatenate str2 to str1
    for (int k = 0; str2[k] != '\0'; k++) {
        str1[len1] = str2[k];
        len1++;
    }
    str1[len1] = '\0'; // null terminate

    printf("After combining: %s\n", str1);

    return 0;
}

