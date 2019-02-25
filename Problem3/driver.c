#include <stdio.h>
#include "header.h"

int main()
{
	int num=3,num1=2;
    addBitwise(num,num1);
    char a='a';
    int n1=1,n2=5;
    int check=isBitSetInRange(a,n1,n2);
    if(check==1)
        printf("bit is set\n");
    else printf("bit is not set\n");
    unsigned int toBinaryNumber=10;
    toBinary(toBinaryNumber);
    toOctal(toBinaryNumber);
	return 0;
}
