#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//method 1

float findsqrt(int num)
{
    int start = 0, end = num;
    int mid;
    float ans;
    
    while (start <= end)
    {
        // find mid binary search
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == num)
        {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < num)
        {
            // first start value should be added to answer
            ans = start;
            // then start should be changed
            start = mid + 1;
        }
        else
        {
            // Decrement end if integral part
            // lies on the left side of the mid
            end = mid-1;
        }
    }
     // To find the fractional part
    // of square root upto 5 decimal
    float incre = 0.1;
    for (int i = 0; i < 5; i++)
    {
        while(ans*ans<=num)
        {
            ans += incre;
        }
        ans = ans - incre;
        incre = incre/10; 
    }
    return ans;
}

//method 2

float numsqur(float num)
{
    return pow(2, 0.5*log2(num));
}

int main()
{
    int a;
    printf("enter number : ");
    scanf("%d", &a);
   
    
    //method 1;
    float b = findsqrt(a);
    printf("%f\n", b);
    //method 2
    printf("%f\n", numsqur(a));
    //method 3
    printf("%f", sqrt(a));
    return 0;
}
