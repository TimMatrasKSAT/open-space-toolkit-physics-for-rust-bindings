/// Apache License 2.0

#ifndef __OpenSpaceToolkit_Physics_Unit_LengthRS
#define __OpenSpaceToolkit_Physics_Unit_LengthRS

#include <OpenSpaceToolkit/Physics/Unit/Length.hpp>
#include <memory>
#include <../../../../../../ostk-core-oxidized/open-space-toolkit-core/bindings/rust/include/OpenSpaceToolkitCoreRS/Type/RealRS.hpp>

namespace ostk
{
namespace physics
{
namespace unit
{

/// @brief                      Length
///
/// @ref                        https://en.wikipedia.org/wiki/Length

class LengthRS : public Length
{
    public:
        LengthRS(const Real& aValue, const Length::Unit& aUnit);

        ostk::core::type::RealRS inMeters() const;
        
        static LengthRS Meters(const std::unique_ptr<ostk::core::type::Real>& aValue);

        static LengthRS Kilometers(const std::unique_ptr<ostk::core::type::Real>& aValue);
};

std::unique_ptr<LengthRS> new_length(const std::unique_ptr<ostk::core::type::RealRS>& number, const std::unique_ptr<Length::Unit>& unit);

}
}
}

#endif