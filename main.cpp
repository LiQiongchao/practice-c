#include <iostream>
#include <time.h>

int main() {

}

int random() {
    int A[20] = {};
    int index = 0, sum = 0, ave = 0, countOfGreaterAve = 0, arrLength = 20;
    srand( (unsigned)time( NULL ) );
    while (index < arrLength) {
        int random = rand() % 100 + 1;
        if (random >= 10) {
            printf("%d \n", random);
            sum += random;
            A[index] = random;
            index += 1;
        }
    };
    arrLength = sizeof(A)/sizeof(A[0]);
    ave = sum / arrLength;
    for (int i = 0; i < arrLength; ++i) {
        if (A[i] > ave) {
            countOfGreaterAve++;
        }
    }
    printf("arrSize:%d , ave: %d, count: %d \n", arrLength, ave, countOfGreaterAve);
    return countOfGreaterAve;
}

int sum() {
    int i, sum=0;
    for(i=1;i<=1000;i++){
        if (i % 17 == 0) {
            sum += i;
        }
    }
    return sum;
}

int suShu() {
    int i,j,sum=0,count=0;
    for(i=101;i<=500;i+=2){
        for(j=2;j<i/2;j++)
            if(i%j==0)
                break;
        if(j>=i/2){
            count++;
            sum=sum+i;
        }
    }
    printf("%.2f",(float)sum/count);
    return (float) sum/count;
}