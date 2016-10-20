#include <stdio.h>
#include <stdlib.h>

int count = 0;
int hr = 0, min = 0;
int m, n;
int visited[8], arr[8];

int check() {
    int hours = 0;
    int minutes = 0;
    for (int i = 0; i < hr; i++){
        hours = arr[i] + hours * 7;
        printf("%d", arr[i]);
    }
    printf(" : ");
    for (int j = hr; j < hr + min; j++){
        minutes = arr[j] + minutes * 7; 
       printf("%d", arr[j]);
    }
    printf("\n");
    printf("hr= %d, min= %d\n", hours, minutes);

    if (hours < n && minutes < m)
        return 1;
    return 0;
}
void tryMethod(int index) {
    if (index >= hr + min){
        if (check())
            count++;
        return;
    }

    for(int i = 0; i < 7; i++) {
        if (!visited[i]) {
            visited[i] = 1; // put i into the the spot
            arr[index] = i;
            tryMethod(index+1);
            visited[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    int temp_n = n - 1, temp_m = m - 1;
    //if (m == 1) hr = 1;
    //if (n == 1) min = 1;
	while (temp_n > 0) {
		temp_n /= 7;
		hr++;
	}
	while (temp_m > 0) {
		temp_m /= 7;
		min++;
	}
    if (hr + min > 7) {
        printf("0\n");
        return 0;
    }
    tryMethod(0);
    printf("%d\n", count); 
	return 0;
}
