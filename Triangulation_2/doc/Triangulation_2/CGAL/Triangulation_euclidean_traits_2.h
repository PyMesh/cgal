
namespace CGAL {

/*!
\ingroup PkgTriangulation2TraitsClasses

The class `Triangulation_euclidean_traits_2` can be used to instantiate the geometric traits 
class of basic and Delaunay triangulations. 
The templated parameter `K` has to 
be instantiated by a model of the `Kernel` concept. 
The class `Triangulation_euclidean_traits_2` uses types 
and predicates defined `K`. 

\models ::TriangulationTraits_2 
\models ::DelaunayTriangulationTraits_2 

\sa `TriangulationTraits_2` 
\sa `DelaunayTriangulationTraits_2` 
\sa `CGAL::Triangulation_2<Traits,Tds>` 
\sa `CGAL::Delaunay_triangulation_2<Traits,Tds>` 
\sa `CGAL::Projection_traits_xy_3<K>`
\sa `CGAL::Projection_traits_xz_3<K>`
\sa `CGAL::Projection_traits_yz_3<K>`

*/
template< typename K >
class Triangulation_euclidean_traits_2 {
public:

/// @}

}; /* end Triangulation_euclidean_traits_2 */
} /* end namespace CGAL */
