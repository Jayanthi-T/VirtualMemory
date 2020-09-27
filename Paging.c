#include<stdio.h>
void main()
{ 
    int memsize = 15; 
    int pagesize,noofpage;
    int p[100]; 
    int frameno,offset,phyadd,i,choice = 0,pageno;
    printf("Your memory size is : %d\n",memsize);
    printf("Enter page size: ");
    scanf("%d",&pagesize);
 
    noofpage = memsize/pagesize;
    printf("The total number of pages is : %d ",noofpage);
 
    for(i=0;i<noofpage;i++)
    {
        printf("\nEnter the frame of page %d:",i+1);
        scanf("%d",&p[i]);
    }
 
    do
    {
        printf("\nLogical address:");
        printf("Enter the page number and the offset value\n");
        scanf("%d",&pageno);
        scanf("%d",&offset);
        pageno -= 1;
        if(pageno<noofpage && offset < pagesize)
        {
            phyadd = (p[pageno]*pagesize)+offset;
            printf("\nPhysical address is : %d",phyadd);
            printf("\nDo you want to continue?(1/0) ");
            scanf("%d",&choice);
        }
        else
        {
            printf("Enter the pageno value less than %d and offset value less than %d\n",noofpage,pagesize);
            choice = 1;
        }
 
    }while(choice == 1);
 
 
}
 
 
