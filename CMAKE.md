# Cmake的使用

## 指令初识

1.  target_include_directories(excuable xxx)

   public / private /interface的区别：

   ```
   # 创建一个静态库 
   add_library(mylib STATIC lib.cpp) 
   # 为 mylib 目标添加公共头文件搜索路径 
   target_include_directories(mylib PUBLIC include) 
   # 创建一个可执行文件并链接 mylib 库 
   add_executable(myapp main.cpp) 
   target_link_libraries(myapp PRIVATE mylib)
   ```

   2. ```
      add_library(MyLib src/mylib.cpp)        # 创建一个库目标 MyLib
      ```

   3. \# 创建一个可执行文件 add_executable(myapp main.cpp) # 在调试模式下链接调试版本的库，在优化模式下链接优化版本的库 target_link_libraries(myapp PRIVATE     debug mylib_debug    optimized mylib_release )

4 .  target_compile_options  /   target_link_options   

target_compile_options(MyExecutable PRIVATE -Wall -Wextra)



mkdir build  ->  cd build ->  cmake ..    ->  make install    -> make clean

# CMake 构建实例

CMake 构建步骤如下：

1. **创建 `CMakeLists.txt` 文件**：定义项目、目标和依赖。
2. **创建构建目录**：保持源代码目录整洁。
3. **配置项目**：使用 CMake 生成构建系统文件。
4. **编译项目**：使用构建系统文件编译项目。
5. **运行可执行文件**：执行生成的程序。
6. **清理构建文件**：删除中间文件和目标文件。

## CMake高级特性





add_custom_target(run
    COMMAND ${CMAKE_BINARY_DIR}/MyExecutable
    DEPENDS MyExecutable
)

 **这个可以用来实现，make install** 





# CMake制作静态库和动态库

1. 静态库

   ```
   
   ```

   

2. 动态库

```

```

gcc 里面怎么创建静态库和动态库。

-shared -o   

ar 

名称的不同：

libmath.a

libmath.so  

