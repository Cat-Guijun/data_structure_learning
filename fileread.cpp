#include <fstream>
#include <iostream>
#include <string>

int main() {
    // 打开文件
    std::ifstream f1("D:\\data_structure_learning\\README.md");
    // 检查文件是否成功打开
    if (!f1.is_open()) {
        std::cerr << "error" << std::endl;
        return 1;
    }

    std::string s;
    // 按行读取文件内容
    while (std::getline(f1, s)) {
        std::cout << s << std::endl;
    }

    // 关闭文件
    f1.close();
    return 0;
}