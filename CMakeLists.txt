cmake_minimum_required(VERSION 3.27)
project(rtforoneweeked)

set(CMAKE_CXX_STANDARD 20)

add_executable(rtforoneweeked main.cpp
        ray.h
        color.h
        vec3.h
        rtweekend.h
        hittable.h
        sphere.h
        hittable_list.h
        interval.h
        camera.h
        material.h)
