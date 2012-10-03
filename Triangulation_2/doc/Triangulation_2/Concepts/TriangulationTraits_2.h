
/*!
\ingroup PkgTriangulation2Concepts
\cgalconcept

The concept `TriangulationTraits_2` describes the set of requirements
to be fulfilled by any class used to instantiate the first template
parameter of the class `Triangulation_2<Traits,Tds>`.  This concept
provides the types of the geometric primitives used in the
triangulation and some function object types for the required
predicates on those primitives.

\hasModel All the \cgal Kernels 
\hasModel `CGAL::Triangulation_euclidean_traits_2<K>`
\hasModel `CGAL::Projection_traits_xy_3<K>`
\hasModel `CGAL::Projection_traits_yz_3<K>`
\hasModel `CGAL::Projection_traits_xz_3<K>`

\sa `CGAL::Triangulation_2<Traits,Tds>` 

*/

class TriangulationTraits_2 {
public:

/// \name Types 
/// @{

/*! 
The point type. 
*/ 
typedef Hidden_type Point_2; 

/*! 
The segment type. 
*/ 
typedef Hidden_type Segment_2; 

/*! 
The triangle type. 
*/ 
typedef Hidden_type Triangle_2; 

/*! 
A constructor object for 
`Segment_2`. Provides : 

`Segment_2 operator()(Point_2 p,Point_2 q)`, 

which constructs a segment from two points. 
*/ 
typedef Hidden_type Construct_segment_2; 

/*! 
A constructor object for 
`Triangle_2`. Provides : 

`Triangle_2 operator()(Point_2 p,Point_2 q,Point_2 r )`, 

which constructs a triangle from three points. 
*/ 
typedef Hidden_type Construct_triangle_2; 

/*! 
Predicate object. Provides 
the operator : 

`bool operator()(Point p, Point q)` 

which returns `true` if `p` is before `q` 
according to the \f$ x\f$-ordering of points. 
*/ 
typedef Hidden_type Less_x_2; 

/*! 
Predicate object. Provides 
the operator : 

`bool operator()(Point p, Point q)` 

which returns `true` if `p` is before `q` 
according to the \f$ y\f$-ordering of points. 
*/ 
typedef Hidden_type Less_y_2; 

/*! 
Predicate object. Provides 
the operator : 

`Comparison_result operator()(Point p, Point q)` 

which returns 
`SMALLER, EQUAL` or `LARGER` 
according to the 
\f$ x\f$-ordering of points `p` and `q`. 
*/ 
typedef Hidden_type Compare_x_2; 

/*! 
Predicate object. Provides 
the operator : 

`Comparison_result operator()(Point p, Point q)` 

which returns 
(`SMALLER, EQUAL` or `LARGER`) 
according to the 
\f$ y\f$-ordering of points `p` and `q`. 
*/ 
typedef Hidden_type Compare_y_2; 

/*! 
Predicate object. Provides 
the operator : 

`Orientation operator()(Point p, Point q, Point r)` 

which returns `LEFT_TURN`, `RIGHT_TURN` or `COLLINEAR` 
depending on \f$ r\f$ being, with respect to 
the oriented line `pq`, 
on the left side , on the right side or on the line. 
*/ 
typedef Hidden_type Orientation_2; 

/*! 
Predicate object. Must 
provide the operator 
`Oriented_side operator()(Point p, Point q, Point r, Point s)` 
which takes four points \f$ p, q, r, s\f$ as arguments and returns 
`ON_POSITIVE_SIDE`, `ON_NEGATIVE_SIDE` or, 
`ON_ORIENTED_BOUNDARY` according to the position of points `s` 
with respect to the oriented circle through through \f$ p,q\f$ 
and \f$ r\f$. 
This type is required only if the function 
`side_of_oriented_circle(Face_handle f, Point p)` is 
called. 
*/ 
typedef Hidden_type Side_of_oriented_circle_2; 

/*! 
Constructor object. Provides 
the operator : 

`Point operator()(Point p, Point q, Point r)` 

which returns 
the circumcenter of the three points `p, q` and `r`. 
This type is required only if the function 
`Point circumcenter(Face_handle f)`is called. 
*/ 
typedef Hidden_type Construct_circumcenter_2; 

/// @} 

/// \name Creation 
/// Only a default constructor, copy constructor and an assignment
/// operator are required. Note that further constructors can be
/// provided.
/// @{

/*! 
default constructor. 
*/ 
TriangulationTraits_2(); 

/*! 
Copy constructor 
*/ 
TriangulationTraits_2(TriangulationTraits_2 gtr); 

/*! 
Assignment operator. 
*/ 
TriangulationTraits_2 operator=(TriangulationTraits_2 gtr); 

/// @} 

/// \name Predicate functions 
/// The following functions give access to the predicate and
/// constructor objects.
/// @{

/*! 

*/ 
Construct_segment_2 construct_segment_2_object(); 

/*! 

*/ 
Construct_triangle_2 construct_triangle_2_object(); 

/*! 

*/ 
Comparison_x_2 compare_x_2_object(); 

/*! 

*/ 
Comparison_y_2 compare_y_2_object(); 

/*! 

*/ 
Orientation_2 orientation_2_object(); 

/*! 
Required only 
if `side_of_oriented_circle` is called 
called. 
*/ 
Side_of_oriented_circle_2 
side_of_oriented_circle_2_object(); 

/*! 
Required only if `circumcenter` is called. 
*/ 
Construct_circumcenter_2 construct_circumcenter_2_object(); 

/// @}

}; /* end TriangulationTraits_2 */

