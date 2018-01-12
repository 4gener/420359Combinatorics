#include <iostream>
#include <vector>

void fullPermute(std::vector<int> &vec, std::vector<bool> &used) {
    for (int i = 0; i < used.size(); i++) {
        if (!used[i]) {
            vec.push_back(i + 1);
            used[i] = true;
            fullPermute(vec, used);
            vec.pop_back();
            used[i] = false;
        }
    }

    if (vec.size() == used.size()) {
        for (auto item:vec) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int num;
    std::cout << "请输入一个数字：";
    std::cin >> num;

    std::vector<int> vec;
    std::vector<bool> used(num, false);

    std::cout << num << "的全排列为：" << std::endl;
    fullPermute(vec, used);
}