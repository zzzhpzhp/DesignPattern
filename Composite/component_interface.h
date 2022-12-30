#pragma once

#include <boost/unordered_map.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <utility>

namespace composite_ns
{
    class ComponentInterface
    {
    public:
        ComponentInterface() = delete;

        ComponentInterface(std::string id)
        {
            id_ = id;
        }

        virtual void addComponent(const std::shared_ptr<ComponentInterface> &component)
        {
            components_[component->getId()] = component;
        }

        virtual void removeComponent(const std::shared_ptr<ComponentInterface> &component)
        {
            if (components_.count(component->getId()) == 0)
            {
                return;
            }
            components_.erase(component->getId());
        }

        virtual std::string getId()
        {
            return id_;
        }

        virtual void setId(std::string id)
        {
            id_ = std::move(id);
        }

        virtual void doSomething()
        {
            std::cout << id_ << std::endl;

            for (const auto &c: getComponents())
            {
                c.second->doSomething();
            }
        }

        virtual boost::unordered_map<std::string, std::shared_ptr<ComponentInterface>> getComponents()
        {
            return components_;
        }

    protected:
        std::string id_{};
        boost::unordered_map<std::string, std::shared_ptr<ComponentInterface>> components_{};
    };
}// namespace composite_ns