#include <stdio.h>
#include<string.h>

int main(void) {
    char a[20];
    gets(a);

    
    if(strcmp(a,"sunday")==0||strcmp(a,"saturday")==0)
    {
        printf("False");
    
    }
	else
	printf("True");
	return 0;
}
