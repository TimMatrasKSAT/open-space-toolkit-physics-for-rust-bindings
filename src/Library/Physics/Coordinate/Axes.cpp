////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Physics
/// @file           Library/Physics/Coordinate/Axes.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Physics/Coordinate/Frame.hpp>
#include <Library/Physics/Coordinate/Axes.hpp>

#include <Library/Core/Error.hpp>
#include <Library/Core/Utilities.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace physics
{
namespace coord
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                Axes::Axes                                  (   const   Vector3d&                   aXAxis,
                                                                                const   Vector3d&                   aYAxis,
                                                                                const   Vector3d&                   aZAxis,
                                                                                const   Shared<const Frame>&        aFrame                                      )
                                :   x_(aXAxis),
                                    y_(aYAxis),
                                    z_(aZAxis),
                                    frameSPtr_(aFrame)
{

}

bool                            Axes::operator ==                           (   const   Axes&                       anAxes                                      ) const
{

    if ((!this->isDefined()) || (!anAxes.isDefined()))
    {
        return false ;
    }

    return (x_ == anAxes.x_) && (y_ == anAxes.y_) && (z_ == anAxes.z_) && ((*frameSPtr_) == (*anAxes.frameSPtr_)) ;

}

bool                            Axes::operator !=                           (   const   Axes&                       anAxes                                      ) const
{
    return !((*this) == anAxes) ;
}

std::ostream&                   operator <<                                 (           std::ostream&               anOutputStream,
                                                                                const   Axes&                       anAxes                                      )
{

    library::core::utils::Print::Header(anOutputStream, "Axes") ;

    library::core::utils::Print::Line(anOutputStream) << "X:" << (anAxes.isDefined() ? anAxes.x().toString() : "Undefined") ;
    library::core::utils::Print::Line(anOutputStream) << "Y:" << (anAxes.isDefined() ? anAxes.y().toString() : "Undefined") ;
    library::core::utils::Print::Line(anOutputStream) << "Z:" << (anAxes.isDefined() ? anAxes.z().toString() : "Undefined") ;
    library::core::utils::Print::Line(anOutputStream) << "Frame:" << (anAxes.isDefined() ? anAxes.frameSPtr_->getName() : "Undefined") ;

    library::core::utils::Print::Footer(anOutputStream) ;

    return anOutputStream ;

}

bool                            Axes::isDefined                             ( ) const
{
    return x_.isDefined() && y_.isDefined() && z_.isDefined() && (frameSPtr_ != nullptr) && frameSPtr_->isDefined() ;
}

const Vector3d&                 Axes::x                                     ( ) const
{

    if (!this->isDefined())
    {
        throw library::core::error::runtime::Undefined("Axes") ;
    }

    return x_ ;

}

const Vector3d&                 Axes::y                                     ( ) const
{

    if (!this->isDefined())
    {
        throw library::core::error::runtime::Undefined("Axes") ;
    }

    return y_ ;

}

const Vector3d&                 Axes::z                                     ( ) const
{

    if (!this->isDefined())
    {
        throw library::core::error::runtime::Undefined("Axes") ;
    }

    return z_ ;

}

Axes                            Axes::Undefined                             ( )
{
    return Axes(Vector3d::Undefined(), Vector3d::Undefined(), Vector3d::Undefined(), nullptr) ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////