/// Apache License 2.0

#ifndef __OpenSpaceToolkit_Physics_Environment_Gravitational_Model__
#define __OpenSpaceToolkit_Physics_Environment_Gravitational_Model__

#include <OpenSpaceToolkit/Mathematics/Objects/Vector.hpp>

#include <OpenSpaceToolkit/Physics/Time/Instant.hpp>

namespace ostk
{
namespace physics
{
namespace environment
{
namespace gravitational
{

using ostk::math::obj::Vector3d;

using ostk::physics::time::Instant;

/// @brief                      Gravitational model (interface)

class Model
{
   public:
    /// @brief              Constructor (default)

    Model();

    /// @brief              Destructor (pure virtual)

    virtual ~Model() = 0;

    /// @brief              Clone the gravitational model (pure virtual)
    ///
    /// @return             Pointer to gravitational model

    virtual Model* clone() const = 0;

    /// @brief              Check if the gravitational model is defined (pure virtual)
    ///
    /// @return             True if the gravitational model is defined

    virtual bool isDefined() const = 0;

    /// @brief              Get the gravitational field value at a given position and instant (pure virtual)
    ///
    /// @param              [in] aPosition A position, expressed in the gravitational object frame [m]
    /// @param              [in] anInstant An instant
    /// @return             Gravitational field value, expressed in the gravitational object frame [m.s-2]

    virtual Vector3d getFieldValueAt(const Vector3d& aPosition, const Instant& anInstant) const = 0;
};

}  // namespace gravitational
}  // namespace environment
}  // namespace physics
}  // namespace ostk

#endif
