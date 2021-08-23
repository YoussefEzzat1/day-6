# include <stdio.h>
# include <stdlib.h>

int main(){
	
    FILE *f;
    
     f= fopen ("day6.txt", "r");
    printf("File opended successfully\n");
    printf("String input from the file:\n ");
    
  	char x;
	int y = 0;
    int i = 0;
    
    while(1){
    x = fgetc(f);
    if(x==EOF)
        break;
   	else
        printf("\n%c ", x);
     }
     
    printf("Reserved string:\n");
    fseek(f,0,SEEK_END);
    y = ftell(f);
   
    while(i < y){
    i++;
    fseek(f,-i,SEEK_END);
    printf("\n %c",fgetc(f));
    }
    printf(" \nThe reserved string successfully added vto the file \n");
    
	return 0;
}
