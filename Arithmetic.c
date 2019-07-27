{
    
    int a, n, d, tn, i;
    int sum = 0;
    scanf("%d %d %d",&N,&A,&D);
    
    sum = (n * (2 * a + (n - 1) * d)) / 2;
    tn = a + (n - 1) * d;
    for(i = a; i <= tn; i = i + d)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
    return 0;
}
