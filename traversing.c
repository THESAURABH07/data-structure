    #include<stdio.h>
    void main()
    {
        int a[50],i,size;
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter the array elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("the array elements are\n");
        for(i=0;i<size;i++)
        printf("%d\t",a[i]);
    }