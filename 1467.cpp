#include <bits/stdc++.h>

int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c) != EOF) {
          if(a == 0 && b == 0 && c == 0) {
              printf("*\n");
          } else if(a && b == 0 && c == 0) {
              printf("A\n");
          } else if(a == 0 && b && c == 0) {
              printf("B\n");
          } else if(a == 0 && b == 0 && c) {
              printf("C\n");
          } else if(a == 0 && b && c) {
             printf("A\n");
          } else if(a && b == 0 && c) {
             printf("B\n");
          } else if(a && b && c == 0) {
              printf("C\n");
          } else {
              printf("*\n");
          }
    }

    return 0;
}
