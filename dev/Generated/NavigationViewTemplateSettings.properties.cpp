﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "NavigationViewTemplateSettings.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(NavigationViewTemplateSettings)
}

#include "NavigationViewTemplateSettings.g.cpp"

GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_BackButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_LeftPaneVisibilityProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_OpenPaneLengthProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_OverflowButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_PaneToggleButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_PaneToggleButtonWidthProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_SingleSelectionFollowsFocusProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_SmallerPaneToggleButtonWidthProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_TopPaddingProperty{ nullptr };
GlobalDependencyProperty NavigationViewTemplateSettingsProperties::s_TopPaneVisibilityProperty{ nullptr };

NavigationViewTemplateSettingsProperties::NavigationViewTemplateSettingsProperties()
{
    EnsureProperties();
}

void NavigationViewTemplateSettingsProperties::EnsureProperties()
{
    if (!s_BackButtonVisibilityProperty)
    {
        s_BackButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"BackButtonVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(winrt::Visibility::Collapsed),
                nullptr);
    }
    if (!s_LeftPaneVisibilityProperty)
    {
        s_LeftPaneVisibilityProperty =
            InitializeDependencyProperty(
                L"LeftPaneVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(winrt::Visibility::Visible),
                nullptr);
    }
    if (!s_OpenPaneLengthProperty)
    {
        s_OpenPaneLengthProperty =
            InitializeDependencyProperty(
                L"OpenPaneLength",
                winrt::name_of<double>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(320.0),
                nullptr);
    }
    if (!s_OverflowButtonVisibilityProperty)
    {
        s_OverflowButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"OverflowButtonVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(winrt::Visibility::Collapsed),
                nullptr);
    }
    if (!s_PaneToggleButtonVisibilityProperty)
    {
        s_PaneToggleButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"PaneToggleButtonVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(winrt::Visibility::Visible),
                nullptr);
    }
    if (!s_PaneToggleButtonWidthProperty)
    {
        s_PaneToggleButtonWidthProperty =
            InitializeDependencyProperty(
                L"PaneToggleButtonWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SingleSelectionFollowsFocusProperty)
    {
        s_SingleSelectionFollowsFocusProperty =
            InitializeDependencyProperty(
                L"SingleSelectionFollowsFocus",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SmallerPaneToggleButtonWidthProperty)
    {
        s_SmallerPaneToggleButtonWidthProperty =
            InitializeDependencyProperty(
                L"SmallerPaneToggleButtonWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TopPaddingProperty)
    {
        s_TopPaddingProperty =
            InitializeDependencyProperty(
                L"TopPadding",
                winrt::name_of<double>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                nullptr);
    }
    if (!s_TopPaneVisibilityProperty)
    {
        s_TopPaneVisibilityProperty =
            InitializeDependencyProperty(
                L"TopPaneVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::NavigationViewTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(winrt::Visibility::Collapsed),
                nullptr);
    }
}

void NavigationViewTemplateSettingsProperties::ClearProperties()
{
    s_BackButtonVisibilityProperty = nullptr;
    s_LeftPaneVisibilityProperty = nullptr;
    s_OpenPaneLengthProperty = nullptr;
    s_OverflowButtonVisibilityProperty = nullptr;
    s_PaneToggleButtonVisibilityProperty = nullptr;
    s_PaneToggleButtonWidthProperty = nullptr;
    s_SingleSelectionFollowsFocusProperty = nullptr;
    s_SmallerPaneToggleButtonWidthProperty = nullptr;
    s_TopPaddingProperty = nullptr;
    s_TopPaneVisibilityProperty = nullptr;
}

void NavigationViewTemplateSettingsProperties::BackButtonVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_BackButtonVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility NavigationViewTemplateSettingsProperties::BackButtonVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_BackButtonVisibilityProperty));
}

void NavigationViewTemplateSettingsProperties::LeftPaneVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_LeftPaneVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility NavigationViewTemplateSettingsProperties::LeftPaneVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_LeftPaneVisibilityProperty));
}

void NavigationViewTemplateSettingsProperties::OpenPaneLength(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_OpenPaneLengthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double NavigationViewTemplateSettingsProperties::OpenPaneLength()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_OpenPaneLengthProperty));
}

void NavigationViewTemplateSettingsProperties::OverflowButtonVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_OverflowButtonVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility NavigationViewTemplateSettingsProperties::OverflowButtonVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_OverflowButtonVisibilityProperty));
}

void NavigationViewTemplateSettingsProperties::PaneToggleButtonVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_PaneToggleButtonVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility NavigationViewTemplateSettingsProperties::PaneToggleButtonVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_PaneToggleButtonVisibilityProperty));
}

void NavigationViewTemplateSettingsProperties::PaneToggleButtonWidth(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_PaneToggleButtonWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double NavigationViewTemplateSettingsProperties::PaneToggleButtonWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_PaneToggleButtonWidthProperty));
}

void NavigationViewTemplateSettingsProperties::SingleSelectionFollowsFocus(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_SingleSelectionFollowsFocusProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool NavigationViewTemplateSettingsProperties::SingleSelectionFollowsFocus()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_SingleSelectionFollowsFocusProperty));
}

void NavigationViewTemplateSettingsProperties::SmallerPaneToggleButtonWidth(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_SmallerPaneToggleButtonWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double NavigationViewTemplateSettingsProperties::SmallerPaneToggleButtonWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_SmallerPaneToggleButtonWidthProperty));
}

void NavigationViewTemplateSettingsProperties::TopPadding(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_TopPaddingProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double NavigationViewTemplateSettingsProperties::TopPadding()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_TopPaddingProperty));
}

void NavigationViewTemplateSettingsProperties::TopPaneVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<NavigationViewTemplateSettings*>(this)->SetValue(s_TopPaneVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility NavigationViewTemplateSettingsProperties::TopPaneVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<NavigationViewTemplateSettings*>(this)->GetValue(s_TopPaneVisibilityProperty));
}