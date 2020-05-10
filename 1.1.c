#include <stdio.h>

void showMessage(void);

int main() {
    int count;

    count = 0;

    while (count < 10) {
        showMessage();
        count += 1;
    }
    return(0);    
}

