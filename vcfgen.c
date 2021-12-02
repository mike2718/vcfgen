#include <stdio.h>
int main()
{
    char xm[1055];
    char sj[34];
    char yx[255];
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
    return 0;
}
