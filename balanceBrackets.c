#include<stdio.h>
char stack[50];
int top=-1;

void push(char k)  
{
  top=top+1;
  stack[top]=k;
 }
 
int pop()
{
  if(top==-1)
  return 0;
  else{
        top=top-1;
        return 1;
       }
 }
 
 int main()
 {
    char e;
    int f=1,t=1;
    printf("press 1 to stop\n\n Enter expression:");
    while(e!='1')
    {  
       if(f==0)
       {t=0;
        break;
       }
       scanf("%c",&e);
       if(e=='(')
       push(e);
       if(e==')')
       f=pop();
     }
    
    if(t==0 || stack[top]=='(')
    printf("unbalanced");
    else if(t==1)
    printf("balanced");
    
    return 0;
}    
