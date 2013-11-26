#include <stdio.h>

/**
* %d    按照十进制整型数打印
* %6d   按照十进制整型数打印，至少6个字符宽
* %f    按照浮点数打印
* %6f   按照浮点数打印，至少6个字符宽度
* %.2f  按照浮点数打印，小数点后有两位小数
* %6.2f 按照浮点数打印，至少6个字符宽度，小数点后有两位小数
*/
int main(int argc, char *argv[]) {
    int fahr;

    printf("======= %s ======= \n", "摄氏度和华氏度对照表");
    for (fahr = 0; fahr <= 300; fahr += 30) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 1;
}