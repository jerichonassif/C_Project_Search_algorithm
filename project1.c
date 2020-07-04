#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char **argv)
{
		int start;
		printf("enter any key to start this program or enter -1 to exit from program\n");
		scanf("%d", &start);
		
		while(start != -1){
			srand(time(0));
				
			int size ;
			printf("enter array size\n");
			scanf("%d", &size);
			int *arr = (int *)malloc(size);
			
			for(int i = 0 ; i < size ; i++){
				arr[i] = 1 + rand() % 10 ; //10-1+1
			}
			
			printf("the arr = { \n");
			for(int i = 0 ; i < size ; i++){
				printf("%d\n", arr[i]);
			}
			printf("}\n");
			
			int y = 0;
			printf("enter number to search it :\n");
			scanf("%d", &y);
			
			int o = 0;
			for(int i = 0 ; i < size ; i++){
				if(arr[i] == y){
					o++;
				}
			}
			printf("number is %d found : %d\n\n" , y, o );	
			
			printf("enter any key to start this program or enter -1 to exit from program\n");
			scanf("%d", &start);
		}
		
		
		
	return 0;
}