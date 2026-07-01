#include <MRMesh/MRMesh.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>

#include <filesystem>
#include <iostream>

#ifndef SAMPLE_STL_PATH
#define SAMPLE_STL_PATH "simple-triangle.stl"
#endif

int main()
{
    const std::filesystem::path inputPath = SAMPLE_STL_PATH;
    const std::filesystem::path outputPath = "simple-triangle-copy.stl";

    std::cout << "MeshLib Starter\n";
    std::cout << "Input: " << inputPath << '\n';

    auto loadResult = MR::MeshLoad::fromAnySupportedFormat(inputPath);
    if (!loadResult.has_value()) {
        std::cerr << "Load failed: " << loadResult.error() << '\n';
        return 1;
    }

    MR::Mesh& mesh = *loadResult;

    std::cout << "Vertices: " << mesh.topology.numValidVerts() << '\n';
    std::cout << "Undirected edges: " << mesh.topology.undirectedEdgeSize() << '\n';
    std::cout << "Faces: " << mesh.topology.numValidFaces() << '\n';

    if (auto saveResult = MR::MeshSave::toAnySupportedFormat(mesh, outputPath); !saveResult) {
        std::cerr << "Save failed: " << saveResult.error() << '\n';
        return 1;
    }

    std::cout << "Saved copy: " << std::filesystem::absolute(outputPath) << '\n';
    return 0;
}
