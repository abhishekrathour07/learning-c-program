#include <stdio.h>

void main()
{
    int arr1[100], freq[100];
    int n, i, j, count;
	
       printf("\n==================================================\n");	
       printf("\n Count frequency of each element of an array: \n");
       printf("\n==================================================\n");	

       printf("Enter the number of element stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i+1);
	      scanf("%d",&arr1[i]);
		  freq[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
               count++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], freq[i]);
        }
    }
}
