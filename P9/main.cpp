#include <iostream>
#include <vector>

std::vector<int> vec;

void compose(int num, int max) {

    for (int i = num < max ? num : max; i >= 1; i--) {
        vec.push_back(i);
        compose(num - i, i);
        vec.pop_back();
    }

    if (num == 0) {
        for (auto i:vec) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int num;
    std::cout << "请输入一个数：";
    std::cin >> num;
    std::cout << num << "的拆分数有：" << std::endl;
    compose(num, num);
    return 0;
}