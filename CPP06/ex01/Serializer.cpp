/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:49:38 by iganiev           #+#    #+#             */
/*   Updated: 2024/05/21 12:49:38 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &src)
{
    *this = src;
    std::cout << "Serializer copy constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &src)
{
    (void)src;
    std::cout << "Serializer assignation operator called" << std::endl;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor called" << std::endl;
}