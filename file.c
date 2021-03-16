#include<stdio.h>
#include<math.h>


int main()
{
    int arr[100];
    int l;
    int c;
    printf("*********MENU**********\n");
    printf("1.Largest element of the array.\n");
    printf("2.Calculate Standard deviation. \n");
    printf("3.Insert element in given location.\n");
    printf("4.Add elements at the start,middle or end.\n");
    printf("5.Reverse the array.\n");
    printf("Enter your choice: ");
    scanf("%d",&c);
    
    
    
    
    
    
    printf("Enter the number of elementsin the array: ");
    scanf("%d",&l);
    printf("Now enter the array elements: \n");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    switch(c)
    {
        case 1: for (int i = 1; i < l; ++i) 
        {
            if (arr[0] < arr[i])
                arr[0] = arr[i];
        } printf("The Largest element of the array is: %d",arr[0]); break;
        
        case 2: float sum = 0.0, mean, SD = 0.0;
                int i;
                for (int i = 0; i < l; ++i) {
                    sum += arr[i];
                                        }
                mean = sum / l;
                for (i = 0; i < l; ++i)
        SD += pow(arr[i] - mean, 2);
        int x= sqrt(SD / l);
        printf("The Standard deviation is: %d",x); break;
        case 3:
            printf("Enter the element to be inserted and the required position: ");
            int ele,pos;
            scanf("%d%d",&ele,&pos);
            l++;
            for (i = l-1; i >= pos; i--)
                arr[i] = arr[i - 1];
 
        
            arr[pos - 1] = ele;
 
        
            for (i = 0; i < l; i++)
            printf("%d ", arr[i]);
            printf("\n"); break;
        case 4:
        
    }
}