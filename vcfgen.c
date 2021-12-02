#include <stdio.h>
int main()
{
    char xm[100];
    char sj[100];
    char yx[200];
    FILE *fp = NULL;

    printf("vCard生成器 ver.0.1.0\n");
    printf( "请输入姓名：");
    scanf("%s", xm);
    printf( "请输入手机：");
    scanf("%s", sj);
    printf( "请输入邮箱地址：");
    scanf("%s", yx);

    fp = fopen("./my_card.vcf", "w");
    fprintf(fp, "BEGIN:VCARD\r\n");
    fprintf(fp, "VERSION:4.0\r\n");
    fprintf(fp, "FN:%s\r\n", xm);
    fprintf(fp, "EMAIL;type=INTERNET;type=WORK;type=pref:%s\r\n", yx);
    fprintf(fp, "TEL;type=CELL:%s\r\n", sj);
    fprintf(fp, "END:VCARD\r\n");
    fprintf(fp, "\r\n");
    fclose(fp);
    return 0;
}
