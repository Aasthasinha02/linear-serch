#include <stdio.h>
//-------------------------------------------------------------------------------------
/**linearsearch function takes input array,total numbers in the array and 
the value to be found as input and returns the index of the value found(if present)**/
//-------------------------------------------------------------------------------------
int linearsearch(int arr[],int num,int valuetofind)
{
    
    int i = 0;
    int foundIndex = -1;
    
    for(i=0;i<num;i++)
    {
        if(arr[i]==valuetofind)
        {
            foundIndex = i;
            break;  // We've found our value, now break from loop
        }
           
    } // reached end of the array
    
    return foundIndex;
}
//display function displays the input Array
void display(int inputArray[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d ", inputArray[i]);
    }
    printf("\n");
}
//main function to implement linear search
int main()
{
    
    int inputArray[]={5,10,3,45,20};
    int num= sizeof inputArray/sizeof inputArray[0];
    int valuetofind= 20;
    int found = -1;  // not found
    
    display(inputArray, num);
    
    found = linearsearch(inputArray,num,valuetofind);
    if (found != -1)
    {
        printf("Value %d found at index %d!\n", valuetofind, found);
    }
    else
    {
        printf("Value %d NOT found!\n", valuetofind);
    }
    return 0;
}