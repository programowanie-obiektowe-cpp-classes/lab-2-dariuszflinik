#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public: 
        ResourceManager() : resource{new Resource} {}

        ~ResourceManager() {delete resource;}
    
        double get(){
            return resource->get(); 
        }

        ResourceManager& operator = (const ResourceManager& t){
            delete resource; 
            resource = t.resource; 
            return *this;
            }
    
    private: 
        Resource* resource; 
};
