#include <stdio.h>
#include <stdlib.h>
//#include <sys\types.h>
char a,b,c,d,e,f,g,h,i=' ';
void print(void);
void main()
{
int p,temp;
char ch,num;
srand(getpid());
p=rand()%9;
if(p==0)
p=p+1;
a=p;


(p+1)<=8?(e=p+1):(e=p-((p+1)-8));

(p+2)<=8?(f=p+2):(f=p-((p+2)-8));

(p+3)<=8?(b=p+3):(b=p-((p+3)-8));

(p+4)<=8?(d=p+4):(d=p-((p+4)-8));

(p+5)<=8?(g=p+5):(g=p-((p+5)-8));

(p+6)<=8?(c=p+6):(c=p-((p+6)-8));

(p+7)<=8?(h=p+7):(h=p-((p+7)-8));

a=a+48;
b=b+48;
c=c+48;
d=d+48;
e=e+48;
f=f+48;
g=g+48;
h=h+48;

print();

while(!(a==49 && b==50 && c==51 && d==52 && e==53 && f==54 && g==55 && h==56))
{
//	print();
	scanf(" %c",&ch);
	num=ch;
if(num=='Q'||num=='q')
{
	printf("thanx for the playing \n");
	return;
}
system("clear");
	printf("num= %c\n",num);	
		if(a==num)
		{
				if(b==32)
				{
					temp=b;
					b=a;
					a=temp;					
				
				}
				else if(d==32)
				{
					temp=d;
					d=a;
					a=temp;
								
				}
		}
		else if(c==num)
		{
				if(b==32)
				{
					temp=b;
					b=c;
					c=temp;					
				
				}
				else if(f==32)
				{
					temp=f;
					f=c;
					c=temp;
								
				}
		}
		else if(g==num)
		{
				if(d==32)
				{
					temp=d;
					d=g;
					g=temp;					
				
				}
				else if(h==32)
				{
					temp=h;
					h=g;
					g=temp;
								
				}
		}
		else if(i==num)
		{
				if(f==32)
				{
					temp=f;
					f=i;
					i=temp;					
				
				}
				else if(h==32)
				{
					temp=h;
					h=i;
					i=temp;
								
				}
		}
		else if(b==num)
		{
				if(a==32)
				{
					temp=a;
					a=b;
					b=temp;					
				
				}
				else if(c==32)
				{
					temp=c;
					c=b;
					b=temp;
								
				}
				else if(e==32)
				{
					temp=e;
					e=b;
					b=temp;
								
				}

		}	

		else if(d==num)
		{
				if(a==32)
				{
					temp=a;
					a=d;
					d=temp;					
				
				}
				else if(g==32)
				{
					temp=g;
					g=d;
					d=temp;
								
				}
				else if(e==32)
				{
					temp=e;
					e=d;
					d=temp;
								
				}

		}	

	

		else if(h==num)
		{
				if(e==32)
				{
					temp=e;
					e=h;
					h=temp;					
				
				}
				else if(g==32)
				{
					temp=g;
					g=h;
					h=temp;
								
				}
				else if(i==32)
				{
					temp=i;
					i=h;
					h=temp;
								
				}

		}
		else if(f==num)
		{
				if(e==32)
				{
					temp=e;
					e=f;
					f=temp;					
				
				}
				else if(c==32)
				{
					temp=c;
					c=f;
					f=temp;
								
				}
				else if(i==32)
				{
					temp=i;
					i=f;
					f=temp;
								
				}

		}
		else if(e==num)
		{
				if(b==32)
				{
					temp=b;
					b=e;
					e=temp;					
				
				}
				else if(d==32)
				{
					temp=d;
					d=e;
					e=temp;
								
				}
				else if(f==32)
				{
					temp=f;
					f=e;
					e=temp;
								
				}
				else if(h==32)
				{
					temp=h;
					h=e;
					e=temp;
								
				}

		}	
	
print();
}
printf("bingo : You are a genius man ...!    (^.O)");

}


void print(void)
{

printf("-------------\t\t\tIf you \n");   
printf("| %c | %c | %c |\t\t\twant to\n",a,b,c);
printf("-------------\t\t\t Quit\n");
printf("| %c | %c | %c |\t\t\t than \n",d,e,f);
printf("-------------\t\t\t press\n");
printf("| %c | %c | %c |\t\t\t Q or q\n",g,h,i);
printf("-------------\n");
}
