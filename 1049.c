#include <stdio.h>
#include <string.h>

int main()
{
   char s[20];
    
    while(scanf("%s", s) != EOF) {
        if(!strcmp(s, "vertebrado")) {
            scanf("%s", s);
            
            if(!strcmp(s, "ave")) {
                scanf("%s", s);
                
                if(!strcmp(s, "carnivoro")) {
                    printf("aguia\n");
                }
                else {
                    printf("pomba\n");
                }   
            }
            else {
                scanf("%s", s);
                
                if(!strcmp(s, "onivoro")) {
                    printf("homem\n");
                }
                else {
                    printf("vaca\n");
                }
            }
        }
        else {
            scanf("%s", s);
            
            if(!strcmp(s, "inseto")) {
                scanf("%s", s);
                
                if(!strcmp(s, "hematofago")) {
                    printf("pulga\n");
                }
                else {
                    printf("lagarta\n");
                }
            }
            else {
                scanf("%s", s);
                
                if(!strcmp(s, "hematofago")) {
                    printf("sanguessuga\n");
                }
                else {
                    printf("minhoca\n");
                }
            }
        }
    }    
    
    return 0;
}