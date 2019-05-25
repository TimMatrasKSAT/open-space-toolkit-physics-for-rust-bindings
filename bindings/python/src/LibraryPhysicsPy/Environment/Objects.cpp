////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ Physics
/// @file           LibraryPhysicsPy/Environment/Objects.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <LibraryPhysicsPy/Environment/Objects/CelestialBodies.cpp>
#include <LibraryPhysicsPy/Environment/Objects/Celestial.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryPhysicsPy_Environment_Objects        ( )
{

    boost::python::object module(boost::python::handle<>(boost::python::borrowed(PyImport_AddModule("Library.Physics.Environment.Objects")))) ;

    boost::python::scope().attr("Objects") = module ;

    boost::python::scope scope = module ;

    LibraryPhysicsPy_Environment_Objects_Celestial() ;
    LibraryPhysicsPy_Environment_Objects_CelestialBodies() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////