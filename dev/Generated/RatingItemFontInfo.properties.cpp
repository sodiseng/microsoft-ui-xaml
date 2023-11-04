// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "RatingItemFontInfo.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(RatingItemFontInfo)
}

#include "RatingItemFontInfo.g.cpp"

GlobalDependencyProperty RatingItemFontInfoProperties::s_DisabledGlyphProperty{ nullptr };
GlobalDependencyProperty RatingItemFontInfoProperties::s_GlyphProperty{ nullptr };
GlobalDependencyProperty RatingItemFontInfoProperties::s_PlaceholderGlyphProperty{ nullptr };
GlobalDependencyProperty RatingItemFontInfoProperties::s_PointerOverGlyphProperty{ nullptr };
GlobalDependencyProperty RatingItemFontInfoProperties::s_PointerOverPlaceholderGlyphProperty{ nullptr };
GlobalDependencyProperty RatingItemFontInfoProperties::s_UnsetGlyphProperty{ nullptr };

RatingItemFontInfoProperties::RatingItemFontInfoProperties()
{
    EnsureProperties();
}

void RatingItemFontInfoProperties::EnsureProperties()
{
    if (!s_DisabledGlyphProperty)
    {
        s_DisabledGlyphProperty =
            InitializeDependencyProperty(
                L"DisabledGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_GlyphProperty)
    {
        s_GlyphProperty =
            InitializeDependencyProperty(
                L"Glyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PlaceholderGlyphProperty)
    {
        s_PlaceholderGlyphProperty =
            InitializeDependencyProperty(
                L"PlaceholderGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PointerOverGlyphProperty)
    {
        s_PointerOverGlyphProperty =
            InitializeDependencyProperty(
                L"PointerOverGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PointerOverPlaceholderGlyphProperty)
    {
        s_PointerOverPlaceholderGlyphProperty =
            InitializeDependencyProperty(
                L"PointerOverPlaceholderGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_UnsetGlyphProperty)
    {
        s_UnsetGlyphProperty =
            InitializeDependencyProperty(
                L"UnsetGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::RatingItemFontInfo>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
}

void RatingItemFontInfoProperties::ClearProperties()
{
    s_DisabledGlyphProperty = nullptr;
    s_GlyphProperty = nullptr;
    s_PlaceholderGlyphProperty = nullptr;
    s_PointerOverGlyphProperty = nullptr;
    s_PointerOverPlaceholderGlyphProperty = nullptr;
    s_UnsetGlyphProperty = nullptr;
}

void RatingItemFontInfoProperties::DisabledGlyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_DisabledGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::DisabledGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_DisabledGlyphProperty));
}

void RatingItemFontInfoProperties::Glyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_GlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::Glyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_GlyphProperty));
}

void RatingItemFontInfoProperties::PlaceholderGlyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_PlaceholderGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::PlaceholderGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_PlaceholderGlyphProperty));
}

void RatingItemFontInfoProperties::PointerOverGlyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_PointerOverGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::PointerOverGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_PointerOverGlyphProperty));
}

void RatingItemFontInfoProperties::PointerOverPlaceholderGlyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_PointerOverPlaceholderGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::PointerOverPlaceholderGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_PointerOverPlaceholderGlyphProperty));
}

void RatingItemFontInfoProperties::UnsetGlyph(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<RatingItemFontInfo*>(this)->SetValue(s_UnsetGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring RatingItemFontInfoProperties::UnsetGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<RatingItemFontInfo*>(this)->GetValue(s_UnsetGlyphProperty));
}
