# vCard生成器

## 简介

用过很多vCard生成器，都很烂，没办法处理中文人名，于是自己做一个v.4.0 vCard的生成器。

## 用法

```
% clang -o vcfgen vcfgen.c && ./vcfgen
vCard生成器 ver.0.1.0
请输入姓名：张三
请输入手机：13823456789
请输入邮箱地址：user@example.com
```

默认名片生成在和可执行文件相同目录下，文件名为`my_card.vcf`

Arch Linux下默认生成CRLF行结尾、无BOM、UTF-8的.vcf文件。

## 生成QR码

```
% cat my_card.vcf | qrencode -o my_card.png
```

