////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ Physics
/// @file           Library/Physics/Environment/Ephemerides/Analytical.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Physics/Environment/Ephemerides/Analytical.hpp>

#include <Library/Core/Error.hpp>
#include <Library/Core/Utilities.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace physics
{
namespace env
{
namespace ephem
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                Analytical::Analytical                      (   const   Shared<const Frame>&        aFrameSPtr                                  )
                                :   frameSPtr_(aFrameSPtr)
{

}

                                Analytical::~Analytical                     ( )
{

}

Analytical*                     Analytical::clone                           ( ) const
{
    return new Analytical(*this) ;
}

bool                            Analytical::isDefined                       ( ) const
{
    return (frameSPtr_ != nullptr) && frameSPtr_->isDefined() ;
}

Shared<const Frame>             Analytical::accessFrame                     ( ) const
{
    return frameSPtr_ ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
