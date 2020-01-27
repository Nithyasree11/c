void main()
{
    int a[30],i,n,small;
 
    printf(" Enter Number of Elements in Array :");
    scanf("%d",&n);
 
    /* Read Elements in an array  */
    printf(" \n Enter the Elements: ");
    for(i=0 ; i < n ; i++)
        scanf("%d",&a[i]);
 
    small = a[0];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] < small )
            small = a[i];
    }
 
    printf(" Smallest Element in the Array is : %d",small);
 
    getch();
}