/// Apache License 2.0

#include "../../../include/OpenSpaceToolkitPhysicsRS/Unit/LengthRS.hpp"
#include <OpenSpaceToolkit/Physics/Unit/Length.hpp>

namespace ostk
{
namespace physics
{
namespace unit
{


LengthRS::LengthRS(const Real& aValue, const Length::Unit& aUnit)
    : Length(aValue, aUnit)
{
}

ostk::core::type::RealRS LengthRS::inMeters() const
{
    this->in(Length::Unit::Meter);
}

LengthRS LengthRS::Meters(const std::unique_ptr<ostk::core::type::Real>& aValue)
{
    return {*aValue, Length::Unit::Meter};
}

LengthRS LengthRS::Kilometers(const std::unique_ptr<ostk::core::type::Real>& aValue)
{
    return {*aValue * 1e3, Length::Unit::Meter};
}


}
}
}