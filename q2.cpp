#include <bits/stdc++.h>
 #include <iostream>
using namespace std; 
 static int flag; 
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

int bubbleSort(int arr[], int n)  
{  
    int i, j; 
	flag=0; 
    for (i = 0; i < n-1; i++)      
    { 
    for (j = 0; j < n-i-1; j++)  
       { if (arr[j] > arr[j+1])  
           { swap(&arr[j], &arr[j+1]); 
            ++flag;
       		 }
		}
    }
    return flag;
}  
 
int main()  
{  
    int a,b,c;
    cin>>a;
    while(a--)
    {
    	cin>>b;
    	int m[b];
		for(int k=0;k<b;k++)
		{
			cin>>m[k];
		 } 
		 bubbleSort(m, b);
		 if((((b*(b-1))/2)-1)>=flag)
		 {
		 	cout<<"Yes"<<endl;
		 }
		 else
		 {
		 	cout<<"No"<<endl;
		 }
		 
	}
   
    return 0;  
}  

