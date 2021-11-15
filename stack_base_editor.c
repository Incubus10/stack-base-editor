#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10		

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
    
    
    for(int i=0;i<index;i++){
        y[i]=pop(stack);
        
    }
    
        push(stack,'^');
        for(int i=index-1;i>-1;i--){
        push(stack,y[i]);
        }
        
    
    
}
char moveright(int index){
    char y[20];
    char x;
    for(int i=0;i<index;i++){
        if(stack[i]!='^'){
        y[i]=pop(stack);
        
    }
    x=pop(stack);
    
    }
     for(int i=index;i>-1;i--){
        push(stack,y[i]);
        printf(" %c",y[i]);
         }
         
        push(stack,x);
    //     for(int i=index;i<strlen(stack);i++){
    //         push(stack,y[i]);
    //     }
    
}


 
int main () {
int ch;
int index;
while (1)
    {
printf ("\n*** Stack Menu ***");
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
	  pop (stack);
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


void check(struct stack * left,struct stack * right){
    struct stack *l=(struct stack *)malloc(sizeof(struct stack));
    l=left;
    struct stack *r=(struct stack *)malloc(sizeof(struct stack));
    r=right;
    if(isEmpty(left)){
        printf("left stack is empty");
    }
    else{
        printf("left stack :%d",stackTop(left));
    }
    if(isEmpty(right)){
        printf("right stack is empty \n");
    }
    else{
        printf("right stack :%d",stackTop(right));
    }
}

void insert_word(char word[]){
    for(int i=0;i!='\0';i++){
        insert_char(word[i]);
    }
}

void insert_char(char c){
    push(left,c);
}

bool delete(){
     if(isEmpty(right)){
        return false;
    }
    else{
        pop(right);
    }
}

bool space(){
     if(isEmpty(left)){
        return True;
    }
    else{
        pop(left);
    }
}

void cursor(int index){
    int l_size,r_size,c;
    l_size=strlen(left);
    r_size=strlen(right);

    if(index<l_size){
        moveleft(index);
    }
    else{
        moveright(c);
    }

}

void moveleft(int index){
    int l_size;
    l_size=strlen(left);
    while(position!=leftSize) {
        push(left,stackTop(left));
        pop(left);
        l_size = strlen(left);
    }
}

void moveright(int index){
    int r_size,i=1;
    r_size=strlen(right);
    if(index>r_size){
        printf("Cannot move the cursor do something else");
    }
    else{
        while(i<=index){
            push(left,stackTop(left));
            pop(right);
            i++;
        }
    }
}

void findandreplace(char f, char r){
    int c=1;
   int original=strlen(left);

    while(!isEmpty()){
        if(stackTop(right)==f){
            delete();
            insert_char(r);
        }
        else{
            cursor(c);
            c++;
        }
    }
    cursor(original);
}

int main(){
    int i=0;
    char s[20];
    char c[20];
    struct stack * left;
    struct stack* right;

    printf("Enter the word jisme backchodi karni hai : \n");
    scanf("%d",&s);

    printf("word %d",s);


}
