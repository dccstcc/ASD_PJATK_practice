#include <stdio.h>



int lamutoPartition (int A[], int p, int r) {
	
	int x = A[r];
	int i = p-1;
	int j = p;
	
	int temp = 0; 
	int temp2 = 0;
	
	for(j; j<=r-1; j=j+1) {
		if(A[j]<=x) {
			i=i+1;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	
	temp2 = A[i+1];
	A[i+1] = A[r];
	A[r] = temp2;
	
	return i+1;
}

void QS(int A[], int p, int r) {

if(p<r) {
	
	int q = lamutoPartition(A, p, r);
	QS(A, p, q-1);
	QS(A, q+1, r);	
}
}

int main(void) {
	
int A[] = {23,24,645,456,97,23,689,54};

QS(A, 0, 7);

int i = 0;
for(i; i<=7; i=i+1){
	printf("%i\n", A[i]);
}	

printf("%s\n%i\n","q wynosi", i);
	
return 0;
}
