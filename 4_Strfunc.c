// strfunc.c

#include<stdio.h>
#include<string.h>      // 文字列の関数
#include<stdlib.h>      // 文字列の型変換、ヒープ

// 文字列の長さ
size_t my_strlen(const char* s){
    size_t n1;
    for(n1 = 0; s[n1] != '\0'; n1++);
    return n1;
}

// 文字列データの複製
char* my_strcpy(char* to2, const char* from2){
    size_t n2;
    for(n2 = 0; from2[n2] != '\0'; n2++){
        to2[n2] = from2[n2];
    }
    to2[n2] = '\0';       // to[n]をto[4]にするとiniaになる
    return to2;
}

// 文字列データの連結 (自作)
char* my_strcat1(char* to3, const char* from3){
    size_t to3_len = my_strlen(to3);
    size_t from_len = my_strlen(from3);
    for(size_t n3 = 0; n3 < from_len; n3++){
        to3[n3 + to3_len] = from3[n3];
    }
    return to3;
}

// 文字列データの連結
char* my_strcat2(char* to4, const char* from4){
    size_t to4_len = my_strlen(to4);
    my_strcpy(&to4[to4_len], from4);        // &でchar型から*charに変更
    return to4;
}

// 文字列が正しいか判断
int my_strcmp(char* to5, char* from5){
    size_t to5_len = my_strlen(to5);
    size_t from5_len = my_strlen(from5);
    if (to5_len < from5_len){
        to5_len = from5_len;
    }
    for(int n5 = 0; n5 < to5_len; n5++){
        if (to5[n5] != from5[n5]){
            return to5[n5] - from5[n5];
        }
    }
    return 0;
}


int main(void){
    const char* txt1 = "qwertyuiop";
    char s1[20], t1[20];
    char s2a[20] = "INIAD", t2a[] = " Univ";
    char s2b[20] = "INIAD", t2b[] = " Univ";
    char s2c[20] = "INIAD", t2c[] = " Univ";
    char s3[] = "INIAD", t3[] = "INIA", u3[] = "INIAD", v3[] = "INIAD_Univ";
    char s4[] = "12.3";
    char s5[] = "KANATA 1F10190019", s5a[20], s5b[20], s5c[20];
    int s5d;
    char s6[20], s6a[] = "KANATA";
    int s6b = 2000;
    
    
    printf("%lu\n", strlen(txt1));
    printf("%lu\n\n", my_strlen(txt1));

    strcpy(s1, "INIAD");
    my_strcpy(t1, "iniad");
    printf("%s\n", s1);
    printf("%s\n\n", t1);

    // printf("%ld\n", sizeof(s2b)); // 20
    // printf("%ld\n", sizeof(t2b)); // 6
    strcat(s2a, t2a);
    my_strcat1(s2b, t2b);
    my_strcat1(s2c, t2c);
    printf("%s\n", s2a);
    printf("%s\n", s2b);
    printf("%s\n\n", s2c);

    printf("%d\n", strcmp(s3, t3));
    printf("%d\n", my_strcmp(s3, t3));
    printf("%d\n", strcmp(s3, u3));
    printf("%d\n", my_strcmp(s3, u3));
    printf("%d\n", strcmp(s3, v3));
    printf("%d\n\n", my_strcmp(s3, v3));

    printf("%d\n", atoi(s4));       // Ascii To Int 
    printf("%ld\n", atol(s4));      // Ascii To Long
    printf("%lld\n", atoll(s4));    // Ascii To Long Long
    printf("%f\n\n", atof(s4));     // Ascii To Float

    // 正規表現っぽいやつ
    sscanf(s5, "%s %s", s5a, s5b);
    sscanf(s5, "%s 1F1019%d", s5c, &s5d);       // 数字はポインタ
    printf("Name：%s  Number：%s\n", s5a, s5b);
    printf("Name：%s  Number：%d\n\n", s5c, s5d);

    // .format()
    sprintf(s6, "%s %d", s6a, s6b);
    printf("%s\n\n", s6);


    return 0;
}