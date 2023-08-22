//vCard生成器 v.0.1.0
//作用：
//  在当前目录下，生成名为my_card.vcf的vCard v.4.0文件
//用法：
//  % clang -Wall -Wpedantic -Wextra -Werror -g -O0 -std=c99 -o vcfgen vcfgen.c
//  % ./vcfgen
#include <stdio.h>
int main(void)
{
    char xm[14];   //"长孙无忌"
    char sj[19];   //"+86 138 2345 6789"
    char yx[255];  //https://stackoverflow.com/questions/7717573/what-is-the-longest-possible-email-address
    //char wz[2000];
    FILE *fp = NULL;

    printf("vCard生成器 ver.0.1.0\n");
    printf( "请输入姓名：");
    scanf("%s", xm);
    printf( "请输入手机：");
    scanf("%s", sj);
    printf( "请输入邮箱地址：");
    scanf("%s", yx);
    //printf( "请输入网址：");
    //scanf("%s", wz);

    fp = fopen("./my_card.vcf", "w");
    fprintf(fp, "BEGIN:VCARD\r\n");
    fprintf(fp, "VERSION:4.0\r\n");
    fprintf(fp, "FN:%s\r\n", xm);
    fprintf(fp, "TEL;VALUE=uri;TYPE=\"cell,voice\":tel:%s\r\n", sj);
    fprintf(fp, "EMAIL;TYPE=:%s\r\n", yx);
    //fprintf(fp, "URL:%s\r\n", wz);
    fprintf(fp, "END:VCARD\r\n");
    fclose(fp);
    printf("已写入my_card.vcf\n");
    return 0;
}
