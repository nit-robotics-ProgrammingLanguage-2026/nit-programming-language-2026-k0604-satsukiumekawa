#include <stdio.h>

int main(void) {
    int input_value;
    long total_sum = 0; // 3の倍数でも5の倍数でもない数値を合算する変数

    scanf("%d", &input_value);

    // 入力値が負の数の場合はNGを出力して終了する
    if (input_value < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力値までループを回し、3の倍数と5の倍数を除外して合計を計算する
    for (int counter = 1; counter <= input_value; counter++) {
        if (counter % 3 == 0 || counter % 5 == 0) {
            continue;
        }
        total_sum += counter;
    }

    printf("%ld", total_sum);
    return 0;
}
