#include <stdio.h>
// 符号常量
/**
* 符号常量
* 通常使用大写字母拼写，#define
*/
#define LOWER   0
#define UPPER   600
#define SETP    20

int main(int argc, char *argv[]) {
    int fahr;

    printf("======= %s ======= \n", "摄氏度和华氏度对照表");
    for (fahr = LOWER; fahr <= UPPER; fahr += SETP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 1;
}