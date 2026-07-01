#include <cmath>
#include <iostream>

struct Vec3 {
    double x;
    double y;
    double z;
};

double dot(const Vec3& a, const Vec3& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vec3 cross(const Vec3& a, const Vec3& b)
{
    return {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x,
    };
}

double length(const Vec3& v)
{
    return std::sqrt(dot(v, v));
}

Vec3 normalize(const Vec3& v)
{
    const double len = length(v);
    if (len == 0.0) {
        return {0.0, 0.0, 0.0};
    }
    return {v.x / len, v.y / len, v.z / len};
}

void print_vec3(const char* name, const Vec3& v)
{
    std::cout << name << " = (" << v.x << ", " << v.y << ", " << v.z << ")\n";
}

int main()
{
    const Vec3 p0{0.0, 0.0, 0.0};
    const Vec3 p1{1.0, 0.0, 0.0};
    const Vec3 p2{0.0, 1.0, 0.0};

    const Vec3 edge1{p1.x - p0.x, p1.y - p0.y, p1.z - p0.z};
    const Vec3 edge2{p2.x - p0.x, p2.y - p0.y, p2.z - p0.z};
    const Vec3 normal = normalize(cross(edge1, edge2));

    std::cout << "Computer Graphics C++ Starter\n";
    print_vec3("edge1", edge1);
    print_vec3("edge2", edge2);
    print_vec3("normal", normal);
    std::cout << "dot(edge1, edge2) = " << dot(edge1, edge2) << '\n';

    return 0;
}

