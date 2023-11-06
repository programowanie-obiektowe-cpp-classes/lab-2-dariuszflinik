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
    
    private: 
        Resource* resource; 
};
