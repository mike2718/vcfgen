# vCard生成器

## 简介

用过很多.vcf生成器，都很烂，于是自己做一个。

## 用法

```
% clang -o vcfgen vcfgen.c && ./vcfgen
vCard生成器 ver.0.1.0
请输入姓名：张三
请输入手机：13823456789
请输入邮箱地址：user@example.com
```

默认名片生成在和可执行文件相同目录下，文件名为`my_card.vcf`

Arch默认生成无BOM、CRLF结尾、UTF-8的.vcf文件。

