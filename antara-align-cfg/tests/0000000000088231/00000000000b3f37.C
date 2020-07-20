/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<string.h>
int main(){int t;scanf("%d\n",&t);for(int i=0;i<t;i++){
    char s[100];scanf("%s\n",s);int len=strlen(s);char s1[len];int j=0;
    for(int i=0;i<len;i++){
        if(s[i]=='4'){
            s1[j]='1';j++;s[i]='3';
    }
    else if(j!=0){
        s1[j]='0';j++;
    }
    }
    printf("Case #%d: ",i);
    for(int i=0;i<len;i++){
      printf("%c",s[i]);  
    }
    printf(" ");
     for(int i=0;i<j;i++){
      printf("%c",s1[i]);  
    }
    printf("\n");
}
    return 0;
}
