#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000	

int top = -1;

char stack[MAX];
char stackA[MAX];
int sizeA=0,sizeB=0,sizeC=0;

char push (char *stack,char val) 
{

if (top == MAX - 1){
printf ("\nStack is full!!");
}
else{

top = top + 1;
stack[top] = val;
}
}


char pop (char *stack) {
if (top == -1){
printf ("\nStack is empty!!");
}
else{
char val=stack[top];
top = top - 1;
return val;
    }
}
char backspace(char * stack){
    char y[20];
    int i=0;
    for(i;i<top;i++){
        if(stack[top]=='^'){
            y[i]=pop(stack);
            y[i+1]=pop(stack);
           break;
        }
        else{
            top--;
        }
        
        
    }
    for(int i=0;i<1;i++){
        push(stack,y[i]);
        }
        
}



void display () {
int i;
if (top == -1){
printf ("\nStack is empty!!");
}
else{
printf ("\nStack is...\n");
for (i = 0; i <= top; i++)
printf ("%c", stack[i]);

}
}

char moveleft(int index){
    char x;
    char y[20]; 
    char z;
    
    if(stack[top]=='^'){
        z=stack[top];
        
    
    for(int i=0;i<index+1;i++){
        y[i]=pop(stack);
        
    }}
    
        push(stack,z);
        for(int i=index;i>0;i--){
        push(stack,y[i]);
        }
        
    
    
}
char moveright(int index){
    char y[20];
    char x;
    for(int i=0;i<index;i++){
        if(stack[top]!='^'){
        y[i]=pop(stack);
        
        
    }
    x=pop(stack);
    
    }
     for(int i=index;i>0;i--){
        push(stack,y[i]);
      
         }
         
        push(stack,x);
  
    
}


 
int main () {
int ch;
int index;
while (1)
    {
printf ("\n** Stack Menu **");
printf ("\n\n1.Insert\n2.Backspace\n3.Display\n4.Moveleft\n5.Moveright\n5.Exit");
printf ("\n\nEnter your choice(1-4):");
scanf (" %d", &ch);

if(ch==1) {
    char val;
    printf ("\nEnter element to add:");
scanf (" %c", &val);
	  push (stack,val);
	  
}

else if(ch==2){
	 backspace(stack);
}
else if(ch==3){
	  display ();
}
else if(ch==4){
    printf("Enter the index : ");
    scanf(" %d",&index);
    moveleft(index);
}
else if(ch==5){
	  printf("Enter the index : ");
    scanf(" %d",&index);
    moveright(index);
}
else if(ch==6){
    exit(0);
}
else{
	  printf ("\nWrong Choice!!");
}

}
}
