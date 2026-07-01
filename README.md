# Computer Graphics Learning
这个仓库用于记录我准备研究生阶段学习三维模型处理方向时的计算机图形学学习过程。当前重点是GAMES101-现代计算机图形学入门，后续会逐步补充几何处理、网格处理和论文复现相关内容。

## 当前目标
- 复习图形学需要的线性代数基础
- 学习 GAMES101 的核心内容
- 用代码实现基础渲染和几何处理 demo
- 用 Markdown 记录公式推导、实验截图和阶段总结
- 结合 MeshLib 练习三维网格读取、保存和处理

## 学习路线
```text
阶段 1：线性代数和变换
向量、矩阵、齐次坐标、模型/视图/投影变换

阶段 2：光栅化
三角形光栅化、深度测试、抗锯齿、着色、纹理映射

阶段 3：几何表示
曲线曲面、网格、细分、参数化，为三维模型处理做准备

阶段 4：光线追踪
光线求交、BVH、路径追踪、材质和全局光照

阶段 5：几何处理入门
网格简化、平滑、去噪、修复和基础论文阅读
```

## 目录结构
```text
computer-graphics-learning/
├─ CMakeLists.txt     # VS2022/CMake 工程入口
├─ notes/             # 课程笔记和公式推导
├─ demos/             # 自己实现的小实验和可视化 demo
├─ assets/            # 截图、渲染结果和示意图
├─ weekly-reports/    # 每周学习总结
└─ references/        # 资料索引和阅读清单
```

## VS2022 写代码
使用 Visual Studio 2022 时，选择“打开本地文件夹”，打开：

```text
D:\code\computer-graphics-learning
```

VS2022 会自动识别根目录的 `CMakeLists.txt`。

当前有两个入门 demo：

```text
demos/cpp-starter        # 纯 C++，练习向量、矩阵、变换等基础
demos/meshlib-starter    # MeshLib，练习 STL 网格读取、统计和保存
```

学习 GAMES101 前半部分时，建议先用 `cpp-starter` 写数学和渲染基础；进入几何表示、网格处理、三维模型处理时，再重点使用 `meshlib-starter`。

## MeshLib 配置
`meshlib-starter` 默认引用本机路径：

```text
D:\meshlib-build\install
```

如果 MeshLib 安装路径不同，在 VS2022 的 CMake 缓存变量中修改：

```text
MESH_LIB_ROOT
```

默认使用 MeshLib 的 `Release` 配置：

```text
MESH_LIB_CONFIG=Release
```

## 记录规范
每次学习尽量留下三个东西：

- 一篇笔记：记录概念、公式和自己的理解
- 一段代码或实验：验证一个具体知识点
- 一张截图：保存运行结果或可视化结果

提交信息建议使用类似格式：

```bash
git commit -m "notes: add transformation basics"
git commit -m "demo: implement triangle rasterization"
git commit -m "report: add week 01 summary"
```

## 说明
这个仓库主要放学习笔记、独立 demo 和阶段总结。课程作业如果涉及评分或官方框架，优先放在私有仓库中管理，本仓库只保留公开合适的总结、截图和自己的理解。

