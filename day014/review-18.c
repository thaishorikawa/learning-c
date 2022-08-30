#include <stdlib.h>
#include <stdio.h>

int main()
{
  int x, y;

  do
  {
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);
    if (x != 0 & y != 0)
    {
        if (x > 0 & y > 0)
            printf("Quadrant I\n");
        else if (x < 0 & y > 0)
            printf("Quadrant II\n");
        else if (x < 0 & y < 0)
            printf("Quadrant III\n");
        else
            printf("Quadrant IV\n");
    }
  } while (x != 0 & y != 0);

  return 0;    
}