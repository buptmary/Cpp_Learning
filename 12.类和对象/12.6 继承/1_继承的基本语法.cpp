#include <iostream>
using namespace std;

// 公共页面
class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登录、注册...(公共头部)" << endl;
    }

    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }

    void left()
    {
        cout << "Java, Python, C++, ...(公共分类列表)" << endl;
    }
};

// Java页面
class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java 学科视频" << endl;
    }
};

// Python页面
class Python : public BasePage
{
public:
    void content()
    {
        cout << "Python 学科视频" << endl;
    }
};

// C++页面
class CPP : public BasePage
{
public:
    void content()
    {
        cout << "C++ 学科视频" << endl;
    }
};

void test1()
{
    // Java 页面
    cout << "Java下载视频页面如下:  " << endl;
    Java jar;
    jar.header();
    jar.footer();
    jar.left();
    jar.content();
    cout << "---------------------------------------------" << endl;

    // Python页面
    cout << "Python下载视频页面如下:  " << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "---------------------------------------------" << endl;

    // C++页面
    cout << "C++下载视频页面如下:  " << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
    cout << "---------------------------------------------" << endl;
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}