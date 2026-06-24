
#include<iostream>
#include<cstdlib>
#include<chrono>
#define MAX 500000


void swapp(int *p ,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;


}

void display(int A[],int n){

    int i;
    for(i=0;i<n;i++){
        std::cout<<A[i]<<"";

    }
    std::cout<<std::endl;
}

void bubble_sort(int A[],int n){
    int i ,j;
    for (i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swapp(&A[j],&A[i]);

            }
        }
    }

}

void selection_sort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int least=A[i];
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<least){
                least=A[j];
                pos=j;

            }
        }
        if(i !=pos){
            swapp(&A[i],&A[pos]);

        }
    }

}


int main ()
{
    int i, n,A[MAX];
    std::cout<<"Enter n:";
    std::cin>>n;
    for(i=0;i<n;i++){
        A[i]=rand()%100000;

    }
//    display(A,n);
   auto start= std::chrono::steady_clock::now();
       bubble_sort(A,n);

   auto end=std::chrono::steady_clock::now();
//    display(A,n);

   auto start1= std::chrono::steady_clock::now();
     selection_sort(A,n);
   auto end1=std::chrono::steady_clock::now();
  


   auto time_taken=std::chrono::duration_cast<std::chrono::nanoseconds>(end-start);
   auto time_taken1=std::chrono::duration_cast<std::chrono::nanoseconds>(end1-start1);
   std::cout<<"Time taken is for bubble_sort:"<<time_taken.count()*1e-9<< "s" << std::endl;
   std::cout<<"Time taken is for selection_sort:"<<time_taken1.count()*1e-9<< "s" << std::endl;



   return 0;



}