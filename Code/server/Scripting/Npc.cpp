#include <stdafx.h>

#include <Scripting/Npc.h>

#include <World.h>
#include <Components.h>

namespace Script
{
    Npc::Npc(entt::entity aEntity, World& aWorld)
        : EntityHandle(aEntity, aWorld)
    {}

    const glm::vec3& Npc::GetPosition() const
    {
        auto& movementComponent = m_pWorld->get<MovementComponent>(m_entity);

        return movementComponent.Position;
    }

    const glm::vec3& Npc::GetRotation() const
    {
        auto& movementComponent = m_pWorld->get<MovementComponent>(m_entity);

        return movementComponent.Rotation;
    }

    float Npc::GetSpeed() const
    {
        auto& movementComponent = m_pWorld->get<MovementComponent>(m_entity);

        return 0.f;
    }
}
