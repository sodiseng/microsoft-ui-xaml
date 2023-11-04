// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "RecyclePool.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(RecyclePool)
}

#include "RecyclePool.g.cpp"

GlobalDependencyProperty RecyclePoolProperties::s_PoolInstanceProperty{ nullptr };

RecyclePoolProperties::RecyclePoolProperties()
{
    EnsureProperties();
}

void RecyclePoolProperties::EnsureProperties()
{
    if (!s_PoolInstanceProperty)
    {
        s_PoolInstanceProperty =
            InitializeDependencyProperty(
                L"PoolInstance",
                winrt::name_of<winrt::RecyclePool>(),
                winrt::name_of<winrt::RecyclePool>(),
                true /* isAttached */,
                ValueHelper<winrt::RecyclePool>::BoxedDefaultValue(),
                nullptr);
    }
}

void RecyclePoolProperties::ClearProperties()
{
    s_PoolInstanceProperty = nullptr;
}


void RecyclePoolProperties::SetPoolInstance(winrt::DataTemplate const& target, winrt::RecyclePool const& value)
{
    target.SetValue(s_PoolInstanceProperty, ValueHelper<winrt::RecyclePool>::BoxValueIfNecessary(value));
}

winrt::RecyclePool RecyclePoolProperties::GetPoolInstance(winrt::DataTemplate const& target)
{
    return ValueHelper<winrt::RecyclePool>::CastOrUnbox(target.GetValue(s_PoolInstanceProperty));
}
