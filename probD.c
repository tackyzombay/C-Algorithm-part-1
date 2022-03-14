#include<stdio.h>

int main(){
	int cases;
	
	scanf("%d",&cases);
	
	for(int i=0;i<cases;i++){
		int banyak, red, black;
		int second=0;
		scanf("%d %d %d",&banyak,&red,&black);
		int temp1 = red;
		int temp2 = black;
		int x=black+red;
		
		while(x<=banyak){
		second++;
		red = temp1;
		black = temp2;
		
		if(second%4==0){
		temp1 = temp1 - (temp1/3);
		}
		
		else if (second%4!=0){
		temp1= temp1*2;
		}
		
		if(second%3==0){
		temp2= temp2-((temp2*4)/5);
		}
		
		else if(second%3!=0){
		temp2= temp2*3;
		}
		
		x=temp1+temp2;
	}

	printf("Case #%d: %d",i+1,second-1);
		if(black>red){
 		printf(" Black %d\n",black-red);
	}
	
		else if(red>black){
		printf(" Red %d\n", red-black);
  	}
  	
  	else{
   	printf(" None 0\n");
  	}
}
 
 return 0;
}
