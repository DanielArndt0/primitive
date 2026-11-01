#pragma once

#include <type_traits>

namespace primitive_detail
{
    template <typename T>
    struct fundamental
    {
        static constexpr bool value = false;
    };

    template <>
    struct fundamental<void>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<bool>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<char>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<signed char>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<unsigned char>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<wchar_t>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<char16_t>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<char32_t>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<short>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<unsigned short>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<int>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<unsigned int>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<long>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<unsigned long>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<long long>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<unsigned long long>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<float>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<double>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<long double>
    {
        static constexpr bool value = true;
    };

    template <>
    struct fundamental<decltype(nullptr)>
    {
        static constexpr bool value = true;
    };
}

template <typename T>
struct primitive : primitive_detail::fundamental<typename std::remove_cv<T>::type>
{
};
