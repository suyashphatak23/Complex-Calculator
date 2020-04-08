
// CREATED BY SUYASH SHIVAJI PHATAK
// C PROJECT 
// TOPIC : COMPLEX CALCULATOR USING C FUNCTIONS AND OPERATORS


/* Header files*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* List of functions */

void Operations();
void MatrixOperations();
void Angles();
void ArmstrongNo();
void Complex();
void DecimalBinary();
void EvenOrOdd();
void Factorial();
void Fibonacci();
void Floyd();
void Interest();
void LCM();
void PrimeComposite();
long Pascal();
void Log();
void nCr();
void Percentage();
void Power();
void ProfitLoss();
void RootOfEquation();
void Sorting();
void SumOfSeries();
void MultiplicationOfMatrix();
void Palindrome();
void SumOfIntegers();
void GuessGame(int amount_bet, int* inhand_cash);
void GuessMainGame();


/* Main Function*/


main(void)
{
	char start;
	int choice, repetition, loop;
	
	// Headings
	
	printf("\n_________________________________** COMPLEX CALCULATOR **_____________________________\n");
	printf("\n__________________________CREATED BY SUYASH SHIVAJI PHATAK_____________________________\n");
	
	// Start of Program
	
	printf("\n WELCOME TO THE PROGRAM !! HOW MAY I HELP YOU  :)\n ENTER  \'y' TO START & \'n' FOR EXIT:\t");
	scanf(" %c", &start);
	if(start == 'y'| start == 'Y'){
		printf("\n ENTER HOW MANY OPERATORS YOU WANT TO USE IN PROGRAM\n (The program will repeat for entered number of times) :\t");
		scanf("%d", &repetition);
		// Message displayed on screen when started
		for(loop=1 ; loop <= repetition; loop++){
			
			printf("\n\n READ THE FOLLOWING AND ENTER A \'NUMBER' AS PER YOUR REQUIREMENTS:\n\n Matrix:\n 1. Addition, Subtration, Transpose of matrix\t2. Matrix Multiplication\n\n Linear Algebra\n 3. Roots of Equation\t4. Factorial of a number\t5. Sum of series\t6. Sum of single interger\n 7. Interest(Simple and Compound)\t8. Value of power of a number\t9. Logarithm\n 10. Permutation and Combination\t 11. Profit or Loss\t 12. Prime or Composite\n\n Trignometry\n 13. Trignometric ratios of given angle\n\n Basic Calculator\n 14. +, -, *, /\t15. Odd or even\t16. Pascal\'s triangle\t17. Floyd\'s Triangle\n 18. Percentage\t 19. Fibonacci Series\t20. Armstrong Number\t21. Decimal to binary\n 22. Sorting of Given list in Asending Order\n\n Complex Number\n 23. Addition and Subtraction of complex numbers\n\n For Fun only \n 24. Guess Game");
			printf("\n___________________________________________________________________________\n");
			
			printf("\nENTER YOUR CHOICE(NUMBER) ACCORDING THE INSTRUCTIONS:\t");
			scanf("%d", &choice);
			
			//Fuction Calls
			if(choice == 1){
				printf("\n________________PROGRAM FOR ADDITION, SUBTRACTION AND TRANSPOSE OF A MATRIX__________________________\n\n");
				MatrixOperations();
			}
			else if(choice == 2){
				printf("\n________________PROGRAM FOR MULTIPLICATION OF A MATRIX__________________________\n\n");
				MultiplicationOfMatrix();
			}
			else if(choice == 3){
				printf("\n________________PROGRAM FOR ROOTS OF A EQUATION__________________________\n\n");
				RootOfEquation();
			}
			else if(choice == 4){
				printf("\n________________PROGRAM FOR FACTORIAL OF A NUMBER__________________________\n\n");
				Factorial();
			}
			else if(choice == 5){
				printf("\n________________PROGRAM FOR SUM OF GIVEN SERIES__________________________\n\n");
				SumOfSeries();
			}
			else if(choice == 6){
				printf("\n________________PROGRAM FOR SUM OF INTEGERS__________________________\n\n");
				SumOfIntegers();
			}
			else if(choice == 7){
				printf("\n________________PROGRAM FOR CALCULATING SIMPLE AND COMPOUND INTEREST__________________________\n\n");
				Interest();
			}
			else if(choice == 8){
				printf("\n________________PROGRAM FOR CALCULATIONG POWER OF A NUMBER__________________________\n\n");
				Power();
			}
			else if(choice == 9){
				printf("\n________________PROGRAM FOR LOGARITHM OF A NUMBER__________________________\n\n");
				Log();
			}
			else if(choice == 10){
				printf("\n________________PROGRAM FOR PERMUTATION AND COMBINATION OF A NUMBER__________________________\n\n");
				nCr();
			}
			else if(choice == 11){
				printf("\n________________PROGRAM FOR PROFIT AND LOSS__________________________\n\n");
				ProfitLoss();
			}
			else if(choice == 12){
				printf("\n________________PROGRAM FOR PRIME OR COMPOSITE__________________________\n\n");
				PrimeComposite();
			}
			else if(choice == 13){
				printf("\n________________PROGRAM FOR TRIGNOMETRIC RATIOS OF GIVEN ANGLE__________________________\n\n");
				Angles();
			}
			else if(choice == 14){
				printf("\n________________PROGRAM FOR SIMPLE OPERATIONS LIKE +, -, *, /__________________________\n\n");
				Operations();
			}
			else if(choice == 15){
				printf("\n________________PROGRAM FOR CHECKING EVEN OR ODD__________________________\n\n");
				EvenOrOdd();
			}
			else if(choice == 16){
				printf("\n________________PROGRAM FOR PASCAL'S TRIANGLE__________________________\n\n");
				Pascal();
			}
			else if(choice == 17){
				printf("\n________________PROGRAM FOR FLOYD'S TRIANGLE__________________________\n\n");
				Floyd();
			}
			else if(choice == 18){
				printf("\n________________PROGRAM FOR CALCULATING PERCENTAGE AND AGGREGATE OF A NUMBER__________________________\n\n");
				Percentage();
			}
			else if(choice == 19){
				printf("\n________________PROGRAM FOR CALCULATING FIBONACCI SERIES__________________________\n\n");
				Fibonacci();
			}
			else if(choice == 20){
				printf("\n________________PROGRAM FOR CALCULATING ARMSTRONG NUMBER__________________________\n\n");
				ArmstrongNo();
			}
			else if(choice == 21){
				printf("\n________________PROGRAM FOR CONVERTING DECIMAL TO BINARY NUMBER__________________________\n\n");
				DecimalBinary();
			}
			else if(choice == 22){
				printf("\n________________PROGRAM FOR SORTING OF A NUMBER__________________________\n\n");
				Sorting();
			}
			else if(choice == 23){
				printf("\n________________PROGRAM FOR ADDITION AND SUBTRACTION OF A COMPLEX NUMBER__________________________\n\n");
				Complex();
			}
			else if(choice == 24){
				printf("\n________________PROGRAM FOR GUESS GAME__________________________\n\n");
				GuessMainGame();
			}
			else{
				printf("\n\nENTER A VALID CHOICE AND PLEASE TRY AGAIN LATER!!!");
			}	
		}		
	}
	
	// For exit purpose
	else{
		printf("______________THANK YOU VISIT AGAIN :) _____________________\n\n");
		return 0;	
	}	
	return 0;	
}


// Global Fuctions 


void Operations(){
	float a,b,sum,sub,product,division;
    
    printf("Enter two numbers : \n");
    scanf("%f%f", &a, &b);
    
    sum=a+b;
    sub=a-b;
    product=a*b;
    division=a/b;
    
    printf("\n%f is addition of %f and %f\n", sum, a, b);
    printf("%f is subtraction of %f and %f\n", sub, a, b);
    printf("%f is product of %f and %f\n", product, a, b);
    printf("%f is division of %f and %f\n", division, a, b);
}

void MatrixOperations(){
	int row, column, i, j,matrix1[15][15],matrix2[15][15],sum[15][15], substract[15][15], transpose1[15][15], transpose2[15][15];
	printf("Enter a number of rows and columns:\n");
	scanf("%d%d", &row, &column);
	printf("Enter elements of first matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Enter elements of second matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("Sum of matrices is \n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			sum[i][j] = matrix1[i][j]+ matrix2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	printf("Substraction of matrices is \n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			substract[i][j] = matrix1[i][j]- matrix2[i][j];
			printf("%d\t", substract[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < row; i++){
    	for (j = 0; j < column; j++){
		  	transpose1[j][i] = matrix1[i][j];
 		}
 	}
  	
	printf("Transpose of the first matrix:\n");
 
	for (i = 0; i < column; i++) {
		for (j = 0; j < row; j++){
		  printf("%d\t", transpose1[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < row; i++){
    	for (j = 0; j < column; j++){
		  	transpose2[j][i] = matrix2[i][j];
 		}
 	}
 	
	printf("Transpose of the second matrix:\n");
 
	for (i = 0; i < column; i++) {
		for (j = 0; j < row; j++){
		  printf("%d\t", transpose2[i][j]);
		}
		printf("\n");
	}
}

void Angles(){
	double angle, sine, cos_ine, tan_gent, cot_angent, sec_ant, cosec_ant;
	printf("Enter the value of angle(in radians):\n");
	scanf("%lf", &angle);
	sine = sin(angle);
	
	sine = sin(angle);
	
	cos_ine = cos(angle);
	
	tan_gent = tan(angle);
	
	cot_angent = 1/tan_gent;
	sec_ant = 1/cos_ine;
	cosec_ant = 1/sine;
	
	sine = sin(angle);
	printf("Sin = %lf\nCos = %lf\nTan = %lf\nCot = %lf\nSec= %lf\nCosec = %lf\n", sine, cos_ine, tan_gent, cot_angent, sec_ant, cosec_ant);
}

void ArmstrongNo(){
	int n, sum = 0, t, remainder;
	
	printf("Input an integer:\n");
	scanf("%d", &n);

	t = n;
	while (t != 0) {
	    remainder = t%10;
	    sum = sum + (remainder*remainder*remainder);
	    t = t/10;
	}

	if (n == sum){
		printf("%d is an Armstrong number.\n", n);
	}
	else{
		printf("%d isn't an Armstrong number.\n", n);
	}
}

struct complex
{
   int real, img;
};

void Complex(){
	struct complex a, b, c, d;

   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);

   c.real = a.real + b.real;
   c.img = a.img + b.img;
   
   d.real = a.real - b.real;
   d.img = a.img - b.img;

   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);
   printf("Subtraction of the complex numbers: (%d) + (%di)\n", d.real, d.img);
}

void DecimalBinary(){
	int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

}

void EvenOrOdd(){
	int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d is an even number!", a);
    }
    else{
        printf("%d is a odd number!", a);
    }
}

void Factorial(){
	int c,n,f=1;
  	printf("Enter a number to calculate its factorial\n");
  	scanf("%d", &n);

  	for (c = 1; c <= n; c++)
   		f = f * c;
 
  	printf("Factorial of %d = %d\n", n, f);
}

void Fibonacci(){
	int n, first, second , next, c;
	printf("Enter number of terms:\n");
	scanf("%d", &n);
	
	for (c = 0; c < n; c++){
		if (c <= 1){
			next = c;
		}
    	else
	    {
	      next = first + second;
	      first = second;
	      second = next;
	    }
    	printf("%d\n", next);
	}
}

void Floyd(){
	int i, c=1, j, rows;
	printf("Enter number of rows of floyd\'s triangle:\n");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
}

void Interest(){
	float principle , rate, time;
	double amount, si, ci;
	
	printf("Enter Principle ,Rate of interest and Time:\n");
	scanf("%f%f%f", &principle, &rate, &time); 
	si = (principle * rate * time) /100;
	amount = principle*pow((1+rate/100), time);
	ci = amount - principle;
	
	printf("Simple Interest = %lf\nCompund Interest = %lf\nAmount = %lf", si, ci, amount);
}

void LCM(){
	printf("Still Working!");
}

void Log(){
		int num;
	double LogWithe, LogWitha;
	printf("Enter a number to find its logarithm with base e and base with 10:\n");
	scanf("%d", &num);
	
	LogWithe = log(num);
	LogWitha = log10(num);
	
	printf("log %d with base e = %lf\n",num, LogWithe);
	printf("log %d with base 10 = %lf\n",num,  LogWitha);
}

long find_ncr(int, int);
long find_npr(int, int);
long P_factorial(int);

long P_factorial(int n)
{
  int c;
  long result = 1;
 
  for (c = 1; c <= n; c++)
    result = result*c;
 
  return result;
}

void nCr(){
	int n, r;
   long ncr, npr;
 
   printf("Enter the value of n and r\n");
   scanf("%d%d",&n,&r);
   
   ncr = find_ncr(n, r);
   npr = find_npr(n, r);
   
   printf("%dC%d = %ld\n", n, r, ncr);
   printf("%dP%d = %ld\n", n, r, npr);
}

long find_ncr(int n, int r) {
   long result;
   
   result = P_factorial(n)/(P_factorial(r)*P_factorial(n-r));
   
   return result;
}
 
long find_npr(int n, int r) {
   long result;
   
   result = P_factorial(n)/P_factorial(n-r);
   
   return result;
}

void Percentage(){
	float eng, sci, maths, german, hindi, total;
    float percentage;
    printf("Enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f", &eng, &sci, &maths, &german, &hindi);
    total = eng + sci + maths + german + hindi;
    percentage =  total / 500 * 100;
    printf("Aggregate is %f\n", total);
    printf("Percentage is %f\n", percentage);
}


void Power(){
	long int power, num, index;
	printf("Enter a number and index to find its power:\n");
	scanf("%ld%ld", &num, &index);
	
	power = pow(num, index);
	printf("%ld raised to %ld is %ld", num, index, power);
}

void ProfitLoss(){
	int SP,CP,profit,loss;
	
	printf("Enter the SP and CP:\n");
	scanf("%d%d", &SP, &CP);
	profit = SP - CP;
	loss = CP - SP;
	if(SP>CP){
		printf("Profit of Rs.%d\n", profit);
	}
	else{
		printf("Loss of Rs.%d\n", loss);
	}
}

void RootOfEquation(){
	float a, b, c, r1, r2, d;

  printf ("Enter a, b & c where a*x*x + b*x + c = 0\n");
  scanf ("%f%f%f", &a, &b, &c);

  d = (b * b) - (4 * a * c);

  if (d < 0)
    {
      printf ("Roots of equeation are not real");
    }
  else
    {
      r1 = (-b + sqrt (d)) / (2 * a);
      r2 = (-b - sqrt (d)) / (2 * a);
      printf ("%f and %f are the roots of equation!", r1, r2);
    }
}

void Sorting(){
	int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

}

void SumOfSeries(){
	int n,i;
	int sum=0;
	printf("Enter the n i.e. max values of series: ");
	scanf("%d",&n);
	
	sum = (n * (n + 1)) / 2;
	
	printf("Sum of the series: ");
	for (i =1;i <= n;i++) {
		if (i!=n)
            printf("%d + ",i); 
		else
			printf("%d = %d ",i,sum);
	}
}

void MultiplicationOfMatrix(){
	 int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
}

void Palindrome(){
	int num, sum=0, t;
	printf("Enter a number to reverse it:\n");
	scanf("%d", &num);
	t=num;
	
	while(t!=0){
		sum = sum* 10;
		sum = sum + t%10;
		t= t/10;
	}
	if(sum == num){
		printf("Reversed number is palindrome number %d.\n", sum);
	}
	else{
		printf("Reversed Number: %d\n", sum);
	}
}

void SumOfIntegers(){
	int reminder, a, t, sum;
  sum=0;
  printf("Enter an integer to find its sum: ");
  scanf("%d", &a);
  t=a;
  while(t!=0){
      reminder = t%10;
      sum += reminder;
      t = t/10;
  }
 printf("Sum of the %d is %d ! ", a, sum);
}

void GuessGame(int amount_bet, int* inhand_cash){
	  int guess, answer;
	  printf("\nDice is rolled.\n");
	  printf("\nEnter a guess between 1 to 6:\n");
	  scanf("%d", &guess);
	  
	  srand(time(0)); 
	  answer = rand() % 6 + 1;
	  
	  if(guess == answer){
	  	(*inhand_cash) += 2 * amount_bet;
	  	printf("Yow win!!\n");
	  	printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
	  	printf("_________________________________________________________\n");
	  }
	  else{
	  	(*inhand_cash) -= amount_bet;
	  	printf("Try again later!!\n");
	  	printf("The answer was %d", answer);
	  	printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
	  	printf("_________________________________________________________\n");
	  }
}

void GuessMainGame(){
	int amount_bet, inhand_cash; 
  
    printf("Enter the Inhand_Cash you have right now: "); 
  
    scanf("%d", &inhand_cash); 
  
    while (inhand_cash > 0) { 
        printf("\nEnter the amount_bet you want to play for : "); 
        scanf("%d", &amount_bet); 
        if (inhand_cash == 0 || amount_bet > inhand_cash) 
            break; 
        GuessGame(amount_bet, &inhand_cash); 
    } 
  
    if (inhand_cash == 0 || amount_bet > inhand_cash) { 
        printf("\n :( Sorry you don't have enough cash to play more, "); 
        printf("Do come next time\""
               "\n"); 
        printf("\nThank You for playing  :) \n"); 
    }
}

void PrimeComposite(){
	 int n, c;

	  printf("Enter a number to check if it's prime\n");
	  scanf("%d", &n);
	
	  for (c = 2; c <= n/2; c++)
	  {
	    if (n%c == 0)
	    {
	      printf("%d is a composite number.\n", n);
	      break;
	    }
	  }
	
	  if (c == n/2 + 1)
	    printf("%d is prime.\n", n);	
}

long Pascal_factorial(int);

long Pascal(){
	int i, n, c;
 
  printf("Enter the number of rows to see in pascal triangle\n");
  scanf("%d",&n);
 
  for (i = 0; i < n; i++)
  {
    for (c = 0; c <= (n - i - 2); c++)
      printf(" ");
 
    for (c = 0 ; c <= i; c++)
      printf("%ld ",Pascal_factorial(i)/(Pascal_factorial(c)*Pascal_factorial(i-c)));
 
    printf("\n");
  }
}
long Pascal_factorial(int n)
{
  int c;
  long result = 1;
 
  for (c = 1; c <= n; c++)
    result = result*c;
 
  return result;
}

















