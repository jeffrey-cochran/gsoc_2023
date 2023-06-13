// Author(s) : Camille Wormser, Pierre Alliez

#include <iostream>
#include <fstream>
#include <list>

#include <CGAL/Simple_cartesian.h>
#include <CGAL/Surface_mesh.h>
#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_triangle_primitive.h>
#include <CGAL/AABB_face_graph_triangle_primitive.h>
#include <CGAL/Polygon_mesh_processing/compute_normal.h>
#include <CGAL/Polygon_mesh_processing/orientation.h>

typedef CGAL::Simple_cartesian<double> K;

typedef K::FT FT;
typedef K::Ray_3 Ray;
typedef K::Line_3 Line;
typedef K::Point_3 Point;
typedef K::Triangle_3 Triangle;

typedef std::list<Triangle>::iterator Iterator;
typedef CGAL::AABB_triangle_primitive<K, Iterator> Primitive;
typedef CGAL::AABB_traits<K, Primitive> AABB_triangle_traits;
typedef CGAL::AABB_tree<AABB_triangle_traits> Tree;

int main()
{
    //Point a(1.0, 0.0, 0.0);
    //Point b(0.0, 1.0, 0.0);
    //Point c(0.0, 0.0, 1.0);
    //Point d(0.0, 0.0, 0.0);

    //std::list<Triangle> triangles;
    //triangles.push_back(Triangle(a, b, c));
    //triangles.push_back(Triangle(a, b, d));
    //triangles.push_back(Triangle(a, d, c));

    //// constructs AABB tree
    //Tree tree(triangles.begin(), triangles.end());

    //// counts #intersections
    //Ray ray_query(a, b);
    //std::cout << tree.number_of_intersected_primitives(ray_query)
    //    << " intersections(s) with ray query" << std::endl;

    //// compute closest point and squared distance
    //Point point_query(2.0, 2.0, 2.0);
    //Point closest_point = tree.closest_point(point_query);
    //std::cerr << "closest point is: " << closest_point << std::endl;
    //FT sqd = tree.squared_distance(point_query);
    //std::cout << "squared distance: " << sqd << std::endl;


    //typedef CGAL::Simple_cartesian<double> K;
    //typedef K::FT FT;
    //typedef K::Point_3 Point;
    //typedef K::Vector_3 Vector;
    //typedef K::Ray_3 Ray;

    //typedef CGAL::Surface_mesh<Point> Mesh;
    //typedef boost::graph_traits<Mesh>::face_descriptor face_descriptor;
    //typedef boost::graph_traits<Mesh>::halfedge_descriptor halfedge_descriptor;

    //typedef CGAL::AABB_face_graph_triangle_primitive<Mesh> Primitive;
    //typedef CGAL::AABB_traits<K, Primitive> Traits;
    //typedef CGAL::AABB_tree<Traits> Tree;
    //typedef boost::optional<Tree::Intersection_and_primitive_id<Ray>::Type> Ray_intersection;

    //struct Skip
    //{
    //    face_descriptor fd;

    //    Skip(const face_descriptor fd)
    //        : fd(fd)
    //    {}

    //    bool operator()(const face_descriptor& t) const
    //    {
    //        if (t == fd) {
    //            std::cerr << "ignore " << t << std::endl;
    //        };
    //        return(t == fd);
    //    }

    //    const std::string filename = (argc > 1) ? argv[1] : CGAL::data_file_path("meshes/tetrahedron.off");

    //    Mesh mesh;
    //    if (!CGAL::IO::read_polygon_mesh(filename, mesh))
    //    {
    //        std::cerr << "Invalid input." << std::endl;
    //        return 1;
    //    }

    //    Tree tree(faces(mesh).first, faces(mesh).second, mesh);

    //    double d = CGAL::Polygon_mesh_processing::is_outward_oriented(mesh) ? -1 : 1;

    //    for (face_descriptor fd : faces(mesh))
    //    {
    //        halfedge_descriptor hd = halfedge(fd, mesh);
    //        Point p = CGAL::centroid(mesh.point(source(hd, mesh)),
    //            mesh.point(target(hd, mesh)),
    //            mesh.point(target(next(hd, mesh), mesh)));
    //        Vector v = CGAL::Polygon_mesh_processing::compute_face_normal(fd, mesh);

    //        Ray ray(p, d * v);
    //        Skip skip(fd);
    //        Ray_intersection intersection = tree.first_intersection(ray, skip);
    //        if (intersection)
    //        {
    //            if (boost::get<Point>(&(intersection->first))) {
    //                const Point* p = boost::get<Point>(&(intersection->first));
    //                std::cout << *p << std::endl;
    //            }
    //        }
    //    }

        std::cerr << "done" << std::endl;

        return 0;
    }


    return EXIT_SUCCESS;
}
