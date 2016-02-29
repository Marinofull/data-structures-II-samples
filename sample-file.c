#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void write(FILE *fp){

    fp = fopen("file.txt", "w+");
    fputs("this is my hello freaking world!\n", fp);

    fseek( fp, 0, SEEK_CUR );
    fputs(" C programming Language\n", fp);
    fclose(fp);
}

void read(FILE *fp)
{
    int c;

    fp = fopen("file.txt", "r");
    while(1)
    {
        c = fgetc(fp);
        if( feof(fp))
        {
            break;
        }
        printf("%c", c);
    }
    fclose(fp);
}

int main()
{
    FILE *fp;

    write(fp);
    read(fp);

    return 0;
}
