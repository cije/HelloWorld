#include"sqstack.cpp"
#include"sqstack1.cpp"
#include<stdlib.h>
void trans(char *exp,char postexp[])
{
	char e;
	SqStack *Optr;
	InitStack(Optr);
	int i=0;
	while(*exp!='\0')
	{
		switch(*exp)
		{
		case '(':
			Push(Optr,'(');
			exp++;
			break;
		case ')':
			Pop(Optr,e);
			while(e!='(')
			{
				postexp[i++]=e;
				Pop(Optr,e);

			}
			exp++;
			break;
		case '+':
		case '-':
			while(!StackEmpty(Optr))
			{
				GetTop(Optr,e);
				if(e!='(')
				{
					postexp[i++]=e;
					Pop(Optr,e);
				}
				else
					break;
			}
			Push(Optr,*exp);
			exp++;
			break;
		case '*':
		case '/':
				while(!StackEmpty(Optr))
				{
				GetTop(Optr,e);
				if(e=='*'||e=='/')
				{
					postexp[i++]=e;
					Pop(Optr,e);
				}
				else break;
				}
				Push(Optr,*exp);
				exp++;
				break;
		default:
			while(*exp>='0'&&*exp<='9')
			{
				postexp[i++]=*exp;
				exp++;
			}
			postexp[i++]='#';
		}
	}
	while(!StackEmpty(Optr))
	{
		Pop(Optr,e);
		postexp[i++]=e;
	}
	postexp[i]='\0';
	DestroyStack(Optr);
}
double compvalue(char * postexp)
{  double d,a,b,c,e;
   SqStack1 * Opnd;
   InitStack1(Opnd);
   while(*postexp!='\0')
   {  switch(* postexp)
   {
	   case '+':
		   p(Opnd,a);
           p(Opnd,b);
		   c=b+a;
		   Push1(Opnd,c);
		   break;
	   case '-':
           p(Opnd,a);
           p(Opnd,b);
		   c=b-a;
		   Push1(Opnd,c);
		   break;
	   case '*':
           p(Opnd,a);
           p(Opnd,b);
		   c=b*a;
		   Push1(Opnd,c);
		   break;
	   case '/':
           p(Opnd,a);
           p(Opnd,b);
		   if(a!=0)
		   {
			   c=b/a;
			   Push1(Opnd,c);
			   break;
		   }
		   else
		   {
			   printf("\n\t除零错误！\n");
			   exit(0);
		   }
		   break;
	   default:
		   d=0;
		   while(*postexp>='0'&&*postexp<='9')
		   {  d=10*d+ *postexp-'0';
		      postexp++;
		   }
		   Push1(Opnd,d);
		   break;
   }
   postexp++;
   }
   GetTop1(Opnd,e);
   DestroyStack1(Opnd);
   return e;
}
int main()
{
	char exp[]="(56-20)/(4+2)";
	char postexp[MaxSize];
	trans(exp,postexp);
	printf("中缀表达式：%s\n",exp);
	printf("后缀表达式：%s\n",postexp);
	printf("表达式的值：%g\n",compvalue(postexp));
	return 1;
}