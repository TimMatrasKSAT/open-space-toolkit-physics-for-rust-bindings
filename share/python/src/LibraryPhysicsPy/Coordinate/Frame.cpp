////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Physics
/// @file           LibraryPhysicsPy/Coordinate/Frame.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Physics/Coordinate/Frame.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryPhysicsPy_Coordinate_Frame           ( )
{

    using namespace boost::python ;

    using library::core::types::Shared ;
    using library::core::types::String ;

    using library::physics::coord::Frame ;
    using library::physics::coord::frame::Provider ;

    scope in_Frame = class_<Frame>("Frame", init<String, bool, Shared<const Frame>, Shared<Provider>>())

        .def(self == self)
        .def(self != self)

        .def(self_ns::str(self_ns::self))

        .def("isDefined", &Frame::isDefined)
        .def("isQuasiInertial", &Frame::isQuasiInertial)
        .def("hasParent", &Frame::hasParent)

        .def("accessParent", &Frame::accessParent, return_value_policy<reference_existing_object>())
        .def("accessAncestor", &Frame::accessAncestor, return_value_policy<reference_existing_object>())
        .def("accessProvider", &Frame::accessProvider)
        .def("getName", &Frame::getName)
        .def("getOriginIn", &Frame::getOriginIn)
        .def("getAxesIn", &Frame::getAxesIn)
        .def("getTransformTo", &Frame::getTransformTo)
        
        .def("Undefined", &Frame::Undefined).staticmethod("Undefined")
        // .def("ICRF", &Frame::ICRF).staticmethod("ICRF")
        .def("GCRF", &Frame::GCRF).staticmethod("GCRF")
        // .def("EME2000", &Frame::EME2000).staticmethod("EME2000")
        .def("TEME", &Frame::TEME).staticmethod("TEME")
        .def("TEMEOfEpoch", &Frame::TEMEOfEpoch).staticmethod("TEMEOfEpoch")
        .def("CIRF", &Frame::CIRF).staticmethod("CIRF")
        .def("TIRF", &Frame::TIRF).staticmethod("TIRF")
        .def("ITRF", &Frame::ITRF).staticmethod("ITRF")

    ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////