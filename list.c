#include <stdio.h>
#include <math.h>
int main()
{
FILE *fp;
fp = fopen ("image_list.txt", "a");
int limit = 160;
int incr = ceil (limit/20);
fprintf (fp, "%d-->  ", limit);
for (int i = 1; i<=limit; i = i + incr)
    fprintf(fp, "%d ",i);
fprintf(fp, "\n");
fclose(fp);
return 0;
}
