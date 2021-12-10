
//    Developed by: Md. Mahmudul Hasan
//       ID: 17511076,   BICT-03,
// Bangladesh University of Professionals

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int p, q, sum, z, i, j=0;
    int a[101];
    printf("\n\t   **MIDDLE TERM FINDER**\n\t   ----------------------\n\n\tDeveloped By: Mahmudul Hasan.\n");
    printf("\t\t  BICT-03\n  Bangladesh University of Professionals.\n******************************************\n\n\nEnter the coefficient of 'x square': ");
    scanf("%d", &p);
  printf("Enter the coefficient of 'x': ");
    scanf("%d", &sum);
  printf("Enter the number: ");
    scanf("%d", &q);
    z = (p*q);  
    for(i=1;i<=z;i++)
    {
        if(z%i==0)
        {
            a[j++]=i;
        }
    }
    getchar();
    
/*    printf("\n\n\tThe factors are:");
    for(int k =0;k<j;++k)
    {printf(" %d ",a[k]);
    }
*/
    
for (int m=0; m<j; m++){
    for (int n=0; n<j; n++){
        if(a[m] != a[n]){
            if(a[m]*a[n]==z){
                if(a[m]+a[n] == sum)
                    { printf("\n\n  >> The middle terms are: %d & %d.\n  There will be addition.\n\n", a[m], a[n]);
                    }
                if(a[m]-a[n] == sum)
                    { printf("\n\n  >> The middle terms are: %d & %d.\n  There will be subtraction.\n\n", a[m], a[n]);
                    }
              }
         }
    }
}
}
