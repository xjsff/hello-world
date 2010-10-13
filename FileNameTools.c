#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
main()
{
    char s[100];
    char t[100];
    int w;
    int GetDir(char *whole,char* dir);
    int GetName(char *whole,char* Name);
    int GetExt(char *whole,char* Ext);
    gets(s);
    w=GetName(s,t);
    printf("%d",w);
}
int GetDir(char *whole,char* dir)
{
int q;
char *index;
index = strrchr(whole,'/');
strncpy(dir,whole,index-whole);
dir[index-whole]='\0';
printf("%s\n",dir);
q=strlen(dir);
return q;

}




int GetName(char *whole,char* Name)
{
int q;
char *index, *index2;
index = strrchr(whole,'/');
index2= strrchr(whole,'.');
strncpy(Name,index+1,index2-index-1);
Name[index2-index]='\0';
printf("%s\n",Name);
q=strlen(Name);
return q;
}


int GetExt(char *whole,char* Ext)
{
int q,l;
char *index;
l=strlen(whole);
index = strrchr(whole,'.');
strncpy(Ext,index+1,whole+l-index);
Ext[whole+l-index]='\0';
printf("%s\n",Ext);
q=strlen(Ext);
return q;
}



