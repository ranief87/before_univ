#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[30];
    
    enum sex{MALE, FEMALE} SEX_TYPE;
    
    union {
        struct male_t {
            char beard[10];
        } male;
        
        struct female_t {
            char pregnant[10];
            unsigned int children;
        } female;
    } sexinfo;
};

int main(int argc, char *argv[])
{
   if(argc<2)
   {
      printf("Eroor!\n");
      printf("Usage: ./prog [file_path]\n");
      exit(1);
   }
      
   char file_name[50];
   strcpy(file_name, argv[1]);
   printf("파일 경로는:%s\n",file_name);

   int line = 0;
   char c;
   FILE *fr=fopen(file_name, "r");//파일 열기
   while((c=fgetc(fr))!=EOF){
   if(c=='\n') line++;
   }

   struct Person m[3];
   int i, input;
   char sex[10][10];
   char *male="male";
   char compare[10];
   for(i=0;i<line;i++)
   {
      fscanf(fr, "%s: %s", sex[i], &m[i].name);
      if(strcmp(sex[i],male)==0)
      {
        fscanf(fr, "%s\n", &m[i].sexinfo.male.beard);
      }
      else
      {
         fscanf(fr, "%s, %d\n", &m[i].sexinfo.female.pregnant, &m[i].sexinfo.female.children);
   }
   fclose(fr);
   printf("총 회원은 %d 입니다.\n종료하려면 -1을 누르세요!\n",line+1);
   while (1)
   {
      printf("회원검색:");
      scanf("%d",&input);      
      if(input==-1)
         break;
      
      printf("======회원 정보========\n");
      printf("이름:%s\n",m[input-1].name);
      if(strcmp(sex[input-1],male)==0)
      {
         printf("수염 여부:%s\n",m[input-1].sexinfo.male.beard);
      }
      else
      {
         printf("임신 여부:%s\n자녀 수:%d\n",m[input-1].sexinfo.female.pregnant, m[input-1].sexinfo.female.children);
      }
   }
   return 0;
      
 
}}