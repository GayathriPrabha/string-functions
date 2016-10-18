#include <stdio.h>
int strlen(char *);
int ctr;
char *strcpy(char*,char*);
char *strcat(char*,char*);
char *strrev(char*,char*);
int strcmp(char*,char*);
int main(void) {
	char arr[]="hello";
	char copy[100];
	char cat[]="world";
	char rev[100];
	int len;
	int cmp;
	len=strlen(arr);
	printf("Length : %d",len);
	strcpy(arr,copy);
	printf("\nCopied string : %s",copy);
	strcat(copy,cat);
	printf("\nConcatinated string : %s",copy);
	strrev(arr,rev);
	printf("\nReverse : %s",rev);
	cmp=strcmp(arr,cat);
	if(cmp==1)
	{
	    printf("\nSame");
	}
	else
	{
	    printf("\nNot Same");
	}
	return 0;
}
int strlen(char *arr)
{
    for(ctr=0;arr[ctr]!='\0';ctr++);
    return ctr;
}
char *strcpy(char *src,char *des)
{
    for(ctr=0;src[ctr]!='\0';ctr++)
    {
        des[ctr]=src[ctr];
    }
    des[ctr]='\0';
    return des;
}
char *strcat(char* src,char* des)
{
    for(ctr=0;src[ctr]!='\0';ctr++);
    int i=0;
    for(ctr;des[i]!='\0';ctr++)
    {
        src[ctr]=des[i];
        i++;
    }
    des[i]='\0';
    return src;
}
char *strrev(char *src, char *des)
{
    int i=0;
    for(ctr=sizeof(src)/sizeof(src[0]);ctr>=0;ctr--)
    {
        des[i]=src[ctr];
        i++;
    }
    des[i]='\0';
    return des;
}
int strcmp(char *arr1,char *arr2)
{
    int flag=0,i=0,ans;
    while(arr1[i]!=0&&arr2[i]!=0)
    {
        if(arr1[i]!=arr2[i])
        {
            flag=1;
        }
        i++;
    }
    if(flag==1&&arr1!='\0'&&arr2!='\0')
    {
        ans=1;
    }
    else
    {
        ans=0;
    }
    return 0;
}