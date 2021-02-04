#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,size;
    int *largestElement;
	printf("Finding the largest element using dynamic memory allocation with pointers\n"); 
	printf("-------------------------------------------------------------------------\n"); 	
    printf("Input total number of elements: ");
    scanf("%d",&size);
    largestElement=(int*)calloc(size,sizeof(int)); //This is a pointer(an address for the starting point of the allocation).
    if(largestElement==NULL)
    {
        printf("No memory is allocated."); //This will run if the calloc function returns NULL and thus terminates the program.
        exit(0);
    }
    printf("\n");
    for(i = 0;i < size; i++)  
    {
       printf("Number %d: ",i+1);  //calloc function sets all the elements to 0 so we need to assign some values to compare the elements.
       scanf("%d",largestElement+i);
    }
    for(i = 1;i < size;i++)  
    {
       if(*largestElement < *(largestElement+i))  //Here we compare all elements to find which one is the largest one and then we assign it to the pointer.
           *largestElement = *(largestElement+i);
    }
    printf("The Largest element is :  %d",*largestElement);
    return 0;
}
