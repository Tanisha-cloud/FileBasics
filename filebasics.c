#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    FILE *p;

    p=fopen("new.txt","w");   //CREATION OF A FILE.

    //putc(p,'z');                  //writing a single character z only.
    fprint(p,"THIS IS AWESOME");   //writing a full sentence on the file.

return 0;


}
