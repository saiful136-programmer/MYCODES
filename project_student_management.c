#include<stdio.h>
#include<string.h>
int roll[100];
char name[100][30];
float mark[100];
int n=0;
void add_student ()
{
    scanf("%d", &roll[n]);
    scanf("%s", name[n]);
    scanf("%f", &mark[n]);
    n++;
    return ;
}
void display_student ()
{
     for(int i=0;i<n;i++)
    {
        printf("%d", roll[i]);
        printf("%s", name[i]);
        printf("%.2f", mark[i]);
    }
    return ;
}
void searchbyroll( int demand)
{
    for(int i=0; i<n; i++)
    {
        if(roll[i]==demand)
        {
            printf("%d\n", roll[i]);
            printf("%s\n", name[i]);
            printf("%.2f\n", mark[i]);
            return;
        }
    }
}
void searchbyname ( char demand[])
{
    for(int i=0; i<n; i++)
    {
        if(strcmp(name[i], demand)==0)
        {
            printf("%d\n", roll[i]);
            printf("%s\n", name[i]);
            printf("%.2f\n", mark[i]);
        }
    }
}
void searchbymark (float demand)
{
    for(int i=0; i<n; i++)
    {
        if(mark[i]==demand)
        {
            printf("%d\n", roll[i]);
            printf("%s\n", name[i]);
            printf("%.2f\n", mark[i]);
            return;
        }
    }
}
void update_student(int key)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(roll[i]==key)
        {
            printf("Enter New Name : ");
            scanf("%s", name[i]);

            printf("Enter New Mark : ");
            scanf("%f",&mark[i]);

            printf("Updated Successfully!\n");

            return;
        }
    }

    printf("Student Not Found!\n");
}
void delete_student(int key)
{
	for(int i=0;i<n-1;i++)
	{
		if(roll[i]==key )
		{
			for(int j=i;j<n-1;j++)
                        {
                        roll[j]=roll[j+1];
                        strcpy(name[j],name[j+1]);
                        mark[j]=mark[j+1];
                        }
                  n--;
		}
	
	}
}
int main()
{       
	int choice;
	while(1)
	{
	printf(".....student management system.......");
	printf("1. add_student\n");
	printf("2.display_student\n");
	 printf("3.searchbyroll\n");
	 printf("4.update_student\n");
	 printf("5. delete_student\n");
	 printf("6.searchbyname\n");
	 printf("7.searchbymark\n");
	 printf("8. exit\n");
	printf("enter your choice:");
	scanf("%d", &choice);
	switch (choice){
	case 1:
            add_student();
            break;

        case 2:
            display_student();
            break;

        case 3:
            {int key;

          printf("Enter Roll : ");
          scanf("%d",&key);

            searchbyroll(key);
            break;
            }
        case 4:
            {int key;

            scanf("%d",&key);

            update_student(key);
            break;}

        case 5:{
            int key;

            scanf("%d",&key);

            delete_student(key);
            break;}
        case 6:{
            char key[30];

            scanf("%s",key);

            searchbyname(key);
            break;}
       case 7:
            {int key;

          printf("Enter mark : ");
          scanf("%d",&key);

          searchbymark(key);
            break;}
        case 8:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
return 0;
}




























