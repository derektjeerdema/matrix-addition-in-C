#include <stdio.h>
#include <stdlib.h>

int matrixFunction(int rows, int columns){
//create function for creating and adding matricies
//create vaariables for row and colums values
  int rowValues;
  int columnValues; 
//create malloc for matrix a, b, and c. 
  int (*matrixa)[columns] = malloc(sizeof(float[rows][columns]));
  int (*matrixb)[columns] = malloc(sizeof(float[rows][columns]));
  int (*matrixc)[columns] = malloc(sizeof(float[rows][columns]));

//have user enter matrix A
   printf("Enter Matrix A\n");
 

for (rowValues = 0; rowValues < rows; rowValues++)
for (columnValues = 0; columnValues < columns; columnValues++)
   scanf("%d", &matrixa[rowValues][columnValues]);
//have matrix let user enter desired number of integer values defined by the number of rows and columns 

//have user enter matrix B
   printf("Enter Matrix B\n");
 
  for (rowValues = 0; rowValues < rows; rowValues++)
  for (columnValues = 0 ; columnValues < columns; columnValues++)
   scanf("%d", &matrixb[rowValues][columnValues]);
//have matrix let user enter desired number of integer values defined by the number of rows and columns  

   printf("A + B = \n");
//print A + B = 
 
  for (rowValues = 0; rowValues < rows; rowValues++) {
  for (columnValues = 0 ; columnValues < columns; columnValues++) {
    matrixc[rowValues][columnValues] = matrixa[rowValues][columnValues] + matrixb[rowValues][columnValues];
//set matrix C to be the addition of both matrix A and matrix B  

  printf("%d\t\n", matrixc[rowValues][columnValues]);
//print values for matrix C
      }
   }
return 0;
}
 
int main(){
//create function

//define integer variables for number of rows and columns
  int rows;
  int columns;


//have user enter the number of rows and columns
  printf("Please enter the number of rows:\n");
  scanf("%d", &rows);

  printf("Please enter the number of columns:\n");
  scanf("%d", &columns);

matrixFunction(rows, columns);

 
   return 0;
}