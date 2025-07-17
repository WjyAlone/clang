#include <stdio.h>   // 头文件包含

#define PI 3.14159    // 宏定义
#define ConstContext 1.0
// 函数声明
int add(int a, int b);

int main() {         // 主函数
    // 变量声明
    int num1, num2;
    float anger = 1.5f;
    // 用户输入
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // 函数调用
    const int sum = add(num1, num2);

    // 输出结果
    printf("Sum: %d\n", sum);

    return 0;        // 返回 0 表示程序成功执行
}

// 函数定义
int add(const int a, const int b) {
    return a + b;
}