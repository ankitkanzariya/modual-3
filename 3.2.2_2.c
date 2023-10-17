#include <stdio.h>
 
int main(void)
{
    int a[10],n;
    int i,odd=0,even=0,total=0;
    
    printf("Enter number of elements");
    scanf("%d",&n);
	
    for (i = 0; i < n; i++){
    	printf("enter elements number %d: ",i+1);
    	scanf("%d",&a[i]);
    	
    	total+=a[i];
    	if(a[i]%2==1){
    		odd++;
		}else{
			even++;
		}
	}
	printf("odd: %d \n",odd);
	printf("even: %d \n",even);
	printf("total: %d \n",total);
	
	return 0;
}
	
	
