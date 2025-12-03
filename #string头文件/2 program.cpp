#include<string>
声明 + 初始化 ： string str = "Hello,World!";
可用加法相加 ：str1 = "hello"; str2 = "world"; str = str1 + str2 = "helloworld";

函数: (string str = "Hello,World")
1.size()	返回字符串长度
str.size() 
2.empty()	返回bool
str.empty()
3.[n]	返回指定字符
str[n]
4.substr(开始字符，长度)	  返回字符串
str.substr(star,len)
5.find()	返回从开头查找字符的首字母位置——————————若找不到返回std::string::npos，必须要有 pos != std::string::npos 
str.find("Wor")
6.rfind()	返回从末尾查找字符的首字母位置——————————若找不到返回std::string::npos，必须要有 pos != std::string::npos
str.rfind("Wor")
7.replace(开始字符，替换几个字符，"替换什么")
str.replace(star,5,"cpp")
8.append()	向字符后添加
str.append("!")
9.insert()	向字符中插入
str.insert(pos,"  ")