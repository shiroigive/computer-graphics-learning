# MeshLib Starter

这是一个用于 VS2022 的 MeshLib 入门 demo。它会读取一个简单的 STL 文件，输出网格基本信息，并保存一个副本。

## 前提

本机已经配置好 MeshLib，默认路径为：

```text
D:\meshlib-build\install
```

目录应包含：

```text
D:\meshlib-build\install\include
D:\meshlib-build\install\lib\Release
D:\meshlib-build\install\app\Release
```

如果你的 MeshLib 安装路径不同，需要在 VS2022 的 CMake 缓存变量里修改：

```text
MESH_LIB_ROOT
```

## 在 VS2022 中运行

1. 打开 VS2022
2. 选择“打开本地文件夹”
3. 打开 `D:\code\computer-graphics-learning`
4. 等待 CMake 配置完成
5. 顶部启动项选择 `meshlib_starter`
6. 使用 Release 配置运行

## 代码位置

```text
demos/meshlib-starter/src/main.cpp
```

当前 demo 会：

- 读取 `assets/simple-triangle.stl`
- 输出顶点数、边数、面数
- 保存副本到运行目录下的 `simple-triangle-copy.stl`

