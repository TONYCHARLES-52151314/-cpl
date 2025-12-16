cmake_minimum_required(VERSION 3.10)
project(cpl_pointers C)

# 收集所有 .c 文件
file(GLOB_RECURSE ALL_C_FILES
        "homework/7.pointers/*.c"
        "lesson/7.pointers/*.c"
)

# 为每个包含main函数的文件创建独立可执行目标
foreach(C_FILE ${ALL_C_FILES})
    # 读取文件内容检查是否包含main函数
    file(READ ${C_FILE} FILE_CONTENT)
    if(FILE_CONTENT MATCHES "int main\\(")
        get_filename_component(EXEC_NAME ${C_FILE} NAME_WE)
        add_executable(${EXEC_NAME} ${C_FILE}
                homework/7.pointers/substr.c
                lesson/7.pointers/ex1.cpp
                lesson/7.pointers/selectsort.c
                lesson/7.pointers/malloc.c
                lesson/7.pointers/malloc2.c
                lesson/7.pointers/testheapmax.c
                lesson/7.pointers/test1.c
                "lesson/7.pointers/strlen(why).c"
                "lesson/7.pointers/strcpy(why).c"
                lesson/9.doublepointers/doublepointers1.c
                lesson/9.doublepointers/test.cpp
        )
    endif()
endforeach()
