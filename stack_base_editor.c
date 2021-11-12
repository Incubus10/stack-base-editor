#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    struct stack *left;
    struct stack *right;
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *s ){
    if(s->top == -1){
        return 1;
    }
    else{
    return 0;
    }
}

int isFull(struct stack * s){
    if(s->top==s->size-1){
        return 1;
    }

    else{
        return 0;
    }

} 

void push(struct stack * s, int data){
    if(isFull(s)){
        printf("full stack");
    }
    else{
        s->top++;
        s->arr[s->top]=data;
    }
}

int pop(struct stack * s){
    if(isEmpty(s)){
        printf("empty stack");
        return -1;
    }
    else{
        int val=s->arr[s->top];
        s->top--;
        return 1;
    }
}

int stackTOp(struct stack *s){
    return s->arr[s->top];
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
