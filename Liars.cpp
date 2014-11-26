#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>/*
 * Complete the function below.
 */

typedef struct LL
{
	char name[20];
	int men;//1=liar 2= true 0=unknown
	struct LL *next,*isay,*usay;
} PER;
PER *head[26];
int n=0,l=0,t=0;
void set(char *n1,char *n2);
char** identifyTheLiars(int relations_size, char** relations, char* liar, int* result_size) {
	PER *uni_liar=NULL,*tmp=NULL,*tmp1=NULL,*prev=NULL,*uni_liar1;
	int i,j,k,already=0;
	char name1[20],name2[20];
	char *ans[20];
	for(i=0;i<relations_size;i++) {
	{
		
		j=0;
		while(relations[i][j]!=',')
		{
			name1[j]=relations[i][j];
			j++;
		}
		name1[j++]='\0';

		k=0;
                while(relations[i][j]!='\0')
                {
                        name2[k]=relations[i][j];
                        j++;k++;
                }
                name2[k]='\0';
		
		//NAME1 check
		already=0;
		tmp=head[name1[0]-'0'];
		prev=NULL;
		while(tmp!=NULL)
		{
			if(strcmp(tmp->name,name1)==0)
			{
				already=1;
				break;
			}
			prev=tmp;
			tmp=tmp->next;
		}
		if(!already)
		{
			l++;
			PER *tmp1= new PER;
			strcpy(tmp1->name,name1);
			tmp1->men=0;
			tmp1->isay=tmp1->usay=NULL;
			if(!uni_liar && strcmp(liar,tmp1->name)==0)
			{
				tmp1->men=1;
				uni_liar=tmp1;
			}
			if(prev)
			{
				prev->next=tmp1; 
				tmp=head[tmp1->name[0]-'0'];
				if(strcmp(tmp->name,tmp1->name)>0)
				{
					tmp1->next=head[tmp1->name[0]-'0']->next;
					head[tmp1->name[0]-'0']=tmp1;
				}						
				else
				while(tmp)
				{
					if(strcmp(tmp->name,tmp1->name)>0)
				}

			}
			else
				head[tmp1->name[0]-'0']=tmp1;

				printf("\n %s %d \n",tmp1->name,tmp1->men);
		}


		//Name2 check
                already=0;
                tmp=head[name2[0]-'0'];
                prev=NULL;
                while(tmp!=NULL)
                {
                        if(strcmp(tmp->name,name2)==0)
                        {
                                already=1;
                                break;
                        }
                        prev=tmp;
                        tmp=tmp->next;
                }
                if(!already)
                {
                        l++;
			PER *tmp1= new PER;
                        strcpy(tmp1->name,name2);
                        tmp1->men=0;
			tmp1->isay=tmp1->usay=NULL;
                        if(!uni_liar && strcmp(liar,tmp1->name)==0)
                        {
                                tmp1->men=1;
                                uni_liar=tmp1;
                        }
                        if(prev)
                                prev->next=tmp1;
                        else
                                head[tmp1->name[0]-'0']=tmp1;

			printf("\n %s %d \n",tmp1->name,tmp1->men);
                }


		}
	}

	for(i=0;i<relations_size;i++)
	{
		j=0;
		while(relations[i][j]!=',')
		{
			name1[j]=relations[i][j];
			j++;
		}
		name1[j++]='\0';

		k=0;
                while(relations[i][j]!='\0')
                {
                        name2[k]=relations[i][j];
                        j++;k++;
                }
                name2[k]='\0';	
		set(name1,name2);
	}

	n++;
	uni_liar1=uni_liar;
	while(uni_liar)//n=no of liar, t=true no, l=total
	{
		for(i=0;i<26;i++)
		{
			if(head[i])
			{
				tmp=tmp1=head[i];
				while(tmp)
				{
					if(tmp->usay && strcmp(tmp->usay->name,uni_liar1->name)==0)
					{
						tmp->usay->men=2;
						t++;
					}
					if(tmp->isay && strcmp(tmp->isay->name,uni_liar1->name)==0)
					{
						tmp->isay->men=2;
						t++;
					}
				tmp=tmp->next;	
				}
			}
		}
		uni_liar1=uni_liar1->next;
	}
	

	for(i=0;i<26;i++)
		{
			if(head[i])
			{
				tmp=tmp1=head[i];
				while(tmp)
				{
					if(tmp->men==0 || tmp->men==1)
					{						
							
					}

				tmp=tmp->next;	
				}
			}
		}

}

void set(char *n1,char *n2)
{
	PER *t1=head[n1[0]-'0'];
	PER *t2=head[n2[0]-'0'];
	while(t1!=NULL)
	{
		if(strcmp(n1,t1->name)==0)
			break;
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		if(strcmp(n2,t2->name)==0)
			break;
		t2=t2->next;
	}	

	t1->isay=t2;
	t2->usay=t1;

}	

int main()
{
		char *names[]={ "ram,sita","shyam,ajay"};
		char l[] ="ajay";
		int x=9;
		
	identifyTheLiars(2,names,l,&x);



}
