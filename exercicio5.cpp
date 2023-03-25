#include <iostream>
#include <string>

void inverteString(std::string str){
    std::cout << "String original: " << str << std::endl;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    std::cout << "String invertida: " << str << std::endl;
}
int main() {
    std::string str = "Hello, world!";// String de exemplo 1
    inverteString(str);
    str = "exemplo"; // String de exemplo 2
    inverteString(str);
    return 0;
}
