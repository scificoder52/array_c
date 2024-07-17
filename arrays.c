
// #include <stdio.h>

// int main() {
//     int price[5];
//     int totalPrice = 0;

//     for (int i = 0; i < 5; i++) {
//         printf("Enter price of item %d: ", (i + 1));
//         scanf("%d", &price[i]);
//         totalPrice += price[i]; 
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("Price of item %d is: %d\n", (i + 1), price[i]);
//     }

//     printf("Total price of all items is: %d\n", totalPrice);

//     return 0;
// }


  
//  #include<stdio.h>

//   int main(){
//     int marks[2][3];

//    for(int row=0;row<2;row++){
       
//        for(int col=0;col<3;col++){
//         printf("Enter the marks for student:%d,subject:%d:",row+1,col+1);
//         scanf("%d",&marks[row][col]);
//        }
//    }
   
//   return 0 ;
// }



//  #include<stdio.h>

//   int main(){
//     int num[5];
//     int sum=0;
//     for(int i=0;i<5;i++){
//       printf("enter a number %d:\n",i+1);
//       scanf("%d",&num[i]);
//       sum+=num[i];
//     }
//     printf("total sum is:%d",sum);

//   return 0 ;
// }


// #include<stdio.h>
 
//   int main(){
//     int num[5];
//     int sum=0;
//     int avg;
//     for(int i=0;i<5;i++){
//       printf("enter a number %d:",i+1);
//       scanf("%d",&num[i]);
//       sum+=num[i];
//     }
//     avg=sum/5;
//     printf("total sum is:%d\n",sum);
//     printf("finally avg is:%d",avg);

//   return 0 ;
// }


//  #include<stdio.h>
//   int main(){

//   int n,targetNum,count=0;
//   printf("enter size of array,you want:");
//   scanf("%d",&n);
//   int arr[n];
//   printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//   printf("enter number you want to check:");
//   scanf("%d",&targetNum);

//   for(int i=0;i<n;i++){
//     if(arr[i]==targetNum){
//       count++;
//     }
//   }
//   printf("so number %d occur %d times",targetNum,count);
// printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//   return 0 ;
// }


// #include <stdio.h>

// int main() {
//     int n;
 
//     printf("What size of array do you want: ");
//     scanf("%d", &n);
 
//     int arr[n];
 
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize the maximum and minimum element variables
//     int max = arr[0];
//     int min = arr[0];
 
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
 
//     printf("The maximum element in the array is: %d\n", max);
//     printf("The minimum element in the array is: %d\n", min);

//     return 0;
// }

