#include<stdio.h>
int stack[100],choice,top,x,i,n;
void pop(void);
void push(void);
void display(void);
int main(){
	top=-1;
	printf("enter the size of the stack where maximum element is 100.\n");
	scanf("%d",&n);
	printf("stack operation using array\n");
	
	printf("1.Push\n2.pop\n3.dispaly\n4.exit\n");
	do{
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				printf("exit point\n");
				break;
			}
			default:{
				printf("please enter a valid choice(1/2/3/4)");
				break;
			}
		}
	}
	while(choice!=4);
	return 0;
	
}
void push(){
	if(top>=n-1){
		printf("stack is overflow");
	}
	else{
		printf("enter a value to pushed");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
	void pop(){
		if(top<=-1){
			printf("stack is in underflow condition");
		}
		else{
			printf("the popped element is %d",stack[top]);
			top--;
		}
	}
void display(){
	if(top>=0){
		printf("the element in the stack");
		for(i=top;i>=0;i--)
		printf("%d",stack[i]);
		printf("press next choice");
		
	}
	else{
		printf("stack is empty");
	}
}
