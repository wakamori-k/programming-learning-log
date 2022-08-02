#include<iostream>

struct mystruct {
private:
    int a, b;
public:
    void set(int i, int j) {
        a = i;
        b = j;
    }
    void show() {
        std::cout<<a<<' '<<b<<std::endl;
    }
};

int main() {

    mystruct o1, o2, *op3;

    o1.set(1, 2);
    
    // オブジェクトが複製される
    o2 = o1;
    // op3はo1と同じオブジェクトを指す
    op3 = &o1;

    o1.set(3, 4);

    o1.show(); // 5 6
    o2.show(); // 2 4
    op3->show(); // 5 6

    return 0;
}