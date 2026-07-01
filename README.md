# Computer Graphics Learning

这个仓库用于记录计算机图形学和三维模型处理方向的学习过程。当前重点是 GAMES101 前期基础，以及后续结合 MeshLib 做网格处理实验。

## 目录结构

```text
computer-graphics-learning/
├─ ComputerGraphicsLearning.sln # VS2022 传统解决方案，优先使用
├─ CMakeLists.txt               # CMake 工程入口
├─ demos/                       # C++ 和 MeshLib demo
├─ notes/                       # 课程笔记
├─ assets/                      # 截图和渲染结果
├─ weekly-reports/              # 周总结
└─ references/                  # 资料索引
```

## 推荐的 VS2022 打开方式

如果 VS2022 的 CMake 配置项或启动项没有显示，直接打开这个解决方案：

```text
D:\code\computer-graphics-learning\ComputerGraphicsLearning.sln
```

打开后选择：

```text
配置：Debug 或 Release
平台：x64
启动项目：cpp_starter 或 meshlib_starter
```

右键项目可以选择：

```text
设为启动项目
```

## 当前 Demo

```text
demos/cpp-starter        # 纯 C++，适合 GAMES101 前期：向量、矩阵、变换、光栅化
demos/meshlib-starter    # MeshLib，适合三维模型处理：读取、统计、保存 STL 网格
```

GAMES101 前半部分建议主要改：

```text
demos/cpp-starter/src/main.cpp
```

学习三维网格处理时再改：

```text
demos/meshlib-starter/src/main.cpp
```

## MeshLib 配置

`meshlib-starter` 默认引用本机路径：

```text
D:\meshlib-build\install
```

需要存在：

```text
D:\meshlib-build\install\include
D:\meshlib-build\install\lib\Release
D:\meshlib-build\install\app\Release
```

## Git 使用

写完代码后，在仓库根目录执行：

```bash
git status
git add .
git commit -m "demo: add vector operations"
git push
```

## 学习记录建议

每次学习尽量留下三类内容：

- 笔记：概念、公式和自己的理解
- 代码：验证一个具体知识点
- 截图：保存运行结果或可视化结果

