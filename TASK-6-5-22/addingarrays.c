#include<stdio.h>
void addarray(int a[],int b[], int c[])
{
//adding two arrays
    for(int i=0;i<6;i++){
        c[i]=a[i]+b[i];
    }
        printf("\n");
    printf("addded array elemenst are:\t");
    for(int m=0;m<6;m++){
        printf("%d\t",c[m]);
    }
}
    
    void main()
    {
    //Declaring and initilaizing two arrays
    int a[6]={1,2,3,4,5,6};
    int b[6]={7,8,9,10,11,12};
    //declaring third array
    int c[6];
    //printing 1st array
    printf("1st array elemenst are:\t");
    for(int j=0;j<6;j++){
        printf("%d\t",a[j]);
    }
    printf("\n");
     printf("2nd array elemenst are:\t ");
    for(int k=0;k<6;k++){
        printf("%d\t",b[k]);
    }
    
      addarray(a,b,c);
     
    }


    

