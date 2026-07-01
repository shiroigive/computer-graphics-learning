# C++ Starter

这是一个给 VS2022 使用的 C++ 入门 demo，用来验证本机 C++ 图形学学习环境是否正常。

## 在 VS2022 中打开

1. 打开 Visual Studio 2022
2. 选择 `打开本地文件夹`
3. 选择 `D:\code\computer-graphics-learning`
4. 等待 VS 自动配置 CMake
5. 在顶部启动项中选择 `cpp_starter.exe`
6. 点击运行

## 命令行构建

如果要用 VS2022 自带 CMake 构建，可以使用：

```powershell
& "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -S . -B build
& "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" --build build --config Debug
```

## 当前内容

`src/main.cpp` 实现了最基础的三维向量点乘、叉乘、归一化和三角形法线计算。后续学习 GAMES101 时，可以继续扩展：

- 矩阵变换
- 投影变换
- 三角形光栅化
- 简单光照模型

