#include <stdio.h>
#include <stdbool.h>

int main(){

int choice;
bool process = false;
//Declarations: 
int col, row;
int x, y;
int column, rows;
int i, j, k, result;

for(int number = 1; number <= 10; number++){
    printf("Loop # %d\n", number);
}

do{

    printf("Enter # of loop to interact: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        for(col  = 5; col >=1; col--){
            for(row = 1; row <= col; row++){
            printf("%d ", row);
        }
        printf("\n");
        }
        break;
        
        case 2:
        for(x = 1; x <= 5; x++){
            for(y = 1; y < x; y++){
                printf("_");
            }
            printf("%d\n", y);
        }
        
        break;
        
        case 3:
        for(column = 5; column >=1; column--){
            for(rows = 1; rows<=column; rows++){
                printf("%d ", rows);
            }
            printf("\n");
        }
        break;

        case 4:
        for(col = 1; col<=5; col++){
            for(row = 1; row<=col; row++){
                printf("* ", row);
            }
            printf("\n");
        }
        break;

        case 5:
        for(x = 1; x <= 5; x++){
            for(y = 1; y <= x; y++){
                printf("%d ", x);
            }
            printf("\n");
        }
        break;

        case 6:
        for(col = 1; col <= 5; col++){
            for(row = 1; row<= 5; row++){
                printf("%d ", col);
            }
            printf("\n");
        }
        break;

        case 7:
        printf("Row: ");
        scanf("%d", &row);

        printf("Column: ");
        scanf("%d", &col);

        for(column = 1; column <= col; column++){
            printf("%d\t", column);
        }
        printf("\n");

        for(rows = 2; rows < row + 1; rows++){
            printf("%d\t", rows);
            for(k = 1; k <col; k++){
                result = j + k;
                
                printf("%d\t", result + 1);
            } 
            printf("\n");
        }
        break;
        
    }
    
    printf("Enter 0 to terminate 1 to continue: ");
    scanf("%d", &choice);

    if(choice == 0){
        process = true;
    }

}while(!process);

    return 0;
}