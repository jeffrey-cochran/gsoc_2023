// Author(s) : Camille Wormser, Pierre Alliez

#include <iostream>
#include <list>

#include <CGAL/Simple_cartesian.h>

typedef CGAL::Simple_cartesian<double> K;

// typedef K::FT FT;
// typedef K::Ray_3 Ray;
// typedef K::Line_3 Line;
typedef K::Point_3 Point;
// typedef K::Triangle_3 Triangle;
typedef K::Bilinear_patch_3 Bilinear_patch;

// typedef std::list<Bilinear_patch>::iterator Iterator;

int main()
{
    Point a(1.0, 0.0, 0.0);
    Point b(0.0, 1.0, 0.0);
    Point c(0.0, 0.0, 1.0);
    Point d(0.0, 0.0, 0.0);

    Bilinear_patch bp = Bilinear_patch(a,b,c,d);
    // std::list<Triangle> triangles;
    // triangles.push_back(Triangle(a,b,c));
    // triangles.push_back(Triangle(a,b,d));
    // triangles.push_back(Triangle(a,d,c));

    // constructs AABB tree
    // Tree tree(triangles.begin(),triangles.end());

    // counts #intersections
    // Ray ray_query(a,b);
    // std::cout << tree.number_of_intersected_primitives(ray_query)
    //     << " intersections(s) with ray query" << std::endl;

    // compute closest point and squared distance
    // Point point_query(2.0, 2.0, 2.0);
    // Point closest_point = tree.closest_point(point_query);
    // std::cerr << "closest point is: " << closest_point << std::endl;
    // FT sqd = tree.squared_distance(point_query);
    // std::cout << "squared distance: " << sqd << std::endl;

    return EXIT_SUCCESS;
}
