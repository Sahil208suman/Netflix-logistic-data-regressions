#include <stdio.h>
    
   int main() {
    char text[100]
    int shift;
   
  printf("Enter text:");
  scanf("%s",text);
   
  printf("Enter shift:");
  scanf("%d",&shift);
   
 for(int i=0; text[i] !='\0'; i++) {
  if(text[i] >= 'a' && text[i] <= 'z') {
    text[i] = 'a'+(text[i]- 'a'+shift) % 26;
  }
            else if (text[i] >= 'A' && text[i] <='Z') {
                   text[i] ='A' + (text[i]-'A'+shift) %26;
                        }
                       }
                  printf("Encrypted text: %s\n",text);
                   return 0;
                     }