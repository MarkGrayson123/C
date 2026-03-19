#define _CRT_SECURE_NO_WARNINGS 1

//1.键盘输入的两个数的大小关系
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        if (a < b)
//            printf("%d<%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}

//2.KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的线段图案。
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        while (a) {
//            printf("*");
//            a--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//3.KiKi想知道，已经给出的三条边 a、b、c 能否构成一个非退化三角形，如果能构成，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//【名词解释】
//非退化三角形：三条边长均大于 0 且任意两边之和均大于第三边的三角形。
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b > c && a - b < c) {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//4.打印用“ * ”组成的“空心”正方形图案
//#include <stdio.h>
//
//int main() {
//    int a, i, j;
//    while (scanf("%d", &a) != EOF) {
//        for (i = 0; i < a; i++) {
//            for (j = 0; j < a; j++) {
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//5.牛牛有一个矩阵 a_{ n,m }，他想编写一个程序，计算转置后的矩阵 a_{ n,m }^ {\top}。
//
//【名词解释】
//\hspace{ 15pt }【转置矩阵】转置矩阵是将矩阵的行列互换得到的新矩阵。
//#include <stdio.h>
//
//int main() {
//    int n, m, i, j;
//    while (scanf("%d %d", &n, &m) != EOF) {
//        int arr1[n][m], arr2[m][n];
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < m; j++) {
//                scanf("%d ", &arr1[i][j]);
//                arr2[j][i] = arr1[i][j];
//            }
//        }
//        for (i = 0; i < m; i++) {
//            for (j = 0; j < n; j++) {
//                printf("%d ", arr2[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//6.对于在一行上输入的十个整数 a_1, a_2, \dots, a_{ 10 }，要求将它们逆序输出。
//【名词解释】
//\hspace{ 15pt }逆序输出：按照输入相反的顺序（越晚输入的越早输出）进行输出。
//#include <stdio.h>
//
//int main() {
//    int arr1[10];
//    for (int i = 0; i < 10; i++) {
//        scanf("%d ", &arr1[i]);
//    }
//    for (int i = 9; i >= 0; i--) {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}