#include<stdio.h>
  
int main()
{
    
	int a[10],i,position,n;
    printf("How many elements do you want to enter ?");
    scanf("%d",&n);
     
    
	printf("Enter array elements:n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    
	printf("Enter element to search:");
    scanf("%d",&position);
    for(i=0;i<n;i++)
    {
    	if(a[i]==position)
    	{
    		printf("%d is at %d position",position,i);
		}
		
		if(i==n)
	{
		printf("It is not the element",position,i);
	}
}
	 return 0;
}

	
     
    
	

