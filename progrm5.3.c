#define ACCURACY 0.0001
main()
{
int n,count;
float x,term, sum;
printf("Enter value of x:");
scanf("%f",&x);
n = term = sum = count = 1;
while(n <=100)
    {
    term = term*x/n;
    sum = sum + term;
    count = count +1;
    if(term < ACCURACY)
        n = 999;
        else
            n = n +1;
    }
    printf("Term = %dSum = %f\n",count, sum);
}
