
/// 确保多次include头文件只被编译一次，同  #ifndef
#pragma once

#include <string.h>
#include <vector.h>

/// 命名空间隔离，避免跟其他库冲突
// 一级空间
namespace yvan {
// 二级空间
namespace json {

using namespace std;

class Json
{
public:
    /// 1. 定义类型
    enum Type
    {
        json_null = 0,
        json_bool,
        json_int,
        json_double,
        json_string,
        json_array,
        json_object
    };

private:
    /// 联合体。允许装入该“联合”所定义的任何一种数据，这些数据共享同一段内存，以达到节省空间的目的。union变量所占用的内存长度等于最长的成员的内存长度
    union Value
    {
        bool m_bool;
        int m_int;
        double m_double;
        std::string * m_string; // 注意字符串得换为存放指针
        
    };
}










}
}
