#include<stdio.h>
int main(){
	int a[]={1,3,2,9};
	int b[]={1,3,2,4,9,11};
	int length1=sizeof(a)/sizeof(a[0]);
	int length2=sizeof(b)/sizeof(b[0]);
//	int count=0;
	for(int i=0;i<length1;i++){
	for(int j=0;j<length1;j++){
		if(a[i]==a[j]){
//		count++;
		printf("%d\n",a[j]);
	     }
	   }
	}
	printf("\n");
	return 0;
}
