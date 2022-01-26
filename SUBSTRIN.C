#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 long char str[1000], word[20];
 int i, j, found, strLen, wordLen;

 clrscr();
 printf("Enter any string: ");
 gets(str);
 printf("Enter any word to search: ");
 gets(word);

 strLen = strlen(str);
 wordLen = strlen(word);

 for(i=0; i<strLen-wordLen;i++)
 {
  found = 1;
  for(j=0; j<wordLen; j++)
  {
   if(str[i+j]!= word[j])
   {
    found = 0;
    break;
   }
  }
  if(found == 1)
   {
    printf("'%s' found at index: %d\n", word, i);
   }
  else
   {
    printf("Sorry,Word is not found.");
   }
 }
 printf("\n");
 printf("\n");
 printf("\n");
 printf("*************************************************************\n");
 printf("Have a nice day.");
 getch();
}