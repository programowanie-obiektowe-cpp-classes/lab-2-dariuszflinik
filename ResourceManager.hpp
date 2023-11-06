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
        ResourceManager(const ResourceManager& t){
            resource = new Resource(); 
            *resource = *(t.resource); 
        }
        ResourceManager& operator=(const ResourceManager& t){
            *resource = *t.resource; 
            return nullptr; 
        }
        
        
    private: 
        Resource* resource; 
};
