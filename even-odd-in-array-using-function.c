#include<stdio.h>
#define MAX 100

/*Here we are declaring a function definition
that is -

return type = int 
count_even = function name 
and the parameters/arguments are = (int arr[], n)

We are taking a variable even_count and initialising it with 0, and then we run a for loop,
and using the if condition we will check whether the input number in array of i mod 2 is equal to zero or not,
if it is then we increment the even_count++, and return the value of total even_counts at the end*/

int count_even (int arr[], int n)
{
  int even_count = 0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0)
    {
      even_count++;
    }
  }
  return even_count;
}


int count_odd(int arr[], int n)
{
  int odd_count = 0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2!=0)
    {
      odd_count++;
    }
  }
  return odd_count;
}

int main()
{
  int n, i, arr[MAX];
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the %d elements in array : ", n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }

    int even_count = count_even(arr, n);
    int odd_count = count_odd(arr, n);

    printf("The even elements are: %d\n", even_count);
    printf("The odd elements are: %d", odd_count);

    return 0;
}
