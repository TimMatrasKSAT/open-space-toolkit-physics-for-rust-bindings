////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ Physics
/// @file           LibraryPhysicsPy/Coordinate/Frame/Provider.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Physics/Coordinate/Frame/Provider.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryPhysicsPy_Coordinate_Frame_Provider ( )
{

    using namespace boost::python ;

    using library::core::types::Shared ;

    using library::physics::coord::frame::Provider ;

    scope in_Provider = class_<Provider, boost::noncopyable>("Provider", no_init)

        .def("isDefined", &Provider::isDefined)

        .def("getTransformAt", &Provider::getTransformAt)

    ;

    register_ptr_to_python<Shared<const Provider>>() ;

    implicitly_convertible<Shared<Provider>, Shared<const Provider>>() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
